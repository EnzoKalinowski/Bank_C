#include "Cashier.h"
#include "Bank.h"

#include <iostream>

using namespace std;

Cashier::Cashier(int averageServiceTime,Bank& bank)
{
    _averageServiceTime=averageServiceTime;
    _bank=&bank;
    _free=true;
    _occupancyTime=0;
    _nbCustomers=0;
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

void Cashier::serve(Customer& c)
{
    cout << "A cashier is serving one of the customer";
    _free = false;
    _nbCustomers = _nbCustomers + 1;
    _occupancyTime = _occupancyTime + (_bank->realTime() - c.arrivalTime());
}

void Cashier::wait()
{
    cout << "Cashier is waiting for customers...";
    _free = true;
}

Bank* Cashier::getBank()
{
    return _bank;
}


