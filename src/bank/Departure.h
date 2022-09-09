#ifndef __DEPARTURE_H__
#define __DEPARTURE_H__

#include "../simulation/Event.h"

class Departure:public Event{

    public:
        Departure();
        void process();
};

#endif // __DEPARTURE_H__