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
    //delete _bank;
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
    std::cout << "add1 " << std::endl;
    _customersQueue.push(&c);
    std::cout << "add2" << std::endl;
    _sumLength+=_customersQueue.size();
    std::cout << "add3" << std::endl;
    _denLength+=1;
    std::cout << "add4" << std::endl;
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
    std::cout << "isEmpty" << std::endl;
    return _customersQueue.empty();
}
