namespace Amy
{
    class Utility
        {
            private:
                int water;
                int electricity;
                int internet;
            public:
                Utility(void);
                Utility(int w, int e, int i);
                void DisplayInfo(void) const;
        };
}