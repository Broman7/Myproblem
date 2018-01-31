#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{

    double x,y,z,n,i;
    cin>>x>>y>>z;
    for(i=x;i<=y;i+=z)
    {
        n=3*sin(i);
        std::cout << i<< " "<<std::fixed << std::setprecision(3) << n << std::endl;

    }
    return 0;
}