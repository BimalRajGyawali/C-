
#include <iostream>

using namespace std;

 class Rectangle 
 {
    private :
    int length,breadth;

    public :
    Rectangle(int length, int breadth)
    {
         (*this).length = length;
         (*this).breadth = breadth;
 
    }

    public :
    Rectangle(Rectangle& rect)
    {
       length = rect.length ;
       breadth = rect.breadth;
    }
    
    public :
    void display()
    {
       cout << length << endl;
       cout << breadth << endl;
    }

 };


 
   int main()
   {
     
      Rectangle firstRect(10,5);
      Rectangle secondRect(firstRect);

      firstRect.display();
      secondRect.display();


     return 0; 
      


   }
    
