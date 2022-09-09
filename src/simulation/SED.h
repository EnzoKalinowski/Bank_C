#ifndef __SED_H__
#define __SED_H__

#include "Event.h"
#include <set>

class SED{
    protected:
        std::set<Event> _eventSet;

    public:
        SED();
        void run();
        double heure();

};

#endif // __SED_H__