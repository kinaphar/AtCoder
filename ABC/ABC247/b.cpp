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

  int flag = 0;
  int sflag = 0;
  int tflag = 0;

  string s[n], t[n];
  rep(i, 0, n) {
    cin >> s[i] >> t[i];
    // cout << s[i] << " " << t[i] << "@cin" << endl;
  }

  rep(i, 0, n) {
    sflag = 0;
    tflag = 0;

    rep(j, 0, n) {
      if (j != i) {
        if (s[i] == s[j] || s[i] == t[j]) {
          sflag = 1;
          // cout << s[i] << " " << t[i] << "@sflag" << endl;
        }
        if (t[i] == s[j] || t[i] == t[j]) {
          tflag = 1;
          // cout << s[i] << " " << t[i] << "@tflag" << endl;
        }
      }
    }

    if (sflag == 1 && tflag == 1) {
      flag = 1;
    }
  }

  if (flag == 1) {
    cout << "No";
  } else {
    cout << "Yes";
  }
}
