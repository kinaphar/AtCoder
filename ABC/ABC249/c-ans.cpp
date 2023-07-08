#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;

  vector<string> s(n);  //文字列を格納 長さn 配列「s」
  for (int i = 0; i < n; i++) cin >> s[i];

  int ans = 0;
  for (int i = 0; i < (1 << n); i++) {
    // n=4 なら 「1<<n」= 10000(2) = 16
    vector<int> sum(26);
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {  // 1桁目が1なら (i>>j)&1 = 1、0なら0
        for (int x = 0; x < s[j].size(); x++) sum[s[j][x] - 'a']++;
        //文字列s[j]を見る
        // s[j]の文字数分、「アルファベット●はいくつあるか？」に加算
      }
    }
    int now = 0;  //「now」、今どうなってる？を見る変数には良いかも
    for (int j = 0; j < 26; j++)
      if (sum[j] == k) now++;
    ans = max(ans, now);
  }
  cout << ans << endl;
}
