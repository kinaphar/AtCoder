#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> p(n);

  for (int i = 0; i < n; i++) cin >> p[i];

  // for (int i = 0; i < n; i++) cout << p[i];
  // cout << "here";

  vector<int> p2;

  int flag = 1;

  int temp;

  for (int i = n - 2; i >= 0; i--) {
    if (p[i] > p[i + 1]) {
      for (int j = i; j < n; j++) p2.push_back(p[j]);
      // i番目以降をp2に格納
      sort(p2.begin(), p2.end());
      reverse(p2.begin(), p2.end());

      // for (int k = 0; k < p2.size(); k++) cout << p2[k];
      rep(j, 0, p2.size()) {
        if (p2[j] == p[i]) {
          // cout << "hit at j = " << j;
          temp = p2[j + 1];
          flag = 0;
          p[i + j + 1 + flag] = p[i];
          j++;
        } else {
          p[i + flag + j] = p2[j];
        }
      }
      p[i] = temp;
      break;
    }
  }

  cout << p[0];
  rep(i, 1, n) { cout << " " << p[i]; }
  cout << endl;
}
