#ifndef __DEPARTURE_H__
#define __DEPARTURE_H__

#include "../simulation/Event.h"
#include "./Cashier.h"
#include "./Customer.h"
#include "Bank.h"

/**
 * @brief Event corresponding to a customer's departure
 * 
 */
class Departure: public Event {
    protected:
        Customer* _customer;
        Cashier* _cashier;

    public:
        /**
         * @brief Construct a new Departure object
         * 
         * @param customer customer who leave the bank
         * @param cashier cashier who processed the customer
         * @param triggerTime departure time
         */
        Departure(Customer& customer, Cashier& cashier, double triggerTime);
        /**
         * @brief Destroy the Departure object
         * 
         */
        ~Departure();
        /**
         * @brief cashier serve the customer
         * 
         */
        void process();
};

#endif // __DEPARTURE_H__