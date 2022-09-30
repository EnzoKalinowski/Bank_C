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
        Arrival(double triggerTime, Bank& bank);
        void process();
};

#endif // __ARRIVAL_H__