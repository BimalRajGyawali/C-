#include <iostream>

using namespace std;

template <class T>
class Test
{
   private:
   T data;

   public:
   Test(T d) { data = d ;}

   void show() { cout<<data<<endl; }


};


int main()
{
    Test<int> test(5);
    test.show();

    Test<float> test1(4.3);
    test1.show();

  return 0;

}
