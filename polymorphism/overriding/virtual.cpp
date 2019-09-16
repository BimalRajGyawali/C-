#include<iostream>

using namespace std;

class Base
{

   public:
  virtual void display()
   {
      cout<<"Base class"<<endl;
   }




};


class Derived: public Base
{
   public:
  void display()
   {
      cout<<"Derived class"<<endl;

   }

      void newMethod()
   {
      cout<<"Method not in base class but in derived class only"<<endl;

   }


};


int main()
{
  Base b;
  b.display(); //base class

  Derived d;
  d.display(); //derived class

  Base* ptr;

  ptr= &b;
  ptr->display(); //base class

  ptr = &d;   //this only can call those methods which were originally in base class
  ptr->display(); //derived class

  cout<<"======================="<<endl;

 // ptr->newMethod(); //error

  ((Derived*)ptr)->newMethod();//this is fine as we are downcasting base pointer to derived class type




 return 0;
}
