#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int x;
    int y;

    public:
    Rectangle(){}

    Rectangle(int a, int b)
    {
       x = a;
       y = b;
    }


   void show()
   {
         cout<<x<<" "<<y<<endl;
   }


};


class Polar
{
   private:
   int radius;
   int angle;

   public:
   Polar(int r, int a)
   {
       radius = r;
       angle = a;
   }


   void show()
   {
         cout<<radius<<" "<<angle<<endl;
   }


   operator Rec();


};

Polar::operator Rec()
{
   int x = r * cos(angle);
   int y = r * cos(angle);

   return Rec(x,y);
}

int main()
{
   Rectangle rect;
   Polar polar(5,45);

   rect = polar;

   rect.show();



 return 0;
}
