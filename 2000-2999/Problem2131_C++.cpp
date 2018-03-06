#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x,y , a,b,result;
    cin>>a>>b>>x>>y;
    result=sqrt( ( (a-x)*(a-x) )+( (b-y)*(b-y) )   );
    std::cout<< std::fixed << std::setprecision(6)<<result;

    return 0;
}
