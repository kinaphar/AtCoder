#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("027-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n;
  cin >> n;
  string id;

  vector<string> v;
  rep(i, 0, n) {
    cin >> id;
    if (*find(v.begin(), v.end(), id) == id) {
      v.push_back(id);
      cout << i << endl;
    }
  }
}
