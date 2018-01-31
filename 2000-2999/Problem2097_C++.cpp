#include <iostream>
using namespace std;
int main()
{

    int x,y,i,a,b,c;
    cin>>x>>y;
    for(i=x;i<=y;i++)
    {
        a=i/100;
        b=i%100/10;
        c=i%10;
        if(a!=b && b!=c && a!=c)
            cout << i<< endl;

    }
    return 0;
}
