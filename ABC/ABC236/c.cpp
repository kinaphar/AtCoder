#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int N, M;
  cin >> N >> M;

  string tmp;
  vector<string> allS;
  vector<string> rapS;
  rep(i, 0, N) {
    cin >> tmp;
    allS.push_back(tmp);
  }
  rep(i, 0, M) {
    cin >> tmp;
    rapS.push_back(tmp);
  }
  int pos = 0;
  rep(i, 0, N) {
    if (allS[i] == rapS[pos]) {
      cout << "Yes" << endl;
      pos++;
    } else {
      cout << "No" << endl;
    }
  }
}
