#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,n=0;
    cin>>a>>b>>x>>y;
    while(1)
    {
        if(b==0)
        {
            if(a>12) n+=a-12;
            else if(a==0)n+=12;
            else n+=a;
        }
        if(b==30)n++;
        if(a>=x && b>=y)break;
        b+=1;
        if(b>30 && b!=60 && a<b) b=59;
        if(b==60)
        {
            a++;
            b=0;
        }
    }

    cout << n;
    return 0;
}
