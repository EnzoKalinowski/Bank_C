#ifndef __SETEVENTSORTER_H__
#define __SETEVENTSORTER_H__

#include "Event.h"
class setEventSorter 
{
    public:
        bool operator()(Event* e1, Event* e2) ;
};
#endif // __SETEVENTSORTER_H__