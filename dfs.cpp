#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
vector<vector<int>> v(10005);
bool vis[100005];
void dfs(int src)
{
    cout << src << " ";
    vis[src]=true;
    for (auto child : v[src])
        
    if (!vis[child])
        dfs(child);
}

int main()

{
    int n, e;

    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);

    return 0;
}