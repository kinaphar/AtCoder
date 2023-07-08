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

  double a, b;  // −1000 ≤ a, b ≤ 1000
  double d;     // 1 ≤ d ≤ 360

  cin >> a >> b >> d;

  // cout << a << " " << b << " " << d << endl;

  const double pi = std::acos(-1);

  // cout << setprecision(24) << pi << endl;

  cout << setprecision(24) << a * cos(pi * d / 180) - b * sin(pi * d / 180)
       << " " << a * sin(pi * d / 180) + b * cos(pi * d / 180) << endl;
}
