//Made by Gautam Sharma

#include <iostream>

void HelloWorld(int a) //A simple hello world function
{
    std::cout << "Hello World! Value: " << a << std::endl;
}

int main()
{


      typedef void(*HelloWorldFunction)(int);
      
      HelloWorldFunction function = HelloWorld; //Defined a function pointers
      
      function(8); //Invoked the function pointer
      



}
