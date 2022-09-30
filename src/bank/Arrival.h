#ifndef __ARRIVAL_H__
#define __ARRIVAL_H__

#include "../simulation/Event.h"
#include "Customer.h"
#include "Bank.h"
#include <iostream>
#include <random>


class Arrival : public Event
{
    protected:
        double _triggerTime;
        Bank* _bank;

    public:
        /**
         * @brief Construct a new Arrival object
         * 
         * @param triggerTime 
         * @param bank 
         */
        Arrival(double triggerTime, Bank& bank);
        /**
         * @brief create customer and add it to waitingLine or is served by cashier, generate next Arrival
         * 
         */
        void process();
};

#endif // __ARRIVAL_H__