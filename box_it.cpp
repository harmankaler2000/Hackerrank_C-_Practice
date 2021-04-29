#include<bits/stdc++.h>
using namespace std;

/*
class box:
var:
int length, breadth, height.
default constructor - intialize them to zero
parameterized const takes in l,b,h
copy constructor- Box(Box B) - sets l,b,h to B
other functions:
    int getLength() - Return box's length
    int getBreadth() - Return box's breadth
    int getHeight() - Return box's height
    long long CalculateVolume() - Return the volume of the box

overload the operator < if Box A < Box B if:
A.l < B.l
A.b < B.b && A.l == B.l
A.h < B.h && A.b == B.b && A.l == B.l

overload the operator << for class Box() if B is an object of class B:
cout<< B => prints B.l B.b B.h seprated by a space
*/

class Box
{
    int l, b, h;
    public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int len, int bred, int hei)
    {
        l = len;
        b = bred;
        h = hei;
    }
    Box(const Box&B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    

    int getHeight()
    {
        return h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }
    friend ostream& operator<<(ostream& out, Box& B)
    {
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
    friend bool operator < (Box &A, Box &B)
    {
        if(A.l < B.l)
            return true;
        else if(A.b < B.b && A.l == B.l)
            return true;
        else if(A.h < B.h && A.b == B.b && A.l == B.l)
            return true;
        return false;
    }
};

int main()
{
    //input is done by hackerrank
}