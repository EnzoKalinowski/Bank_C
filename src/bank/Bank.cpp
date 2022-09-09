
#include "Bank.h"

Bank::Bank(double plannedTime, int nbCashier, double* averageServiceTimeCashiers, double averageArrivalTimeInterval)
{
    _plannedTime=plannedTime;
    _nbCashier=nbCashier;
    _averageArrivalTimeInterval=averageArrivalTimeInterval;

    for(int i=0;i<nbCashier;i++)
    {
        _cashiers[i]= new Cashier(averageServiceTimeCashiers[i]);
    }
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

double Bank::realTime()
{
    return _time;
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


