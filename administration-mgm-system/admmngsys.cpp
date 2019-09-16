#include <iostream>
#include <string>
#include <vector>

using namespace std;

int symbolno = 100;



class Student
{

 private:

    int roll;
    string fname;
    string lname;
    string address;
    int age;
    string faculty;
    float marksInHighSchool;
    string majorInHighSchool;
    bool scholarship;




 public:

 Student(int roll){ this->roll = roll;}

 void setFname(string fname){ this->fname = fname;}
 void setLname(string lname){ this->lname = lname; }
 void setAddress(string address){ this->address = address;}
 void setAge(int age){ this->age = age; }
 void setFaculty(string faculty){ this->faculty = faculty;}
 void setMarksInHighSchool(float marksInHighSchool){ this->marksInHighSchool = marksInHighSchool;}
 void setMajorInHighSchool(string majorInHighSchool){ this->majorInHighSchool = majorInHighSchool;}
 void setScholarship(bool scholarship){ this->scholarship = scholarship; }

 int getRoll(){ return roll;}
 string getFname(){ return fname;}
 string getLname(){ return lname;}
 string getAddress(){ return address;}
 int getAge(){ return age;}
 string getFaculty(){ return faculty;}
 float getMarksInHighSchool(){ return marksInHighSchool;}
 string getMajorInHighSchool(){ return majorInHighSchool;}
 bool getScholarship(){ return scholarship;}


 void printInfo()
 {
     cout<<"Name : "<<endl;
     cout<<fname<<" "<<lname<<endl;
     cout<<"Roll : "<<endl;
     cout<<roll<<endl;
     cout<<"Address : "<<endl;
     cout<<address;
     cout<<"Age :"<<endl;
     cout<<age<<endl;
     cout<<"Faculty :"<<endl;
     cout<<faculty<<endl;
     cout<<"Major In High School :"<<endl;
     cout<<majorInHighSchool;
     cout<<"Marks In High School :"<<endl;
     cout<<marksInHighSchool<<endl;
     cout<<"Scholarship :"<<endl;
     cout<<scholarship<<endl;
 }


};

vector<Student> btechStudents;
vector<Student> bitStudents;


Student createStudent(int symbolno, float marksInHighSchool, string majorInHighSchool)
{


    string fname;
    string lname;
    string address;
    int age;




    Student student(symbolno);

    cout<<"Provide your info:"<<endl;

    cout<<"First Name:";
    cin>>fname;

    cout<<"Last Name:";
    cin>>lname;

    cout<<"Address:";
    cin>>address;

    cout<<"Age:";
    cin>>age;





    student.setFname(fname);
    student.setLname(lname);
    student.setAddress(address);
    student.setAge(age);
    student.setMajorInHighSchool(majorInHighSchool);
    student.setMarksInHighSchool(marksInHighSchool);


    return student;

}



void enrollStudent()
{

    string faculty,majorInHighSchool;
    float marksInHighSchool;


    cout<<"Enter info for eligibility criteria"<<endl;

    cout<<"Faculty :";
    cin>>faculty;

    cout<<"Major In High School";
    cin>>majorInHighSchool;

    cout<<"Marks In High School";
    cin>>marksInHighSchool;

    if(faculty=="BIT" || faculty=="bit")
    {
          if(majorInHighSchool=="science" && marksInHighSchool>=50)
          {

               symbolno++;
               cout<<"You are eligible for BIT course"<<endl;

               Student student = createStudent(symbolno,marksInHighSchool,majorInHighSchool);
               student.setFaculty("BIT");

               if(marksInHighSchool>=90)
               {
                    student.setScholarship(true);
               }

               else
               {
                   student.setScholarship(false);
               }

                bitStudents.push_back(student);

               cout<<"Your entrance exam is on June 30th"<<endl;
               cout<<"Your entrance symbol no. is :"<<symbolno<<endl;

          }

          else
          {
             cout<<"Criteria not fulfilled"<<endl;
             return ;
          }

    }

    else if(faculty=="BTech"||faculty=="btech")
    {

           if(majorInHighSchool=="science" && marksInHighSchool>=40)
          {


               cout<<"You are eligible for BIT course"<<endl;

               Student student = createStudent(0,marksInHighSchool,majorInHighSchool);
               student.setFaculty("BTech");

               if(marksInHighSchool>=90)
               {
                    student.setScholarship(true);
               }

               else
               {
                   student.setScholarship(false);
               }

               btechStudents.push_back(student);

               cout<<"Please visit the account for admission"<<endl;


          }

          else
          {
             cout<<"Criteria not fulfilled"<<endl;
             return ;
          }

   }

   else
   {
     cout<<"Entered faculty is not in this college"<<endl;
   }



}





//method to display students

void listAllStudents(vector<Student> students)
{

   vector<Student>::iterator it;


   for ( it = students.begin(); it != students.end(); ++it ) {

      // For each friend, print out their info

      it->printInfo();

    }

}


int main()
{

  int choice;

  while(true)
  {

  cout<<"Enter to choose"<<endl;

  cout<<"1.Enroll in a course"<<endl;
  cout<<"2.List BIT Students"<<endl;
  cout<<"3.List BTech Students"<<endl;
  cout<<"4.Exit"<<endl;

   cin>>choice;


   switch(choice)
   {
      case 1:
             enrollStudent();
         break;

      case 2:
          listAllStudents(bitStudents);
         break;

      case 3:
          listAllStudents(btechStudents);
         break;

      case 4: exit(1);
         break;



  }

  }

    return 0;

}




