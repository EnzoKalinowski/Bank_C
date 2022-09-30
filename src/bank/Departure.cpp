#include "Departure.h"
#include <iostream>

using namespace std;

Departure::Departure(Customer& customer, Cashier& cashier, double triggerTime):Event(triggerTime){
    _customer = &customer;
    _cashier = &cashier;
}

Departure::~Departure()
{
    delete _customer;
    delete _cashier;
}

void Departure::process(){
    _cashier->serve(*_customer);
    // TO DO, retirer le client de la file
    cout << "A customer has been served. Elapsed time : " << _cashier->getBank()->time() - _triggerTime << "ms";
}