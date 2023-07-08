#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll n, w;
vector<ll> ans;
vector<ll> vis(200001);
vector<ll> prv(200001);
vector<set<ll>> g(200001);

void dfs(ll c) {
  ans.push_back(c);
  vis[c] = 1;
  w = 0;
  for (auto v : g[c]) {
    if (vis[v] == 0) {
      w = v;
      break;
    }
  }
  if (w == 0) {  // 全部行った
    if (c == 1) {
      // unic
    } else {
      dfs(prv[c]);
    }
  } else {  // 行ってないとこがある
    prv[w] = c;
    dfs(w);
  }
}

int main() {
  cin >> n;
  ll a, b;
  rep(i, n - 1) {
    cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }
  dfs(1);
  for (auto v : ans) {
    cout << v << " ";
  }
}