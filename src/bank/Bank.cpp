
#include "Bank.h"
#include "Arrival.h"
#include <iostream>

using namespace std;

Bank::Bank(double plannedTime, int nbCashier, double* averageServiceTimeCashiers, double averageArrivalTimeInterval):
    _arrivalTimeGenerator(averageArrivalTimeInterval),
    DES()
{   
    cout << "4.1" << endl;
    _plannedTime=plannedTime;
    _nbCashier=nbCashier;
    _averageArrivalTimeInterval=averageArrivalTimeInterval;
    cout << "4.2" << endl;
    _cashiers = new Cashier*[_nbCashier]();
    for(int i=0;i<nbCashier;i++)
    {
        cout << averageServiceTimeCashiers[i] << endl;
        _cashiers[i]= new Cashier(averageServiceTimeCashiers[i],*this);
        cout << "4.3" << endl;
    }
    Arrival *firstArrival = new Arrival(0, *this);
    this->add(*firstArrival);
    cout << "4.4" << endl;
}

Bank::~Bank()
{
    delete[] _cashiers;
    cout << "5.1" << endl;
    delete _waitingLine;
    //_waitingLine->~WaitingLine();
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


