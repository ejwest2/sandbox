/* Listing 8.1: Demonstrating the Use of the Reference Operator (&), a.k.a. Address-Of Operator
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   const double Pi = 3.1416;

   // Use & to find the address in memory
   cout << "Integer age is located at: " << &age << endl;
   cout << "Douple Pi is located at: " << &Pi << endl;

   return 0;
}
