#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BBQ(i, s, n) for (int i = s; i < (int)(n); i++)
#define BBQl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int n, k;
  cin >> n >> k;

  vector<string> s(n);

  // for (int i = 0; i < n; i++) {
  BBQ(i, 0, n) cin >> s[i];
  // }

  map<char, int> count;

  char alphabet;
  int ans = 0;

  BBQ(i, 0, 1 << n) {  // 2^n通りのbit配列(単語選ぶかどうか)を順に見ていく
    BBQ(j, 0, n) {
      if (1 & (i >> j)) {
        BBQ(l, 0, s[j].length()) {
          alphabet = s[j][l];
          count[alphabet]++;
        }
      }
    }
    int now = 0;
    char x = 'a';
    while (x <= 'z') {
      if (count[x] == k) {
        now++;
      }
      x++;
    }
    ans = max(ans, now);
    count.clear();  //連想配列をフラッシュできて神
  }

  cout << ans;
}
