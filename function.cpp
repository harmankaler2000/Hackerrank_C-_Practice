#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int greatest;
    int arr[] = {a,b,c,d};
    greatest = arr[0];
    for(int i = 0; i < 4;i++)
    {
        if(arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }
    return greatest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
