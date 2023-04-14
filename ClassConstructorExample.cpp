// Cpp program to illustrate the
// concept of Constructors
#include <iostream>
using namespace std;

class Box {
public:
    int brand, model,year;

    // Default Constructor
    Box()
    {
        brand = 10;
        model = 20;
        year;
    }
};

int main()
{
    // Default constructor called automatically
    // when the object is created
    Box c;
    cout << "a: " << c.brand << endl << "b: " << c.model<< endl << "year: " << c.year;
    return 1;
}
