#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> vec;
    int inp;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        vec.push_back(inp);        
    }  
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
