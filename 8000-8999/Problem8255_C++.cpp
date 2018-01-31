#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    long long i,n,s,z,c,l;
    cin>>n>>s;
    z=n-1;
    for(i=pow(10,z);i<pow(10,n);i++)
    {
        l=i;
        c=0;
        while(l>0)
        {
            c+=l%10;
            l/=10;
        }
       if(c==s)
        cout << i << endl;
    }
    return 0;
}
