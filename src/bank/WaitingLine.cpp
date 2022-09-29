#include "WaitingLine.h"
#include "Bank.h"

WaitingLine::WaitingLine(Bank& bank)
{
    _bank=&bank;
    _maxLength=0;
    _sumLength=0;
    _denLength=0;
    _sumWaitingTime=0;

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
    _customersQueue.push(c);
}

Customer& WaitingLine::remove()
{   
    Customer& customer=_customersQueue.front();
    _customersQueue.pop();
    return customer;
}

bool WaitingLine::isEmpty()
{
    return _customersQueue.empty();
}
