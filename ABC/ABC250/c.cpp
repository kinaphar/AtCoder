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

  int n, q;
  cin >> n >> q;

  vector<int> vec(n + 1);
  vector<int> doko(n + 1);
  rep(i, 1, n + 1) { vec[i] = i; }
  rep(i, 1, n + 1) { doko[i] = i; }

  int x;
  int tmp;
  int a;

  rep(i, 0, q) {
    cin >> x;

    a = doko[x];
    if (a == n) {
      a--;
    }
    tmp = doko[vec[a]];
    doko[vec[a]] = doko[vec[a + 1]];
    doko[vec[a + 1]] = tmp;

    tmp = vec[a];
    vec[a] = vec[a + 1];
    vec[a + 1] = tmp;
  }
  for (int i = 1; i < n + 1; i++) {
    cout << vec[i] << " ";
  }
}
