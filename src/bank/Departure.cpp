#include "Departure.h"
#include <iostream>

using namespace std;

Departure::Departure(Customer& customer, Cashier& cashier, double triggerTime){
    _customer = customer;
    _cashier = cashier;
    _triggerTime = triggerTime;
}

void Departure::process(){
    _cashier.serve(_customer);
    cout << "A customer has been served. Elapsed time : " << _cashier.getBank()->time() - _triggerTime << "ms";
}