#include "Customer.h"

Customer::Customer(double arrivalTime){
    _arrivalTime = arrivalTime;
}

double Customer::arrivalTime(){
    return _arrivalTime;
}