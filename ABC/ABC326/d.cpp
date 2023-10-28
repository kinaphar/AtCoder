#include <bits/stdc++.h>

// #include <atcoder/modint>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)

int main() {
  int n;
  string r, c;
  cin >> n >> r >> c;

  int rA = count(r.begin(), r.end(), 'A');
  int rB = count(r.begin(), r.end(), 'B');
  int rC = count(r.begin(), r.end(), 'C');
  int cA = count(c.begin(), c.end(), 'A');
  int cB = count(c.begin(), c.end(), 'B');
  int cC = count(c.begin(), c.end(), 'C');

  if (rA == 0 || rB == 0 || rC == 0 || cA == 0 || cB == 0 || cC == 0) {
    cout << "No" << endl;
    return 0;
  }  // A, B, C を含む r, c であると保証.

  queue<string> q;

  if (n == 3) {
    string r1 = "...";
  }

  if (n == 4) {
    string r1 = "....";
  }

  if (n == 5) {
    string r1 = ".....";
  }

  rep(i, n) {
    if (c[i] == 'A') {
      string tmp1 = r1;
      tmp1.replace(i, 1, "A");
      rep(j, n) {
        if (c[j] == 'B') {
          string tmp2 = tmp1;
          tmp2.replace(j, 1, "B");
          rep(k, n) {
            if (c[k] == 'C') {
              string tmp3 = tmp2;
              tmp3.replace(k, 1, "C");
              // rと符合するか判定、一旦OKならqueueへpush.
              rep(l, n) {
                if (tmp3[l] != '.') {
                  if (tmp3[l] == r[0]) {
                    q.push(tmp3);
                  } else {
                    // queueへpushしない.
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  rep(i, 1, n) {
    string tmp = "ABC..";
    sort(tmp.begin(), tmp.end(), greater<>());
    do {
      cout << tmp << endl;
    } while (next_permutation(tmp.begin(), tmp.end()));
  }

  // int qs = q.size();
  // rep(i, qs) {
  //   cout << q.front() << endl;
  //   q.pop();
  // }
  cout << "No" << endl;
}
