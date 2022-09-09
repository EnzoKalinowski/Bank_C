#ifndef __BANK_H__
#define __BANK_H__

#include "../simulation/DES.h"
#include "WaitingLine.h"
#include "Cashier.h"

class Bank:public DES{

    protected:
        double _plannedTime;
        int _nbCashier;
        double _averageArrivalTimeInterval;
        int _nbCustomer;
        Cashier** _cashiers;
        WaitingLine* waitingLine; 
    public:
        Bank(double plannedTime, int nbCashier, double* averageServiceTimeCashiers, double averageArrivalTimeInterval);
        double plannedTime();
        int nbCashier();
        double averageArrivalTimeInterval();
        double realTime();
        int nbCustomer();
        Cashier* firstFree();

};

#endif // __BANK_H__