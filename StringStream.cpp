#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> vec;
    char c = ',';
    stringstream ss(str);
    int temp;
    while(ss>>temp)
    {
        vec.push_back(temp);
        ss>>c;
    }
    return vec;
}
int main()
{
    string str;
    cin>>str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
        cout<<integers[i]<<"\n";
    return 0;
}