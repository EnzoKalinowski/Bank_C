#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

/**
 * @brief Customer entity described by his arrival time.
 * 
 */
class Customer{

    protected:
        double _arrivalTime;
    public:
        /**
         * @brief Construct a new Customer object
         * 
         * @param arrivalTime 
         */
        Customer(double arrivalTime);
        /**
         * @brief return the arrivalTime
         * 
         * @return double 
         */
        double arrivalTime();
};

#endif // __CUSTOMER_H__