#include "Cashier.h"
#include "Bank.h"
#include "Departure.h"
#include "../simulation/PoissonGenerator.h"
#include <iostream>

using namespace std;

Cashier::Cashier(int averageServiceTime,Bank& bank):
    _serviceTimeGenerator(averageServiceTime)
{
    _averageServiceTime=averageServiceTime;
    _bank=&bank;
    _free=true;
    _occupancyTime=0;
    _nbCustomers=0;
  
}

Cashier::~Cashier()
{
    // delete _bank;
}

double Cashier::averageServiceTime()
{
    return _averageServiceTime;
}

int Cashier::nbCustomers()
{
    return _nbCustomers;
}

double Cashier::occupacyRate()
{
    return _occupancyTime;
}

bool Cashier::isFree()
{
    return _free;
}

void Cashier::serve(Customer* c)
{
    cout << "A cashier is serving one of the customer"<<endl;
    double servingTime = _serviceTimeGenerator.generate();
    double departureTime = _bank->time() + servingTime;
    _occupancyTime += servingTime;
    Departure* departure= new Departure(*c,*this,departureTime,*_bank);
    _bank->add(*departure);
    _free = false;
    _nbCustomers = _nbCustomers + 1;
}

void Cashier::wait()
{
    cout << "Cashier is waiting for customers..."<<endl;
    _free = true;
}

Bank* Cashier::getBank()
{
    return _bank;
}


