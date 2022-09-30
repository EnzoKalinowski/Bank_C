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
    _eventSet.insert(event);
}

void DES::run()
{
    
}

double DES::time()
{
    return _time;
}
