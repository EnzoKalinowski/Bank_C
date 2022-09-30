#include "DES.h"
#include <set>
#include <iostream>

using namespace std;
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
    cout << "5.1" << endl;
    Event* currentEvent;
    cout << "5.2" << endl;

    while(!_eventSet.empty())
    {   
        cout << "5.3" << endl;
        currentEvent=*_eventSet.begin();
        cout << "5.4" << endl;
        _eventSet.erase(currentEvent);
        cout << "5.5" << endl;
        _time=currentEvent->triggerTime();
        cout << "5.6" << endl;
        currentEvent->process();
        cout << "5.7" << endl;
        delete currentEvent;
        cout << "5.8" << endl;
    }
}

double DES::time()
{
    return _time;
}
