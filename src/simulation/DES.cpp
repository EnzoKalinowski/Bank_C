#include "DES.h"
#include <set>

DES::DES()
{
    _time=0;
}

DES::~DES()
{

}
void DES::add(Event& event)
{
    _eventSet.insert(&event);
}

void DES::run()
{
    Event* currentEvent;

    while(!_eventSet.empty())
    {   
        currentEvent=*_eventSet.begin();
        _eventSet.erase(currentEvent);
        _time=currentEvent->triggerTime();
        currentEvent->process();
        delete currentEvent;
    }
}

double DES::time()
{
    return _time;
}
