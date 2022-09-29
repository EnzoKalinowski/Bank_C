#include "Event.h"

Event::Event(double triggerTime){
    _triggerTime = triggerTime;
}

void Event::process()
{
    
}

double Event::triggerTime(){
    return _triggerTime;
}