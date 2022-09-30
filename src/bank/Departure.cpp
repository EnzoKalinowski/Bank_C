#include "Departure.h"
#include <iostream>

using namespace std;

Departure::Departure(Customer& customer, Cashier& cashier, double triggerTime, Bank& bank):Event(triggerTime){
    cout << "departure1" << endl;
    _customer = &customer;
    _cashier = &cashier;
    _bank = &bank;
    cout << "departure2" << endl;
}

Departure::~Departure()
{
    cout << "Destrdeparture1" << endl;
    delete _customer;
    delete _cashier;
    cout << "Destrdeparture2" << endl;

}

void Departure::process(){
    cout << "Depprocess1" << endl;
    if(_bank->getWaitingLine()->isEmpty())
    {
        cout << "Depprocess1.1" << endl;
        _cashier->wait();
    }
    else
    {
        cout << "Depprocess1.2" << endl;
        _customer=_bank->getWaitingLine()->remove();
        _cashier->serve(_customer);

    }
    cout << "Depprocess2" << endl;
    // TO DO, retirer le client de la file
    cout << "A customer has been served. Elapsed time : " << _cashier->getBank()->time() - _triggerTime << "ms";
}