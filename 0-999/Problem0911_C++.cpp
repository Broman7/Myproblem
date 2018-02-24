#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,x,y,d;
    cin>> a>>b>>c;
    d=b*b-(4*a*c);
    if(d>0)
    {
        cout<<"Two roots: ";
        x=(-1*b+sqrt(d))/(2*a);
        y=(-1*b-sqrt(d))/(2*a);
        cout << min(x,y) << " "<< max(x,y);
    }else if(d==0)
    {
        cout<<"One root: ";
        x=(-1*b+sqrt(d))/(2*a);
        cout << x;
    }else cout<<"No roots ";
    return 0;
}