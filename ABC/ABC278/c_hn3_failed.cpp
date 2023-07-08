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
  cin >> n >> q;
  vector<set<ll>> tw(n + 1);
  ll t[q], a[q], b[q];
  rep(i, q) { cin >> t[i] >> a[i] >> b[i]; }
  rep(i, q) {
    if (t[i] == 1) {
      tw[a[i]].insert(b[i]);
    }
    if (t[i] == 2) {
      tw[a[i]].erase(b[i]);
    }
    if (t[i] == 3) {
      if ((tw[a[i]].find(b[i]) != tw[a[i]].end()) &&
          (tw[b[i]].find(a[i]) != tw[b[i]].end())) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}