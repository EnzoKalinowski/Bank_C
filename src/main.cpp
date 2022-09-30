
#include "./bank/Customer.h"
#include "./bank/Bank.h"
#include "./bank/Customer.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){


    double plannedTime = 20;
    int nbCashier = 5;
    double averageArrivalTimeInterval = 5;
    double averageServiceTimeCashiers[5] = {10.0, 3.0, 7.0, 1.0, 9.0};

    Bank* bank = new Bank(plannedTime, nbCashier, averageServiceTimeCashiers, averageArrivalTimeInterval);
    bank->run();

    bank->~Bank();

    
}
