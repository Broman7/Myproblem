#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{

    double x,y,z,n;
    cin>>x>>y>>z;
    n=min(min(max(x,y),max(y,z)),x+y+z);
    cout << std::fixed<<std::setprecision(2)<< n;
    return 0;
}
