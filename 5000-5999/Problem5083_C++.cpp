#include <iostream>
using namespace std;
int main()
{
    register long long n,m,i,a;
    cin>>n;
    register long long str[n];
    register long long sum[n];
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        sum[i]= str[i]/100+(str[i]%100/10)+(str[i]%10)+str[i]/1000+str[i]/10000+str[i]/100000+str[i]/1000000+str[i]/10000000+str[i]/100000000+str[i]/1000000000+str[i]/10000000000;
       // cout << sum[i]<<" ";
    }
    a=0;
     for(i=0;i<n;i++)
     {
         if(sum[i]<=sum[a])a=i;
     }
     cout << str[a];
    return 0;
}
