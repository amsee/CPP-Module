// * implementation file
// Grade.cpp
#include <iostream> // header file
#include "Grade.h"
using namespace std;

// Constructor in Amy namespace

namespace Amy
{
    Grade::Grade()
    {
        letter = '\0';
    }

    Grade::Grade(char l)
    {
        bool valid = l == 'A' || l == 'B' || l == 'C' || l == 'D' || l == 'F';
        if (valid)
        {
            letter = l;
            ValidMessage();
        }
        else
        {
            *this = Grade();
            InvalidMessage();
        }
    }

    void Grade::ValidMessage(void) const
    {
        cout << "Valid Grade" << endl;
    }

    void Grade::InvalidMessage(void) const
    {
        cout << "Grade is not valid" << endl;
    }
}