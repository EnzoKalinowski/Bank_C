#include <Departure.h>

Departure::Departure(Customer& customer, Cashier& cashier, double triggerTime){
    _customer = customer;
    _cashier = cashier;
    _triggerTime = triggerTime;
}

void Departure::process(){
    if(_cashier.isFree()){
        _cashier.serve(_customer);
    }
    //TO-DO
}