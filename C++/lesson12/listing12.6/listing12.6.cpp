/* Listing 12.6: A Class with Overloaded Equality (==) and Inequality (!=) Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Date
{
private:
   int day, month, year;

public:
   Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear) {};

   bool operator== (const Date& compareTo) // equality operator
   {
      return ((day == compareTo.day) && (month == compareTo.month) && (year == compareTo.year));
   }

   bool operator!= (const Date& compareTo) // inequality operator
   {
      return !(this->operator==(compareTo));
   }

   void DisplayDate()
   {
      cout << month << " / " << day << " / " << year << endl;
   }
};

int main()
{
   Date holiday1 (12, 25, 2016);
   Date holiday2 (12, 31, 2016);
   cout << "holiday1 is: ";
   holiday1.DisplayDate();
   cout << "holiday2 is: ";
   holiday2.DisplayDate();

   if (holiday1 == holiday2)
      cout << "Equality operator: The two are on the same day" << endl;
   else
      cout << "Equality operator: The two are on different days" << endl;

   if (holiday1 != holiday2)
      cout << "Inequality operator: The two are on different days" << endl;
   else
      cout << "Inequality operator: The two are on the same day" << endl;

   return 0;
}
