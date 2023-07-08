#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

void printVec(const vector<vector<int>> v) {
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  //   std::ifstream in("input.txt");
  //   std::cin.rdbuf(in.rdbuf());
  // ...

  int N;
  int W;
  cin >> N >> W;

  vector<vector<int>> data(N, vector<int>(2));
  rep(i, 0, N) {
    cin >> data[i][0] >> data[i][1];
    // data[i][2] = data[i][0] / data[i][1];
  }

  sort(data.begin(), data.end(),
       [](const vector<int> &alpha, const vector<int> &beta) {
         return alpha[0] > beta[0];  // 0番目でソート
       });
  //   printVec(data);

  int Wtmp = 0;
  ll ans = 0;
  ll tmp = 0;
  ll tmp2 = 0;
  rep(i, 0, N) {
    if (Wtmp + data[i][1] > W) {
      tmp = (W - Wtmp);
      tmp2 = tmp * data[i][0];

      ans += tmp2;
      cout << "break" << endl;
      break;
    }
    // cout << "i=" << i << ", ans = " << ans << endl;
    Wtmp += data[i][1];
    ans += (data[i][0] * data[i][1]);
    // cout << "i=" << i << ", ans = " << ans << endl;
  }

  cout << ans;

  //   intをlonglongに型変換できないの！？！？？！？？？！？！？！？？！！？！？？！？
}
