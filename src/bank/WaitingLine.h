#ifndef __WAITINGLINE_H__
#define __WAITINGLINE_H__

#include "Customer.h"

class WaitingLine{
    protected:
        int _maxLength;
        double _averageLength;
        double _averageWaitingTime;
        Customer** _customers;
    
    public:
        WaitingLine();
        int maxLength();
        double averagelength();
        double averageWaitingTime();
        void add(Customer& c);
        Customer& remove();
        bool isEmpty();

};
#endif // __WAITINGLINE_H__