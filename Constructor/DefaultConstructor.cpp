#include <iostream>

using namespace std;

class Employee
{
  
     //default constructor

	  public:

	  	Employee()
	  	{
	  		cout<<"Default Constructor"<<endl;
	  	}


};

 int main()
 {
 	Employee firstEmployee; //default constructor is called
 	Employee secondEmployee; //default constructor is called
 	Employee thirdEmployee;  //default constructor is called
 }
