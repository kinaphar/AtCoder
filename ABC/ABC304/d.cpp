#include <bits/stdc++.h>

// #include <atcoder/modll>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
  ll w, h, n, A, B, tmp;
  cin >> w >> h >> n;

  vector<vector<ll>> v(n, vector<ll>(2));
  rep(i, 0, n) { cin >> v[i][0] >> v[i][1]; }

  cin >> A;
  set<ll> sa;
  rep(i, 0, A) {
    cin >> tmp;
    sa.insert(tmp);
  }

  cin >> B;
  set<ll> sb;
  rep(i, 0, B) {
    cin >> tmp;
    sb.insert(tmp);
  }

  map<string, ll> m;
  map<ll, ll> m2;
  m2[0] = (A + 1) * (B + 1);
  ll max = 0;

  ll x, y;
  rep(i, 0, n) {
    x = v[i][0];
    sa.insert(x);
    auto xkey = sa.find(x);
    --xkey;
    sa.erase(x);

    y = v[i][1];
    sb.insert(y);
    auto ykey = sb.find(y);
    --ykey;
    sb.erase(y);

    m[to_string(*xkey) + to_string(*ykey)]++;
    tmp = m[to_string(*xkey) + to_string(*ykey)];
    if (tmp > max) {
      max = tmp;
    }
    m2[tmp]++;
    m2[tmp - 1]--;
  }

  ll min;
  auto iter = m2.begin();
  while (iter != m2.end()) {
    if (iter->second != 0) {
      min = iter->first;
      break;
    }
    ++iter;
  }

  cout << min << " " << max << endl;
}