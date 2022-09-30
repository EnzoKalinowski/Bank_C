
#include "Bank.h"
#include "Arrival.h"
#include <iostream>

using namespace std;

Bank::Bank(double plannedTime, int nbCashier, double* averageServiceTimeCashiers, double averageArrivalTimeInterval):
    _arrivalTimeGenerator(averageArrivalTimeInterval),
    DES()
{   
    _plannedTime=plannedTime;
    _nbCashier=nbCashier;
    _averageArrivalTimeInterval=averageArrivalTimeInterval;
    _waitingLine=new WaitingLine(*this);
    _cashiers = new Cashier*[_nbCashier]();
    for(int i=0;i<nbCashier;i++)
    {
        cout << averageServiceTimeCashiers[i] << endl;
        _cashiers[i]= new Cashier(averageServiceTimeCashiers[i],*this);
    }
    Arrival *firstArrival = new Arrival(0, *this);
    this->add(*firstArrival);
}

Bank::~Bank()
{
    delete[] _cashiers;
    delete _waitingLine;
}

double Bank::plannedTime()
{
    return _plannedTime;
}

int Bank::nbCashier()
{
    return _nbCashier;
}

double Bank::averageArrivalTimeInterval()
{
    return _averageArrivalTimeInterval;
}

int Bank::nbCustomer()
{
    return _nbCustomer;   
}

Cashier* Bank::firstFree()
{
    for (int i=0;i<_nbCashier;i++)
    {
        if (_cashiers[i]->isFree())
        {
            return _cashiers[i];
        }
    }

    return NULL;
}
WaitingLine* Bank::getWaitingLine()
{
    return _waitingLine;
}

PoissonGenerator Bank::getArrivalTimeGenerator()
{
    return _arrivalTimeGenerator;
}


