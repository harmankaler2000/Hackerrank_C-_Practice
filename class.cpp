#include<iostream>
#include<sstream>
using namespace std;
/*
members of class are private by default

create class Student that has the following variables:
input to class:
age, standard-int
first_name, last_name - string

functions to define:
get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
to_string() : returns the above elements in a comma
separted string

output:
1. print age
2. last_name, first_name
3. standard
4. age, first_name, last_name, standard
*/

class Student
{
    int age, standard;
    string first_name, last_name;

    public:
    void set_age(int input_age)
    {
        age = input_age;
    }
    int get_age()
    {
        return age;
    }

    void set_first_name(string f_name)
    {
        first_name = f_name;
    }
    string get_first_name()
    {
        return first_name;
    } 

    void set_last_name(string l_name)
    {
        last_name = l_name;
    }
    string get_last_name()
    {
        return last_name;
    }

    void set_standard(int s)
    {
        standard = s;
    }
    int get_standard()
    {
        return standard;
    }

    string to_string()
    {
        stringstream ss;
        char c = ',';
        ss<<age<<c<<first_name<<c<<last_name<<c<<standard;
        return ss.str();
    }

};
int main()
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
//do virtual functions