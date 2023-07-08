#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("c-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  // int n = 0;
  ll ans = 0;
  ll pre = 0;
  vector<ll> wrong;

  rep(n, 12345678901, 12345679901) {
    ans = 0;
    for (ll a = 1; a * a * a <= n; a++) {
      for (ll b = a; a * b * b <= n; b++) {
        ans += n / a / b - b + 1;
      }
    }

    pre = 0;
    for (ll a = 1; a <= cbrt(n); a++) {
      for (ll b = a; b <= sqrt(n / a); b++) {
        pre += n / a / b - b + 1;
      }
    }

    if (ans != pre) {
      wrong.push_back(n);
    } else if (true) {
      cout << n << " ";
    }

    // cout << "pre = " << pre << ", ans = " << ans << endl;
  }

  for (auto e : wrong) {
    cout << e << endl;
  }
  if (wrong.size() == 0) {
    cout << "no wrong" << endl;
  }
}
