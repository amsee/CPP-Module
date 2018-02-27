// * Header File
// *Ticket.h

namespace Amy
{
   class Ticket
   {
       private:
            int price;
            char seat[2];
        public:
        Ticket(void);
        Ticket(int pr, const char* se);
        void DisplayInfo(void) const;
   };
}