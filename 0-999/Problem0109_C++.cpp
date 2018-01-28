#include <iostream>
using namespace std;
int main()
{
    int n,s=0,i=0;
    cin>>n;
    while(s<n)
    {
        i++;
        if(i<10)s++;
        else if(i<100)s+=2;
        else if(i<1000)s+=3;
        else if(i<10000)s+=4;
        else if(i<100000)s+=5;
    }
    if(s>n) cout <<"0";
        else cout << i;
    return 0;
}
