#include "DES.h"

DES::DES()
{
    _time=0;
}

void DES::add(Event& event)
{
    _eventSet.insert(event);
}

void DES::run()
{
    
}

double DES::time()
{
    return _time;
}
