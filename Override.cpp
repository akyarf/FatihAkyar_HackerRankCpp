#include <iostream>

using namespace std;

// define the base class

class parent_class

{

public:

    // define overridden function

    void display_message()

    {

        cout << "I am the base class function.\n\n";

    }

};

// define the derived class

class derived_class : public parent_class

{

public:

    // define overriding function

    void display_message()

    {

        cout << "I am the derived class function.\n\n";

    }

};

int main()

{

    // create instances of the derived class

    derived_class obj1, obj2;

    // call the overriding function

    obj1.display_message();

    // call the overridden function of the Base class

    obj2.parent_class::display_message();

    return 0;

}
