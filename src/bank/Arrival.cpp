#include "Arrival.h"
#include "Customer.h"
#include "Bank.h"
#include <iostream>
#include <random>


Arrival::Arrival(double triggerTime, Bank* bank):Event(triggerTime) 
{
    _triggerTime = triggerTime;
    _bank = bank;
}

void Arrival::process()
{
   Customer customer(_triggerTime);
   Cashier* cashier = _bank->firstFree();
   if(cashier != NULL)
   {
        cashier->serve(customer);
   }
   else{
        _bank->getWaitingLine()->add(customer);
   }
  double triggerTime = _bank->getArrivalTimeGenerator().generate();

  if(triggerTime<=_bank->plannedTime()){
		Arrival arrival(triggerTime,_bank);
		_bank->add(arrival);
  }

}