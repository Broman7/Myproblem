#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
    double a,b,c,p;
    double d,x,y,z;
    cin>>a>>b>>c;
    p=(a+b+c)/2.0;
    d=sqrt(p*(p-a)*(p-b)*(p-c) );
    x=2*d/a;
    y=2*d/b;
    z=2*d/c;
    printf("%0.*f %0.*f %0.*f",2,x,2,y,2,z);    
    return 0;
}