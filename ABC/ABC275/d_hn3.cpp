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
map<ll, ll> val;

ll f(ll k) {
  if (k == 0) {
    return 1;
  }
  ll t1, t2;
  if (val[k / 2] > 0) {
    t1 = val[k / 2];
  } else {
    t1 = f(k / 2);
    val[k / 2] = t1;
  }
  if (val[k / 3] > 0) {
    t2 = val[k / 3];
  } else {
    t2 = f(k / 3);
    val[k / 3] = t2;
  }
  return t1 + t2;
}

int main() {
  cin >> n;
  cout << f(n);
}
