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

  int n, l, r;
  cin >> n;
  vector<int> vec(200002);

  rep(i, 0, n) {
    cin >> l >> r;
    vec[l]++;
    vec[r]--;
  }

  int tmp = 0;
  rep(i, 1, 200001) {
    // cout << "i = " << i << endl;
    // cout << "vec[i] = " << vec[i] << endl;
    if (vec[i] > 0) {
      if (tmp == 0 && tmp + vec[i] > 0) cout << i << " ";
      tmp += vec[i];
    }
    if (vec[i] < 0) {
      if (tmp > 0 && tmp + vec[i] == 0) cout << i << " ";
      tmp += vec[i];
    }
  }
}
