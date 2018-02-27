#include <iostream>
#include "Ticket.h"
using namespace std;

namespace Amy
{
        Ticket::Ticket(void)
        {
            price = 0;
            seat[0] = '\0';
        }
        Ticket::Ticket(int pr, const char* se)
        {
            if ((price >= 100) && (price <= 400))
            {
                price = pr;
            }
            if (seat == A)
            {
                strcpy(seat, se);
                cout << "your seat number" << endl;
            }
        }
        void Ticket::DisplayInfo(void) const
        {
            cout << "price" << endl;
            cout << "seat number" << endl;
        }
}