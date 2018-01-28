#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,a,b,i=0,m;
    char s[100];
    gets(s);
    cin>>a>>b;
    i=a-1;
    m=b;
    cout << b-a+1<<endl;
    while(i<m)
    {
        cout << s[i];
        i++;
    }
    return 0;
}
