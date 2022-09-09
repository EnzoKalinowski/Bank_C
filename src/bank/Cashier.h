#ifndef __CASHIER_H__
#define __CASHIER_H__

#include "Customer.h"
#include "Bank.h"

class Cashier{
    protected:
        double _averageServiceTime;
        int _nbCustomers;
        double _occupancyTime;
        bool _free;
        Bank* _bank;

    public:
        Cashier(int averageServiceTime);
        double averageServiceTime();
        int nbCustomers();
        double occupacyRate();
        bool isFree();
        void serve(Customer& c);
        void wait();




        

};
#endif // __CASHIER_H__