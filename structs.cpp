#include<iostream>
using namespace std;

/*
input:
age
first_name
last_name
standard

separated by one whitespace char

members of structs are public by default
*/
struct Student
{
    int age, standard;
    string first_name,last_name;

};

int main()
{
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
}