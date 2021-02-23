#include "first.cpp"

#ifndef FIRST_ONE
#define FIRST_ONE

bool my_name();
int sidesInSquare(int);
int numClassrooms(int);

#endif //  end FIRST_ONE

#ifndef CONSTANTS_ONE
#define CONSTANTS_ONE
 
  // define your own namespace to hold constants
  namespace constants
  {
  constexpr double pi { 3.14159 };
  constexpr double avogadro { 6.0221413e23 };
  constexpr double my_gravity { 9.2 }; // m/s^2 -- gravity is light on this planet
  // ... other related constants
  }
  #endif // end CONSTANTS_ONE