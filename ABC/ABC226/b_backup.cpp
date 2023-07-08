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

  // ジャグ配列 https://atcoder.jp/contests/APG4b/tasks/APG4b_t
  vector<vector<int>> data(n);

  int l;
  int tmp;
  int count = 0;

  rep(i, n) {
    cin >> l;
    rep(j, l) {
      cin >> tmp;
      data.at(i).push_back(tmp);
    }

    int flag;
    count++;
    rep(k, i) {
      // cout << "検証ループ i=" << i << ", k=" << k << endl;
      if (data.at(i).size() == data.at(k).size()) {
        flag = 0;
        rep(h, data.at(i).size()) {
          if (data.at(i).at(h) != data.at(k).at(h)) {
            flag = 1;
          }
        }
        if (flag == 0) {
          count--;
        };
      }
    }
  }

  sort(myVec.begin(), myVec.end(),
       [](const vector<int> &alpha, const vector<int> &beta) {
         return alpha[0] < beta[0];
       });
  printVec(myVec);

  cout << count << endl;
}
