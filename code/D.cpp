// User Name: JonathanLiu
// Link: https://atcoder.jp/contests/abc333/tasks/abc333_d

#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 5;
int n;
vector<int> v[N];
int cnt;

void dfs(int x, int fa) {
  cnt++;
  for (int i : v[x])
    if (i != fa)
      dfs(i, x);
}

int main() {
  cin >> n;
  for (int i = 1; i < n; i++) {
    int u, V;
    scanf("%d%d", &u, &V);
    
    v[u].push_back(V);
    v[V].push_back(u);
  }

  int ans = 0;
  for (int i : v[1]) {
    cnt = 0;
    dfs(i, 1);
    
    ans = max(ans, cnt);
  }
  
  printf("%d", n - ans);
  
  return 0;
}
