#ifndef __ARRIVAL_H__
#define __ARRIVAL_H__

#include "../simulation/Event.h"

class Arrival:public Event{

    public:
        Arrival(double triggerTime);
        void process();
};

#endif // __ARRIVAL_H__