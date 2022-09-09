
#include "Bank.h"

Bank::Bank(double plannedTime, int nbCashier, double* averageServiceTimeCashiers, double averageArrivalTimeInterval)
{
    _plannedTime=plannedTime;
    _nbCashier=nbCashier;
    _averageArrivalTimeInterval=averageArrivalTimeInterval;

    for(int i=0;i<nbCashier;i++){
        _cashiers[i]= new Cashier(averageServiceTimeCashiers[i]);
    }
}

double Bank::plannedTime()
{
    
}

int Bank::nbCashier()
{
    
}

double Bank::averageArrivalTimeInterval()
{
    
}

double Bank::realTime()
{
    
}

int Bank::nbCustomer()
{
    
}

Cashier* Bank::firstFree()
{
    
}


