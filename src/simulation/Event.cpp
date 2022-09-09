#include "Event.h"

Event::Event(double triggerTime){
    _triggerTime = triggerTime;
}

double Event::triggerTime(){
    return _triggerTime;
}