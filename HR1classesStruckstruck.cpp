#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Print function
void print_vector(vector<int> &vect)
   {   cout<<"Shifted array is: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }


/*
    add code for struct here.
*/
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
