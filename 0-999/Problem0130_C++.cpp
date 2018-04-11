#include <iostream>

using namespace std;

int main()
{
    double xa,xb,xc,x,ya,yb,yc,y,xab,yab,xca,yca,xbc,ybc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    xab = xb - xa;
    yab = yb - ya;

    xca = xa - xc;
    yca = ya - yc;

    xbc = xc - xb;
    ybc = yc - yb;

    if((xab * xca + yab * yca )==0)
    {
       x = xb - xa + xc;
       y = yb - ya + yc;
    }else if((xab*xbc+yab*ybc ) == 0 )
    {
        x = xc - xb + xa;
        y = yc - yb + ya;
    }else if((xbc * xca + ybc * yca)==0)
    {
        x = xa - xc + xb;
        y = ya - yc + yb;
    }


    cout<<x<<" "<<y;
    return 0;
}
