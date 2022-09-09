#ifndef __ARRIVAL_H__
#define __ARRIVAL_H__

#include "../simulation/Event.h"

class Departure:public Event{

    public:
        Departure(double triggerTime);
        void process();
};

#endif // __ARRIVAL_H__