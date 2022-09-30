#ifndef __WAITINGLINE_H__
#define __WAITINGLINE_H__

#include "Customer.h"
#include <queue>

class Bank;

/**
 * @brief This entity describes every element of a waiting line. 
 * This waiting line is principally composed of a queue.
 * 
 */
class WaitingLine{
    protected:
        int _maxLength;
        int _sumLength;
        int _denLength;
        double _sumWaitingTime;
        std::queue<Customer*> _customersQueue;
        Bank* _bank;
    
    public:
        /**
         * @brief Construct a new Waiting Line object
         * 
         * @param bank 
         */
        WaitingLine(Bank& bank);
        /**
         * @brief Destroy the Waiting Line object
         * 
         */
        ~WaitingLine();
        /**
         * @brief return max length of the waitingLine
         * 
         * @return int 
         */
        int maxLength();
        /**
         * @brief return averagelength of the waiting line
         * 
         * @return double 
         */
        double averagelength();
        /**
         * @brief averageWaitingTime of customers
         * 
         * @return double 
         */
        double averageWaitingTime();
        /**
         * @brief add a customer to the waitingLine
         * 
         * @param c 
         */
        void add(Customer& c);
        /**
         * @brief remove a customer from the waitingLine
         * 
         * @return Customer* 
         */
        Customer* remove();
        /**
         * @brief return true if waitingLine is empty
         * 
         * @return true 
         * @return false 
         */
        bool isEmpty();

};
#endif // __WAITINGLINE_H__