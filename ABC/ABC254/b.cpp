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

  int tmp = 0;
  int tmp2 = 0;

  vector<int> data = {0, 1};
  for (int i = 1; i <= n; i++) {
    tmp = 0;
    tmp2 = 0;
    data.push_back(0);
    for (int j = 1; j <= i; j++) {
      cout << data[j] + tmp << " ";  // 6+4
      tmp2 = tmp;                    // tmp2=4
      tmp = data[j];                 // tmp=6
      data[j] = data[j] + tmp2;      // dj = 6+4
    }
    cout << endl;
  }
}
