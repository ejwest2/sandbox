/* Listing 9.14: Using Keyword 'friend' to Allow External Functions Access to Private Data
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
   friend void DisplayAge(const Human& person);
   string name;
   int age;

public:
   Human(string humansName, int humansAge)
   {
      name = humansName;
      age = humansAge;
   }
};

void DisplayAge(const Human& person)
{
   cout << person.age << endl;
}

int main()
{
   Human firstMan("Adam", 25);
   cout << "Accessing private member age via friend function: ";
   DisplayAge(firstMan);

   return 0;
}

