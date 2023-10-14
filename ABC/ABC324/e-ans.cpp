#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;
ll n;
string s[500001], t;
ll a[500001], b[500001], c[500001];
ll calc(const string &s, const string &t) {
  ll g = 0;
  for (auto c : s) {
    if (g >= (int)t.size()) break;
    if (c == t[g]) g++;
  }
  return g;
}
int main(void) {
  cin >> n >> t;
  for (int i = 1; i <= n; i++) cin >> s[i];

  for (int i = 1; i <= n; i++) a[i] = calc(s[i], t);
  reverse(t.begin(), t.end());
  for (int i = 1; i <= n; i++) {
    reverse(s[i].begin(), s[i].end());
    b[i] = calc(s[i], t);
    c[b[i]]++;
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ll l = (ll)t.size() - a[i];
    for (int j = l; j <= t.size(); j++) {
      ans += c[j];
    }
  }
  cout << ans << endl;

  return 0;
}