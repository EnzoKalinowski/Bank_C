#ifndef __BANK_H__
#define __BANK_H__

#include "../simulation/DES.h"
#include "WaitingLine.h"
#include "Cashier.h"
#include "../simulation/PoissonGenerator.h"


class Bank:public DES{

    protected:
        double _plannedTime;
        int _nbCashier;
        double _averageArrivalTimeInterval;
        int _nbCustomer;
        Cashier** _cashiers;
        WaitingLine* _waitingLine; 
        PoissonGenerator _arrivalTimeGenerator;
    public:
        /**
         * @brief Construct a new Bank object
         * 
         * @param plannedTime duration planned for the simulation
         * @param nbCashier number of cashier in the bank
         * @param averageServiceTimeCashiers average service time of cashiers
         * @param averageArrivalTimeInterval average interval between two customers arrivals
         */
        Bank(double plannedTime, int nbCashier, double* averageServiceTimeCashiers, double averageArrivalTimeInterval);
        /**
         * @brief Destroy the Bank object
         * 
         */
        ~Bank();
        /**
         * @brief return plannedTime
         * 
         * @return double 
         */
        double plannedTime();
        /**
         * @brief return number of cashiers
         * 
         * @return int 
         */
        int nbCashier();
        /**
         * @brief return averageArrivalTimeInterval
         * 
         * @return double 
         */
        double averageArrivalTimeInterval();
        /**
         * @brief number of customers during the simulation
         * 
         * @return int 
         */
        int nbCustomer();
        /**
         * @brief return the first free cashier
         * 
         * @return Cashier* 
         */
        Cashier* firstFree();
        /**
         * @brief Get the Waiting Line object
         * 
         * @return WaitingLine* 
         */
        WaitingLine* getWaitingLine();
        /**
         * @brief Get the Arrival Time Generator object
         * 
         * @return PoissonGenerator 
         */
        PoissonGenerator getArrivalTimeGenerator();
};

#endif // __BANK_H__