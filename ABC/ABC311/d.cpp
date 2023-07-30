#include <bits/stdc++.h>

#include <atcoder/modint>
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
  int n, m;
  cin >> n >> m;

  pair<int, int> p;
  map<pair<int, int>, char> mp;

  string s;

  for (int i = 0; i < n; ++i) {
    cin >> s;
    for (int j = 0; j < m; ++j) {
      mp[make_pair(i, j)] = s[j];
      // cout << mp[make_pair(i, j)];
    }
  }

  queue<pair<int, int>> q;
  q.push(make_pair(1, 1));

  set<pair<int, int>> touch;  // 通過できるマス.
  touch.insert(make_pair(1, 1));

  set<pair<int, int>> stop;  // 止まれるマス.
  stop.insert(make_pair(1, 1));

  pair<int, int> now;
  pair<int, int> cursor;
  while (q.size() != 0) {
    now = q.front();
    q.pop();

    // 上下左右をみてsetへinsert.
    // 上.
    cursor = now;
    // cout << "カーソル: " << cursor.first << "," << cursor.second << endl;
    rep(i, 200) {
      if (mp[make_pair(cursor.first - 1, cursor.second)] == '#') {
        // cout << "壁: " << cursor.first << "," << cursor.second << endl;
        if (stop.count(cursor) == 0) {
          stop.insert(cursor);
          q.push(cursor);
        }
        break;
      } else {  //"." .
        cursor = make_pair(cursor.first - 1, cursor.second);
        touch.insert(cursor);
        // cout << "氷" << cursor.first << "," << cursor.second << endl;
      }
    }
    // 下.
    cursor = now;
    while (true) {
      if (mp[make_pair(cursor.first + 1, cursor.second)] == '#') {
        if (stop.count(cursor) == 0) {
          stop.insert(cursor);
          q.push(cursor);
        }
        break;
      } else {  //"." .
        cursor = make_pair(cursor.first + 1, cursor.second);
        touch.insert(cursor);
      }
    }
    // 左.
    cursor = now;
    while (true) {
      if (mp[make_pair(cursor.first, cursor.second - 1)] == '#') {
        if (stop.count(cursor) == 0) {
          stop.insert(cursor);
          q.push(cursor);
        }
        break;
      } else {  //"." .
        cursor = make_pair(cursor.first, cursor.second - 1);
        touch.insert(cursor);
      }
    }
    // 右.
    cursor = now;
    while (true) {
      if (mp[make_pair(cursor.first, cursor.second + 1)] == '#') {
        if (stop.count(cursor) == 0) {
          stop.insert(cursor);
          q.push(cursor);
        }
        break;
      } else {  //"." .
        cursor = make_pair(cursor.first, cursor.second + 1);
        touch.insert(cursor);
      }
    }
  }

  cout << touch.size() << endl;
}
