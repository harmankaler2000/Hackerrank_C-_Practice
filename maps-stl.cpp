#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string, int> stu;
    int x,y;
    string z;
    for(int i = 0; i < n;i++)
    {
        cin>>x>>z;
        if(x == 1)
        {
            cin>>y;
            map<string, int>::iterator it1 = stu.find(z);
            if(it1 == stu.end())
                stu.insert(make_pair(z,y));
            else
                stu[z] += y;
        }

        else if(x == 2)
            stu.erase(z);
        else if(x == 3)
        {
            map<string, int>::iterator it = stu.find(z);
            if(it == stu.end())
                cout<<0<<endl;
            else
                cout<<stu[z]<<endl;
        }
    }
    return 0;
}