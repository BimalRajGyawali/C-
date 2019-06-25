#include<iostream>

using namespace std;

class Student
{

    private:

    int roll;
    char* name;
    char* address;

    public:

    //setters
    void setRoll(int roll);
    void setName(char* name);
    void setAddress(char* address);

    void showInfo();


};

// implementing member functions
    void Student::setRoll(int roll)
    {
        (*this).roll = roll;

    }

     void Student::setName(char* name)
    {
        (*this).name = name;

    }

     void Student::setAddress(char* address)
    {
        (*this).address = address;

    }

    void Student::showInfo()
    {
         cout<<"Student[ "<<roll<<" ,"<<name<<" ,"<<address<<" ]"<<endl;
    }




int main()
{

   Student firstStudent;

   firstStudent.setRoll(1);
   firstStudent.setName("Ram");
   firstStudent.setAddress("Illam");

   firstStudent.showInfo();

   Student secondStudent;

   secondStudent.setRoll(2);
   secondStudent.setName("Sita");
   secondStudent.setAddress("Janakpur");

   secondStudent.showInfo();
   


}
