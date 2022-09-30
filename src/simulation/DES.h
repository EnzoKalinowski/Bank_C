#ifndef __SED_H__
#define __SED_H__

#include "Event.h"
#include <set>

class DES{
    protected:
        double _time;
        std::set<Event*> _eventSet;

    public:
        /**
         * @brief Constructor of DES objects
         */
        DES();
        /**
         * @brief Destructor of DES objects
         */
        ~DES();
        /**
         * @brief Add new event to the set
         */
        void add(Event& event);
        /**
         * @brief Run the simulation
         */
        void run();
        /**
         * @brief Getter for the attribute "time"
         * @return double
         */
        double time();
};

#endif // __SED_H__