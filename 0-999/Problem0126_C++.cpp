#include <iostream>
using namespace std;
int main()
{
    int n,p,q,s,k,a=1,b=1,h,l;
    cin>>n>>p>>q>>k;
    s=n/(p*q);
    h=n/p;
    l=k;
    while(l>h)
    {
        a++;
        l-=h;
    }
    while(l>s)
    {
        b++;
        l-=s;
    }
    cout << a<<" "<<b;
    return 0;
}