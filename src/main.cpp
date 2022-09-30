
#include "./bank/Customer.h"
#include "./bank/Bank.h"
#include "setEventSorter.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    Event e1(5.0);
    Event e2(3.0);

    set<Event*,setEventSorter> mySet;
    mySet.insert(&e1);
    mySet.insert(&e2);

    Event* ce=*mySet.begin();
    cout << ce->triggerTime() << endl;
    return 0;
}
