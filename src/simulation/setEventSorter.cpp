#include "setEventSorter.h"

bool setEventSorter::operator()(Event* e1, Event* e2)
{
    return e1->triggerTime()<e2->triggerTime();
}
