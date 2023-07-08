#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  vector<int> v(200);
  ll ans = 0;

  int n;
  cin >> n;

  int tmp;
  rep(i, 0, n) {
    cin >> tmp;
    v[tmp % 200]++;
  }
  ll c;
  rep(i, 0, 200) {
    c = v[i];
    ans += c * (c - 1) / 2;
  }

  cout << ans << endl;
}
