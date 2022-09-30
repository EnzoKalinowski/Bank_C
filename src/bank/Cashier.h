#ifndef __CASHIER_H__
#define __CASHIER_H__

#include "Customer.h"
#include "../simulation/PoissonGenerator.h"
class Bank;

class Cashier{
    protected:
        double _averageServiceTime;
        int _nbCustomers;
        double _occupancyTime;
        bool _free;
        Bank* _bank;
        PoissonGenerator _serviceTimeGenerator;

    public:
        /**
         * @brief Construct a new Cashier object
         * 
         * @param averageServiceTime average time to serve a customer
         * @param bank 
         */
        Cashier(int averageServiceTime, Bank& bank);
        /**
         * @brief Destroy the Cashier object
         * 
         */
        ~Cashier();
        /**
         * @brief return averageServiceTime
         * 
         * @return double 
         */
        double averageServiceTime();
        /**
         * @brief return the number of customers served
         * 
         * @return int 
         */
        int nbCustomers();
        /**
         * @brief rate of occupacy to serve customers during the simulation time
         * 
         * @return double 
         */
        double occupacyRate();
        /**
         * @brief return if the cashier is free or occupied by a customer
         * 
         * @return true 
         * @return false 
         */
        bool isFree();
        /**
         * @brief serve a customer 
         * 
         * @param c is a customer
         */
        void serve(Customer* c);
        /**
         * @brief wait a customer to serve
         * 
         */
        void wait();
        /**
         * @brief Get the Bank object
         * 
         * @return Bank* 
         */
        Bank* getBank();




        

};
#endif // __CASHIER_H__