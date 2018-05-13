#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int f=0,n;
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(f==0)
        {
            n=(int)a[i];
            if( n>96  && n<123 ) a[i] = n-32;
            f=1;
        }
        if(a[i]==' ' && a[i+1]!=' ')
            f=0;

    }
    cout << a;
    return 0;
}
