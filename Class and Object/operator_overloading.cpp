#include <iostream>

using namespace std;

class Time
{
   private:
   int hours,minutes,seconds ;

   public:
   Time(int hours, int minutes, int seconds)
   {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
   }

   Time()
   {
      hours = 0;
      minutes = 0;
      seconds = 0;
   }

   ~Time()
   {
   }

   void show()
   {
      cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
   }

   //overloaded operator

   Time operator +(Time t);

};

Time Time::operator +(Time t)
{
   Time time;

   time.seconds = seconds + t.seconds;

   while(time.seconds >= 60)
   {
      time.minutes += time.seconds/60;
      time.seconds = time.seconds % 60;
   }

  time.minutes += minutes + t.minutes;

  while(time.minutes >= 60)
  {
    time.hours += time.minutes/60;
    time.minutes = time.minutes%60;

  }

  time.hours += hours + t.hours;

  return time;

}



int main()
{
  Time t1(1,30,30);
  Time t2(2,50,40);

  Time t = t1+t2;

  t.show();

  return 0;
}
