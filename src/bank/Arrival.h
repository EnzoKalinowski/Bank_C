#ifndef __ARRIVAL_H__
#define __ARRIVAL_H__

#include "../simulation/Event.h"

class Bank;

class Arrival : public Event
{
    protected:
        double _triggerTime;
        Bank* _bank;

    public:
        Arrival(double triggerTime, Bank* bank);
        void process();
};

#endif // __ARRIVAL_H__