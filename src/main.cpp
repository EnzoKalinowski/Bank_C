
#include "./bank/Customer.h"
#include "./bank/Bank.h"
#include "./bank/Customer.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){


    double plannedTime = 1;
    int nbCashier = 5;
    double averageArrivalTimeInterval = 0.1;
    double averageServiceTimeCashiers[5] = {10.0, 3.0, 7.0, 1.0, 9.0};

    Bank* bank = new Bank(plannedTime, nbCashier, averageServiceTimeCashiers, averageArrivalTimeInterval);
    bank->run();
    cout<<"run finished"<<endl;

    delete bank;

    
}
