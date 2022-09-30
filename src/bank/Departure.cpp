#include "Departure.h"
#include <iostream>

using namespace std;

Departure::Departure(Customer& customer, Cashier& cashier, double triggerTime, Bank& bank):Event(triggerTime){

    _customer = &customer;
    _cashier = &cashier;
    _bank = &bank;

}

Departure::~Departure()
{
    delete _customer;
    // delete _cashier;
}

void Departure::process(){

    if(_bank->getWaitingLine()->isEmpty())
    {
        
        _cashier->wait();
    }
    else
    {
        _customer=_bank->getWaitingLine()->remove();
        _cashier->serve(_customer);
    }
    cout << "A customer has been served. Elapsed time : " << _bank->time() << "ms"<<endl;
}