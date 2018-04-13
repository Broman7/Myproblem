#include <iostream>

using namespace std;

int main()
{
    int n,m=0,l=0,i;
    cin>>n;
    int str[n];
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<n;i++)
    {
        if(str[i]>0)
        {
            l++;
        }else
        {
            if(m<l)m=l;
            l=0;
        }
    }
    if(m<l)m=l;
    cout<<m;


    return 0;
}
