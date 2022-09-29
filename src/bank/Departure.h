#ifndef __DEPARTURE_H__
#define __DEPARTURE_H__

#include "../simulation/Event.h"
#include "./Cashier.h"
#include "./Customer.h"
#include "Bank.h"


class Departure: public Event {
    protected:
        Customer* _customer;
        Cashier* _cashier;

    public:
        Departure(Customer& customer, Cashier& cashier, double triggerTime);
        ~Departure();
        void process();
};

#endif // __DEPARTURE_H__