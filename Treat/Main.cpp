// * Main.cpp
#include <iostream>
#include "Treat.h"
using namespace std;
using namespace Amy;

int main(void)
{
    Treat fl; 
    Treat f(4, 40);

    cout << "First/Last Treat" << endl;

    f.display_info();
    return 0;
}