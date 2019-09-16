#include <iostream>
#include <string.h>

using namespace std;

class StringConcat
{
   private:
   char str[100];

   public:
   StringConcat(char n[100])
   {
      strcpy(str,n);
   }

   StringConcat(){}


   StringConcat operator +(StringConcat arg)
   {
      StringConcat s(str);

      strcat(s.str,arg.str);

      return s;


   }


void print()
{
   cout <<str<<endl;
}


};

int main()
{
  StringConcat s1("Hello"), s2("World");

  StringConcat s = s1+s2;

  s.print();

  s1.print();
  s2.print();





  return 0;
}
