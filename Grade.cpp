// * implementation file
// Grade.cpp
#include <iostream> // header file
#include "Grade.h"
using namespace std;

// Constructor in Amy namespace
Amy::Grade()
{
    letter = '\0';
}

Amy::Grade(char l)
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

void Amy::ValidMessage(void) const
{
    cout << "Valid Grade" << endl;
}

void Amy::InvalidMessage(void) const
{
    cout << "Grade is not valid" << endl;
}