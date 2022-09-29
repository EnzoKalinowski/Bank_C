#ifndef __WAITINGLINE_H__
#define __WAITINGLINE_H__

#include "Customer.h"
#include <queue>

class Bank;

class WaitingLine{
    protected:
        int _maxLength;
        int _sumLength;
        int _denLength;
        double _sumWaitingTime;
        std::queue<Customer> _customersQueue;
        Bank* _bank;
    
    public:
        WaitingLine(Bank& bank);
        ~WaitingLine();
        int maxLength();
        double averagelength();
        double averageWaitingTime();
        void add(Customer& c);
        Customer& remove();
        bool isEmpty();

};
#endif // __WAITINGLINE_H__