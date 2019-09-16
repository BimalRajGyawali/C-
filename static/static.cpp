#include <iostream>

using namespace std;

class Test
{
     private:
     static int objCount;

     public:
     Test()
     {
        objCount++;
     }

     static void display()
     {
        cout<<objCount<<endl;
     }


};

int Test::objCount;

int main()
{

  Test test;

  Test::display();

  Test test1,test2;

  Test::display();



  return 0;

}
