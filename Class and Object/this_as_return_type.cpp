#include <iostream>

using namespace std;

class Mountain
{

  private:
  char* name;
  int height;

  public:
  void showInfo()
  {
    cout<<"Mountain["<<name<<","<<height<<"]"<<endl;
  }

  Mountain(char* name, int height)
  {
     this->name = name;
     this->height = height;

  }




  Mountain getMountain(Mountain mountain)
  {
      if(height > mountain.height)
      {
         return *(this);
      }

     return mountain;


  }




};


int main()
{

   Mountain m1("Everest",8848);
   Mountain m2("Annapurna",8800);

   Mountain m = m1.getMountain(m2);

   m.showInfo();

   return 0;





}
