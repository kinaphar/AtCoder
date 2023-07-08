#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("b-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n;
  cin >> n;

  vector<string> data(n, "x");

  int l;
  string tmp;

  rep(i, n) {
    cin >> l;
    rep(j, l) {
      cin >> tmp;
      data.at(i) + tmp;
      data.at(i) + "x";
    }
  }

  sort(data.begin(), data.end());
  data.erase(std::unique(data.begin(), data.end()), data.end());

  cout << data.size() << endl;
}
