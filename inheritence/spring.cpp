#include <iostream>

using namespace std;

class University
{
     protected:
     char* uniname;

     public:
     University(char* n)
     {
        uniname = n;

     }

};

class AffiliatedCollege: public virtual University
{
        protected:
        char* affname;

        public:
        AffiliatedCollege(char* n,char* uniname) : University(uniname)
        {
          affname = n;
        }



};

class ConstituentCollege: public virtual University
{
        protected:
        char* consname;

        public:
        ConstituentCollege(char* n,char* uniname) : University(uniname)
        {
          consname = n;
        }



};


class Student: public AffiliatedCollege, public ConstituentCollege
{

        private:
        char* name;
        char* program;

        public:
        Student(char* n, char* p, char* cons, char* aff, char* uni):AffiliatedCollege(aff,uni), ConstituentCollege(cons,uni),University(uni)
        {
               name= n;
               program = p;


        }

       void show()
       {
          cout<<name<<" "<<program<<" "<<affname<<" "<<consname<<" "<<uniname<<endl;
       }



};

int main()
{

Student student("Saru","Bsc","NCIT","NEC","PoU");

student.show();




return 0;

}
