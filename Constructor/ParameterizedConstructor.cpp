#include<iostream>

using namespace std;

class Student
{

    private:

    int roll;
    string name;
    string address;



    public:

    //constructor with one argument



      Student(int roll)
      {
            (*this).roll = roll;
      }

      //Constructor with two arguments

      Student(int roll, string name)
      {
          (*this).roll = roll;
          (*this).name = name;
      }

      //constructor with three arguments

        Student(int roll, string name, string address)
      {
          (*this).roll = roll;
          (*this).name = name;
          (*this).address = address;
      }

      // Default constructor
       Student()
       {
          roll = 0; // since roll has garbage value
          cout<<"Default Constructor, member variables for different objects can't be set"<<endl;
       }


    void showInfo();


};



    void Student::showInfo()
    {
         cout<<"Student[ "<<roll<<" ,"<<name<<" ,"<<address<<" ]"<<endl;
    }




int main()
{

   Student firstStudent; // default constructor is called
   firstStudent.showInfo(); // no values are set so default value is printed

   Student secondStudent(1); //constructor with one arg is called
   secondStudent.showInfo(); // only rollno is set

   Student thirdStudent(2,"Hemant"); //constructor with two args is called
   thirdStudent.showInfo(); // rollno and name are set

   Student fourthStudent(3,"Shikha","Itahari"); // constructor with three agrs is called
   fourthStudent.showInfo(); // rollno, name and address all are set


}
