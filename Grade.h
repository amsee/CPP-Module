// * header file
// Grade.h
namespace Amy
{
    class Grade
    {
    private:
      char letter;
    public:
      Grade(void);
      Grade(char l);
      void ValidMessage(void) const;
      void InvalidMessage(void) const;
    };
}
