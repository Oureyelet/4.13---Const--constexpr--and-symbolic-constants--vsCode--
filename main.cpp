#include <iostream>
#include "first.h"

using namespace std;

int main()
{
  my_name();

  /*
  To make a variable constant, simply put the const keyword 
  either before or after the variable type, like so:
  */
  const double gravity { 9.8 }; //preffered use of const before type
  int const sidesInSquare { 4 }; // ok, but not preffered

  /*
  Declaring a variable as const prevents us from inadvertently changing its value:
  const double gravity { 9.8 };
  gravity = 9.9; // not allowed, this will cause a compile error
  */

  /*
  Bad: Using object-like macros with a substitution parameter as symbolic constants:
  */

  #define MAX_STUDENT_PER_CLASS 30
  int max_student { numClassrooms(5) * MAX_STUDENT_PER_CLASS };
  cout << max_student << '\n' << endl;

  //Warning!
  //Avoid using #define to create symbolic constants macros.

  /*
  A better solution: Use constexpr variables
  A better way to create symbolic constants is through use of constexpr variables:
  constexpr int maxStudentsPerClass { 30 };
  constexpr int maxNameLength { 30 };
  !constexpr means 'constant expression' unlike const , constexpr can also be 
  applied to functions and class constructors.
  */

  /*
  Using symbolic constants throughout a multi-file program
  */
  cout << "Enter a radius: ";
  int radius {};
  cin >> radius;

  double circumference { 2.0 * constants::pi * radius };
  cout << "The circumference is: " << circumference << '\n' << endl;


    


  return 0;
}