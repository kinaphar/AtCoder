#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  ll m, n;  // 0≤M<N≤100
  ll x;     // < n
  ll t;     // <= 200
  ll d;     // <= 100

  cin >> n >> m >> x >> t >> d;

  if (m > x) {
    cout << t;
  } else {
    cout << t - d * (x - m);
  }
}
