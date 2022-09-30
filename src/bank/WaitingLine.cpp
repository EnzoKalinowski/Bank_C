#include "WaitingLine.h"
#include "Bank.h"
#include <iostream>

WaitingLine::WaitingLine(Bank& bank)
{
    _bank=&bank;
    _maxLength=0;
    _sumLength=0;
    _denLength=0;
    _sumWaitingTime=0;
}

WaitingLine::~WaitingLine()
{
    // delete _bank;
}

int WaitingLine::maxLength()
{
    return _maxLength;
}

double WaitingLine::averagelength()
{
    return _sumLength/_denLength;
}

double WaitingLine::averageWaitingTime()
{
    return _sumWaitingTime/ _bank->nbCustomer();
}

void WaitingLine::add(Customer& c)
{
    _customersQueue.push(&c);
    _sumLength+=_customersQueue.size();
    _denLength+=1;
    if(_customersQueue.size()>_maxLength)
    {
        _maxLength=_customersQueue.size();
    }
}

Customer* WaitingLine::remove()
{   
    Customer* customer=_customersQueue.front();
    _customersQueue.pop();
    _sumWaitingTime+=(_bank->time()-customer->arrivalTime());
    _sumLength+=_customersQueue.size();
    _denLength+=1;
    return customer;
}

bool WaitingLine::isEmpty()
{
    return _customersQueue.empty();
}
