#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    int inp;
    for(int i = 0; i < n; i++)
    {
       cin>>inp;
       vec.push_back(inp);
    }
    int pos, start, end;
    cin>>pos;
    vec.erase(vec.begin() + pos - 1);
    cin>>start>>end;
    vec.erase(vec.begin() + start - 1, vec.begin() + end - 1);
    cout<<vec.size()<<endl;
    for(int i = 0; i< vec.size(); i++)
        cout<<vec[i]<<" ";
    return 0;
}