#include <iostream>
#include <iomanip>
using namespace std;
void SumDob(double a,double b);
int main()
{
    int n;
    cin>>n;
    for(int z=0;z<n;z++)
    {
        double a,b;
        cin>>a>>b;
        SumDob(a,b);
    }
    return 0;
}

void SumDob(double a,double b)
{
    double x,y;
    x=a+b;
    y=a*b;
    std::cout << std::fixed<< std::setprecision(4) << x << " " << y << std::endl;
}