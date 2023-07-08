#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

// 素因数分解
template <typename T>
map<T, T> prime_factor(T n) {
  map<T, T> ret;
  for (T i = 2; i * i <= n; i++) {
    T tmp = 0;
    while (n % i == 0) {
      tmp++;
      n /= i;
    }
    ret[i] = tmp;
  }
  if (n != 1) ret[n] = 1;
  return ret;
}
/*  divisor_num(n)
    入力：整数 n
    出力：nの約数の個数
    計算量：O(√n)
*/
template <typename T>
T divisor_num(T N) {
  map<T, T> pf = prime_factor(N);
  T ret = 1;
  for (auto p : pf) {
    ret *= (p.second + 1);
  }
  return ret;
}

int main() {
  ll n;
  ll ans = 0;
  cin >> n;

  rep(i, 1, n) { ans += divisor_num(i) * divisor_num(n - i); }
  cout << ans << endl;
}