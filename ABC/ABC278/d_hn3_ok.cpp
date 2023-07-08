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
  ll n, q;
  cin >> n;
  ll a[n + 1];
  for (ll i = 1; i < n + 1; i++) {
    cin >> a[i];
  }
  cin >> q;
  ll p[q], i[q], x[q];
  rep(j, q) {
    cin >> p[j];
    if (p[j] == 1) {
      cin >> x[j];
    }
    if (p[j] == 2) {
      cin >> i[j] >> x[j];
    }
    if (p[j] == 3) {
      cin >> i[j];
    }
  }
  vector<ll> f5(n + 1, -1);  // 最終更新
  ll lastj = -10;
  rep(j, q) {
    if (p[j] == 1) {
      lastj = j;
    }
    if (p[j] == 2) {
      if (lastj == -10) {
        a[i[j]] += x[j];
        f5[i[j]] = j;
      } else {
        a[i[j]] = x[lastj] + x[j];
        f5[i[j]] = j;
      }
    }
    if (p[j] == 3) {
      if (lastj < f5[i[j]]) {
        cout << a[i[j]] << endl;
      } else {
        cout << x[lastj] << endl;
      }
    }
  }
}