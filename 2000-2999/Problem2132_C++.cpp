#include <iostream>
using namespace std;
int main()
{
    double x,y,a,b,res,c;
    cin>>x>>y>>a>>b>>c;
    res=(a*x)+(b*y)+c;
    if(res==0) cout<<"YES";
     else cout<<"NO";

    return 0;
}
