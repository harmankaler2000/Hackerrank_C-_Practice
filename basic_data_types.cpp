#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num1;
    char c;
    float num2;
    double num3;
    long num4;
    cin>>num1>>num4>>c>>num2>>num3;
    cout<<num1<<endl;
    cout<<num4<<endl;
    cout<<c<<endl;
    cout<<fixed<<std::setprecision(3);
    cout<<num2<<endl;
    cout<<fixed<<std::setprecision(9);
    cout<<num3<<endl;;
    return 0;
}
