#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

class Customer{

    protected:
        double _arrivalTime;
        double _serviceTime;
    public:
        Customer(double serviceTime);
        double arrivalTime();

};

#endif // __CUSTOMER_H__