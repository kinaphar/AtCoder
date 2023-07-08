#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
ll n;
vector<ll> n2;
vector<ll> ans;
void dfs(ll a, ll v) {
  if (v == n2.size()) {
    ans.push_back(a);
    return;
  }
  if (n2[v] == 0) {
    dfs(a, v + 1);
  } else {
    dfs(a, v + 1);
    ll sum = 1;
    for (int i = 0; i < v; i++) {
      sum *= 2;
    }
    dfs(a + sum, v + 1);
    // dfs(a + pow(2, v), v + 1);
  }
  return;
}

int main() {
  cin >> n;
  while (n > 1) {
    n2.push_back(n % 2);
    n /= 2;
  }
  n2.push_back(n);
  dfs(0, 0);
  sort(ans.begin(), ans.end());
  for (auto x : ans) {
    cout << x << endl;
  }
  return 0;
}