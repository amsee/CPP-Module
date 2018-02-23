//  * Treat.h
namespace Amy;
{
    class Treat
    {
        private:
            int first;
            int last;
        public:
        Treat(void);
        Treat(int f, int l);
        void display_info(void) const;
    };
}