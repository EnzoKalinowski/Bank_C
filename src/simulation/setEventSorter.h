#ifndef __SETEVENTSORTER_H__
#define __SETEVENTSORTER_H__

#include "Event.h"
class setEventSorter 
{
    public:
    /**
     * @brief return e1<e2 based on triggerTime value
     * 
     * @param e1 
     * @param e2 
     * @return true 
     * @return false 
     */
        bool operator()(Event* e1, Event* e2) ;
};
#endif // __SETEVENTSORTER_H__