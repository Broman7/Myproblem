#include <iostream>
#include <vector>
using namespace std;
const int INF = 1000000;
int n,m,a,b,t,k,i,j,s,min_weight,ID_min_weight;
vector<vector <int> > mas;
vector<int> w;
vector<bool> valid;
void Dijkstra()
{
    valid.clear();
    w.clear();
    for(i=0;i<n;i++)
        valid.push_back(true);
    for(i=0;i<n;i++)
        w.push_back(INF);
    w[s]=0;
    for(i=0;i<n;i++)
    {
        min_weight = 1000001;
        ID_min_weight = -1;
        for(j=0;j<n;j++)
        {
                if(valid[j] && w[j] < min_weight)
                {
                    min_weight = w[j];
                    ID_min_weight = j;
                }
        }
        for(j=0;j<n;j++)
        {
            if (w[ID_min_weight] + mas[ID_min_weight][j] < w[j])
				w[j] = w[ID_min_weight] + mas[ID_min_weight][j];
        }
		valid[ID_min_weight] = false;
    }
}
int main()
{
    cin>>n>>m>>k;
    int g[m];
    for(i=0;i<m;i++)
        cin>>g[i];
    for(i=0;i<n;i++)
    {
        mas.push_back(vector<int>(n) );
        for(j=0;j<n;j++)
            mas[i][j]=INF;
    }
    for(i=0;i<k;i++)
    {
        cin>>a>>b>>t;
        mas[a-1][b-1]=mas[b-1][a-1]=t;
    }
    cin>>s;
    s--;
    Dijkstra();//find minimum way from point s to all others points and save to massive w 
    int tm = 0;
    bool all_get_gifts = true;
    for(i=0;i<m;i++)
    {
        if(w[g[i]-1] == INF)
        {
            all_get_gifts = false;
            break;
        }
        if (w[g[i]-1] > tm)
            tm = w[g[i]-1];
    }

    if(all_get_gifts == true)
        cout << "The good sponsor!\n" <<  tm ;
    else
        cout << "It is not fault of sponsor...";

    return 0;
}