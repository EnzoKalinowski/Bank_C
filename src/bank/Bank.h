#ifndef __BANK_H__
#define __BANK_H__

#include "../simulation/SED.h"
#include "WaitingLine.h"
#include "Cashier.h"

class Bank:public SED{

    protected:
        double _plannedTime;
        int _nbCashier;
        double _intervalArrivalTime;
        double _realTime;
        int _nbCustomer;
        Cashier** _cashiers;
        WaitingLine* waitingLine; 
    public:
        Bank();
        double plannedTime();
        int nbCashier();
        double intervalArrivalTime();
        double realTime();
        int nbCustomer();
        Cashier* firstFree();

};

#endif // __BANK_H__