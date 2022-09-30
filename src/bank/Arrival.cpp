#include "Arrival.h"


Arrival::Arrival(double triggerTime, Bank& bank):Event(triggerTime) 
{
     std::cout << "arrivalProcess0.1" << std::endl;
    _triggerTime = triggerTime;
    _bank = &bank;
    std::cout << "arrivalProcess0.2" << std::endl;
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
          //cashier->serve(customer);
          _bank->getWaitingLine()->add(*customer);
          std::cout << "SIZE ARRIVAL PROCESS : " << _bank -> getWaitingLine() ->isEmpty() << std::endl;
     }
     else{
          _bank->getWaitingLine()->add(*customer);
     }
     double triggerTime = _bank->time() + _bank->getArrivalTimeGenerator().generate();
     std::cout << "arrivalProcess3" << std::endl;
     if(triggerTime<=_bank->plannedTime()){
          Arrival *arrival = new Arrival(triggerTime,*_bank);
          _bank->add(*arrival);
     }
     std::cout << "arrivalProcess4" << std::endl;
}