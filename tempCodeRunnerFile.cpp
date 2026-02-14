#include <bits/stdc++.h>

using namespace std;
#define fi for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < m; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
int n, m;
int ar[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
bool valid(int i,int j)
{
    if(i<0||i>=n||j<0||j>=m)
    return false;
    return true;

}
void dfs(int si, int sj)