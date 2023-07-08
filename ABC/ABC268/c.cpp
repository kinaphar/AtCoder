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

  int n;
  cin >> n;

  vector<int> v(n);
  vector<int> m(n);
  rep(i, 0, n) {
    cin >> v[i];
    m[(n + v[i] - i) % n]++;
  }

  int sum = 0;
  int summax = 0;

  rep(i, 0, n) {
    sum = m[(n + i - 1) % n] + m[i] + m[(i + 1) % n];
    if (sum > summax) {
      summax = sum;
    }
  }

  cout << summax;
}
