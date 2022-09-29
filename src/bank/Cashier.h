#ifndef __CASHIER_H__
#define __CASHIER_H__

#include "Customer.h"
class Bank;

class Cashier{
    protected:
        double _averageServiceTime;
        int _nbCustomers;
        double _occupancyTime;
        bool _free;
        Bank* _bank;

    public:
        Cashier(int averageServiceTime, Bank& bank);
        ~Cashier();
        double averageServiceTime();
        int nbCustomers();
        double occupacyRate();
        bool isFree();
        void serve(Customer& c);
        void wait();
        Bank* getBank();




        

};
#endif // __CASHIER_H__