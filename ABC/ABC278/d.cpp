#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (long long i = s; i < (long long)(n); i++)

int main() {
  ll n, a, q, t, i, x;

  ll reset = 0;

  map<ll, ll> m;

  cin >> n;
  repl(j, 1, n + 1) {
    cin >> a;
    m[j] = a;
  }

  cin >> q;

  repl(j, 0, q) {
    cin >> t;
    if (t == 1) {
      cin >> x;
      reset = x;
      m.clear();
    } else if (t == 2) {
      cin >> i >> x;
      m[i] += x;
    } else if (t == 3) {
      cin >> i;
      cout << reset + m[i] << endl;
    }
  }
}
