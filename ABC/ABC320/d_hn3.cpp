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

int main() {
  ll n, m;
  cin >> n >> m;
  ll a[m];
  vector rv(n + 1,
            vector<pair<ll, ll>>(n + 1));  // n人ぶん > (llペア × n人ぶん);
  ll b[m];
  ll x[m];
  ll y[m];
  vector<set<ll>> g(n + 1);
  ll ansx[n + 1];
  ll ansy[n + 1];
  ansx[1] = 0;
  ansy[1] = 0;
  rep(i, m) {
    cin >> a[i] >> b[i] >> x[i] >> y[i];
    rv[a[i]][b[i]] = {x[i], y[i]};
    rv[b[i]][a[i]] = {-x[i], -y[i]};
    g[a[i]].insert(b[i]);
    g[b[i]].insert(a[i]);
  }
  vector<ll> vis(n + 1, -1);
  vis[1] = 1;
  queue<ll> q;
  q.push(1);

  while (!q.empty()) {  //
    ll v = q.front();
    q.pop();
    for (ll nv : g[v]) {
      if (vis[nv] == 1) continue;
      ansx[nv] = ansx[v] + rv[v][nv].first;
      ansy[nv] = ansy[v] + rv[v][nv].second;
      vis[nv] = 1;
      q.push(nv);
    }
  }
  for (ll i = 1; i <= n; i++) {
    if (vis[i] == -1) {
      cout << "undecidable" << endl;
    } else {
      cout << ansx[i] << " " << ansy[i] << endl;
    }
  }
}