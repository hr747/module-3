#include <bits/stdc++.h>

using namespace std;
#define fi for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < m; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
int n, m;
char ar[105][105];
bool vis[105][105];
int lavel[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    lavel[si][sj]=0;
    while (!q.empty())
    {
        /* code */
        pair<int,int> par=q.front();
        q.pop();
        int par_i=par.first;
        int par_j=par.second;
        // cout<<par_i<<" "<<par_j<<endl;

        for(auto i=0;i<4;i++)
        {
            int ci=par_i+d[i].first;
            int cj=par_j+d[i].second;
            if(valid(ci,cj)==true&&!vis[ci][cj])
            {
            q.push({ci,cj});
            vis[ci][cj]=true;
            lavel[ci][cj]=lavel[par_i][par_j]+1;
            }

        }
    }
    



}


int main()

{

    cin >> n >> m;
    fi
            fj
                cin >>
        ar[i][j];
    int si, sj,di,dj;
    cin >> si >> sj>>di>>dj;
    bfs(si, sj);
    cout<<lavel[di][dj]<<endl;

    return 0;
}