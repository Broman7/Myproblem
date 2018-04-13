#include <iostream>
#include <algorithm>
using namespace std;

int numf(int x,int y);

int main()
{
    int abc,a,b,c;
    cin>>abc;

    a=abc/100;
    b=abc%100/10;
    c=abc%10;

    cout << min(min(numf(a,c) ,numf(b,c) ),numf(a,b) );


    return 0;
}

int numf(int x,int y)
{
    if(x>0)
    return x*10+y;
    else return 100;
}

