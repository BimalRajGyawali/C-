# Constructor

A constructor is a special type of member function that initialises an object automatically when it is created.

Compiler identifies a given member function is a constructor by its name and the return type.

Constructor has the same name as that of the class and it does not have any return type. 

# Constructor Overloading

Constructor can be overloaded in a similar way as function overloading.

Overloaded constructors have the same name (name of the class) but different number of arguments.

Depending upon the number and type of arguments passed, specific constructor is called.

# Copy Constructor

An object can be initialized with another object of same type. This is same as copying the contents of a class to another class.

The object is passed as a parameter in the constructor by reference, not value nor by pointer.


# For Passing By Value

It is because if it's not by reference, it's by value. To do that you make a copy, and to do that you call the copy constructor. But to do that, we need to make a new value, so we call the copy constructor, and so on...

(You would have infinite recursion because "to make a copy, you need to make a copy".)


# For Passing By Pointer

You can write any constructor you want, and it can take a pointer if you want it to, but it won't be a "copy constructor
