#include <iostream>
#include "Utility.h"
using namespace std;

namespace Amy
{
    Utility::Utility(void)
    {
        water = 0;
        electricity = 0;
        internet = 0;
    }
    Utility::Utility(int w, int e, int i)
    {
        if (water <= 100)
        {
            water = w;
        }
        if (electricity >= 100)
        {
            electricity = w;
        }
        if (internet == 50)
        {
            internet = i;
        }
    }
    void Utility::DisplayInfo(void) const
    {
        cout << "Cost of water bill per month: " << water << endl;
        cout << "Cost of electricity bill per month: " << electricity << endl;
        cout << "Cost of internet bill per month: " << internet << endl;
    }
}

