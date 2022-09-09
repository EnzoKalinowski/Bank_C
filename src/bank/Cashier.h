#ifndef __CASHIER_H__
#define __CASHIER_H__

#include "Customer.h"

class Cashier{
    protected:
        double _averageServiceTime;
        int _nbCustomers;
        double _occupancyTime;

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