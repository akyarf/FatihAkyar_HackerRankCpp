#include <iostream>

using namespace std;

class Box {        // The class
public:          // Access specifier
    int brand;  // Attribute
    int model;  // Attribute
    int year;      // Attribute

    int getLength()
    {
        return
    }

    Box() { // Constructor with parameters
      brand = 0;
      model = 0;
      year = 0;
    }
    Box(int x, int y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }

    Box(Box &instance) { // Constructor with parameters
      brand = instance.brand;
      model = instance.model;
      year = instance.year;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Box carObj1(1, 2, 1999);
  //Box carObj1;
  Box carObj2(carObj1);


  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
