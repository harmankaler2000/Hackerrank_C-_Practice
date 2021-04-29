#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    //print size of both strings
    cout<<s1.length()<<" "<<s2.length()<<"\n";
    //concatenating
    cout<<s1+s2<<"\n";
    //swap the first char of both strings and print them
    //save the char
    char c1 = s1[0];
    char c2 = s2[0];
    //swap the chars
    s1[0] = c2;
    s2[0] = c1;
    cout<<s1<<" "<<s2<<"\n";
}