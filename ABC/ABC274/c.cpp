#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int n;
  cin >> n;

  vector<int> v(400010);

  int a;
  rep(i, 1, n + 1) {
    cin >> a;
    v[i * 2] = v[a] + 1;
    v[i * 2 + 1] = v[a] + 1;
  }

  rep(i, 1, 2 * n + 2) { cout << v[i] << endl; }
}
