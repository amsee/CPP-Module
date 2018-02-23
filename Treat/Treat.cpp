// * Implementation file
#include <iostream>
#include "Treat.h"
using namespace std;

// * Constructuctor in Amy namespace
namespace Amy
{
    Treat::Treat(void)
    {
        first = 0;
        last = 0;
    }
    Treat::Treat(int f, int l) 
    {
        if ((first >= 1) && (first <= 10))
        {
            first = f;
        }
        if ((last >= 20)) && (last <= 60))
        {
            last = l;
        }
    }
    void Treat::display_info(void) const
    {
        cout << "First: " << first << endl;
        cout << "Last: " << last << endl;
    }
}
