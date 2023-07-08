#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main() {
  ll n;
  cin >> n;
  vector<ll> count(n + 1);  //各頂点の次数を数える //ll の必要はない
  for (ll i = 1; i <= n - 1; i++) {
    ll a, b;
    cin >> a >> b;
    count[a]++;
    count[b]++;
  }
  for (ll i = 1; i <= n; i++) {
    if (count[i] == n - 1) {
      cout << "Yes" << endl;
      return 0;  //プログラムを終了する
    }
  }
  cout << "No" << endl;
  return 0;
}
