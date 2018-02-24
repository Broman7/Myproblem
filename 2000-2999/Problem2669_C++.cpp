#include <iostream>

using namespace std;

int main()
{
    int a,b,i,z;
    cin>>a>>b;
    int st[a][b];
    for(i=0;i<a;i++)
        {
            for(z=0;z<b;z++)
            {
                cin>>st[i][z];
            }
        }
      cout << b<<" "<<a<<endl;
    z=0;
    for(i=a-1;z<b;i--)
        {
            if(i==-1)
            {
                z++;
                i=a-1;
                cout << "\n";
            }
            for(;z<b;z++)
            {
                cout<<st[i][z]<<" ";
                break;
            }

        }

    return 0;
}
