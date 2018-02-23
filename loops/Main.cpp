#include <iostream>
#include "Utility.h"
using namespace std;

int main(void)
{
    Utility *bill;
    Utility u(100, 200, 50);
    cout << "How much do you pay for utilities every month?" << endl;
    u.DisplayInfo();
    return 0;
}