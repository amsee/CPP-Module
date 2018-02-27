#include <iostream>
#include "Ticket.h"
using namespace std;

int main(void)
{
    Ticket t(100, "A");
    t.DisplayInfo();
    cout << "display ticket info" << endl;
    return 0;
}