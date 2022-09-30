#include "SetEventSorter.h"

bool SetEventSorter::operator()(Event* e1, Event* e2)
{
    return e1->triggerTime()<e2->triggerTime();
}
