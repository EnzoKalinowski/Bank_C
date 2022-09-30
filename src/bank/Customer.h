#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

class Customer{

    protected:
        double _arrivalTime;
    public:
        Customer(double arrivalTime);
        double arrivalTime();
};

#endif // __CUSTOMER_H__