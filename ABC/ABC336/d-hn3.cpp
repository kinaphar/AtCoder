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

ll n;

bool f(vector<ll> v, ll k) {
  if (k == 0) {
    return true;
  }
  for (ll i = k - 1; i <= n - k; i++) {
    for (ll j = 0; j <= k - 1; j++) {
      if (v[i - j] >= k - j && v[i + j] >= k - j) {
        if (j == k - 1) {
          // cout << "i: " << i << endl;
          return true;
        }
      } else {
        break;
      }
    }
  }
  return false;
}

int main() {
  cin >> n;
  vector<ll> a(n);
  rep(i, n) { cin >> a[i]; }
  ll lo = 0;
  ll hi = (n + 1) / 2;
  ll mid;
  while (1) {
    mid = (lo + hi + 1) / 2;
    // cout << lo << "|" << mid << "|" << hi << endl;
    if (f(a, mid)) {
      // cout << "o" << endl;
      if (lo == hi) {
        cout << lo;
        return 0;
      }
      lo = mid;
    } else {
      // cout << "x" << endl;
      if (lo + 1 == hi) {
        cout << lo;
        return 0;
      }
      hi = mid;
    }
    // cout << lo << "|" << mid << "|" << hi << endl;
    // cout << "-------" << endl;
  }
}