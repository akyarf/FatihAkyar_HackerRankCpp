#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> parseInts(string str) {
    //cout<<"str is "<<str<<endl;
	// Complete this function
    stringstream ss(str);
    vector<int> kaynana;
    string temp;

    for(char i : str)
    {
        //cout<<"i is "<<i<<endl;
        if(i!=','){temp=temp+i;/*cout<<"inside if temp is "<<temp<<endl;*/}
        else
        {
            int intemp=stoi(temp);
            //cout<<"inside else intemp is "<<intemp<<endl;
            kaynana.push_back(intemp);
            //cout<<"kaynana is "<<temp<<endl;
            temp="";
        }
    }
    kaynana.push_back(stoi(temp));

return kaynana;
}

int main() {
    string str={"23,4,56"};
    //cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
