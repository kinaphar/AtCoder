#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int N;
  cin >> N;
  set<vector<int>> st;
  rep(i, N) {
    int L;
    cin >> L;
    vector<int> v(L);
    for (auto& x : v) cin >> x;  //
    st.insert(v);
  }
  cout << st.size() << "\n";
}
