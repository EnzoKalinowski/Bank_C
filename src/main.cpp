
#include "./bank/Customer.h"
#include "./bank/Bank.h"
#include "./bank/Customer.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    std::queue<Customer*> evQ;
    cout << "SIZE : " << evQ.size() << endl;
    Customer* cus = new Customer(10.0);
    evQ.push(cus);
    cout << "SIZE : " << evQ.size() << endl;

    cout << "1" << endl;
    double plannedTime = 20;
    int nbCashier = 5;
    double averageArrivalTimeInterval = 5;
    double averageServiceTimeCashiers[5] = {10.0, 3.0, 7.0, 1.0, 9.0};

    cout << "2" << endl;
    Bank* bank = new Bank(plannedTime, nbCashier, averageServiceTimeCashiers, averageArrivalTimeInterval);
    bank->run();

    cout << "5" << endl;
    bank->~Bank();
    cout << "6" << endl;
}
