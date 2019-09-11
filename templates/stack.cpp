#include <iostream>

using namespace std;

const int n = 10;

template <class T>

class Stack
{
     private:
     T stck[n];
     int top;

     public:
     Stack()
     {
        top = -1;
     }

     void push(T data)
     {
         if(top== (n-1))
         {
           cout<<"stack is full"<<endl;

         }
         else
         {
         top++;
         stck[top] = data;
         }
     }

    void pop()
    {
        if(top==-1)
        {
           cout<<"stack is empty"<<endl;

        }

        else{
        top--;
}

    }

    void show()
    {
      for(int i=top;i>=0;i--)
      {
         cout<<stck[i]<<endl;
      }
    }


};

int main()
{
    Stack<char> obj;
    obj.pop();
    obj.push('c');
    obj.show();
    obj.push('2');
    obj.show();
    obj.pop();
    obj.show();

    return 0;

}
