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

bool Event::operator < (const Event& event) const{
    return (_triggerTime < event._triggerTime);
}

bool Event::operator > (const Event& event) const{
    return (_triggerTime > event._triggerTime);
}

bool Event::operator == (const Event& event) const{
    return (_triggerTime == event._triggerTime);
}