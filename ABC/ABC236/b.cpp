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

  int N;
  cin >> N;
  vector<int> data_vec(N);
  set<int> num_set;

  for (int i = 1; i < N + 1; i++) {
    num_set.insert(i);
  }

  int tmpIn;
  rep(i, 0, 4 * N - 1) {
    cin >> tmpIn;
    data_vec[tmpIn - 1] += 1;
    if (data_vec[tmpIn - 1] == 4) {
      num_set.erase(tmpIn);
    }
  }
  auto itr = num_set.begin();
  //最初の要素へのイテレータを取得
  cout << *itr;
}
