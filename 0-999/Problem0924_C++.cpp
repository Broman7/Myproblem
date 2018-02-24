#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double s,r,rm,sm;
    cin>>s>>r;
    sm=(3.141592654*r*r)-s;
    rm=sqrt(sm/(3.141592654));
    std::cout<<std::fixed <<std::setprecision(2)<<rm;
    return 0;

}
