#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    long long f=0,s=0,d;
    int i,m,n=0;
    cin>>a;m=a.length();
    sort(a.begin(),a.end());
    i=a.length()-1;
    while(i > -1)
    {
        f*=10;
        f+=a[i]-48;
        i--;
    }
    reverse(a.begin(),a.end());
    i=a.length()-1;
    while(i > -1)
    {
        s*=10;
        s+=a[i]-48;
        i--;
    }
    f = d = f-s;
    while(d>0)
    {
        d/=10;
        m--;
    }
    if(m!=0)
    {
        a = "0";
        for(i=1;i<m;i++)a+="0";
        if(f!=0)cout << a << f;
        else cout << a;
        return 0;
    }
    cout<<f;
    return 0;
}
