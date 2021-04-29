#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, value, which, index, size;
    cin>>n>>q;
    vector<vector<int>> vec;
    for(int i = 0; i < n; i++)
    {
        cin>>size;
        vector<int> temp;
        for(int j = 0; j < size; j ++)
        {
            cin>> value;
            temp.push_back(value);
        }
        vec.push_back(temp);
    }
    
    for(int i = 0; i < q; i++)
    {
        cin>>which>>index;
        cout<<vec[which][index]<<endl;
    }
    return 0;
}
