#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,temp;
    cin>>n;
    vector<int> v;
    vector<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    cin>>q;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i=0;i<q;i++)
    {
        cin>>n;
        it = std::lower_bound(v.begin(), v.end(), n);
        if(v[it-v.begin()]==n)
        {
            cout<<"Yes "<<n+1<<endl;
        }else {
        cout<<"No "<<n+1<<endl;
        }
    }
}
