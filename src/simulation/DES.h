#ifndef __SED_H__
#define __SED_H__

#include "Event.h"
#include <set>

class DES{
    protected:
        double _time;
        std::set<Event> _eventSet;

    public:
        DES();
        void run();
        double heure();

};

#endif // __SED_H__