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

  map<int, vector<int>> m;

  int a, b;
  rep(i, 0, n) {
    cin >> a >> b;
    m[a].push_back(b);
    m[b].push_back(a);
  }

  int msize;
  int max = 1;
  int f;

  map<int, bool> ok;

  queue<int> q;
  q.push(1);
  while (!q.empty()) {
    f = q.front();
    // cout << "enter " << f << endl;
    ok[f] = true;
    // cout << "ok[" << f << "]=" << ok[f] << endl;
    // if (ok[f] == true) cout << "TRUE" << endl;
    // if (ok[f] == false) cout << "FALSE" << endl;
    msize = m[f].size();
    rep(i, 0, msize) {
      // cout << "check " << m[f][i] << ", ";
      if (ok[m[f][i]] == false) {
        // cout << "false" << endl;
        q.push(m[f][i]);
        if (max < m[f][i]) max = m[f][i];
      }
    }
    q.pop();
    cout << "q.size()=" << q.size() << endl;
  }

  cout << max;
}
