#include "Arrival.h"


Arrival::Arrival(double triggerTime, Bank& bank):Event(triggerTime) 
{
    _triggerTime = triggerTime;
    _bank = &bank;
}

Arrival::~Arrival(){
     delete _bank;
}
void Arrival::process()
{
     std::cout << "arrivalProcess1" << std::endl;
     std::cout << "TRIGGER TIME " << _triggerTime << std::endl;
     Customer* customer = new Customer(_triggerTime);
     Cashier* cashier = _bank->firstFree();
     std::cout << "arrivalProcess2" << std::endl;
     if(cashier != NULL)
     {
          cashier->serve(customer);
     }
     else{
          _bank->getWaitingLine()->add(*customer);
     }
     double triggerTime = _bank->time() + _bank->getArrivalTimeGenerator().generate();
     if(triggerTime<=_bank->plannedTime()){
          Arrival *arrival = new Arrival(triggerTime,*_bank);
          _bank->add(*arrival);
     }
}