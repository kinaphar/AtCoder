#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll c[3][3];
set<ll> sm;
ll ans = 0;

void dfs(vector<vector<ll>> vis, ll vc) {
  if (vc == 9) {
    ans++;
    // cout << "!";
    return;
  }
  rep(i, 3) {
    rep(j, 3) {
      if (vis[i][j] == 0) {
        if ((c[i][0] == c[i][1] || c[i][1] == c[i][2]) ||
            c[i][2] == c[i][0]) {  // がっかりする列
          sm.clear();
          if (vis[i][0] + vis[i][1] + vis[i][2] >= 2) {
            rep(k, 3) {
              if (vis[i][k] == 1) {
                sm.insert(c[i][k]);
              }
            }
            if (sm.size() != vis[i][0] + vis[i][1] + vis[i][2]) {
              // がっかり
              continue;
            }
          }
        }
        if ((c[0][j] == c[1][j] || c[1][j] == c[2][j]) ||
            c[2][j] == c[0][j]) {  // がっかりする列
          sm.clear();
          if (vis[0][j] + vis[1][j] + vis[2][j] >= 2) {
            rep(k, 3) {
              if (vis[k][j] == 1) {
                sm.insert(c[k][j]);
              }
            }
            if (sm.size() != vis[0][j] + vis[1][j] + vis[2][j]) {
              // がっかり
              continue;
            }
          }
        }
        if (i == j) {
          sm.clear();
          if ((c[0][0] == c[1][1] || c[1][1] == c[2][2]) ||
              c[2][2] == c[0][0]) {
            if (vis[0][0] + vis[1][1] + vis[2][1] >= 2) {
              rep(k, 3) {
                if (vis[k][k] == 1) {
                  sm.insert(c[k][k]);
                }
              }
              if (sm.size() != vis[0][0] + vis[1][1] + vis[2][2]) {
                // がっかり
                continue;
              }
            }
          }
        }
        if (i + j == 2) {
          sm.clear();
          if ((c[0][2] == c[1][1] || c[1][1] == c[2][0]) ||
              c[2][0] == c[0][2]) {
            if (vis[0][2] + vis[1][1] + vis[2][0] >= 2) {
              rep(k, 3) {
                if (vis[k][2 - k] == 1) {
                  sm.insert(c[k][2 - k]);
                }
              }
              if (sm.size() != vis[0][2] + vis[1][1] + vis[2][0]) {
                // がっかり
                continue;
              }
            }
          }
        }
        // がっかりしない
        vis[i][j] = 1;
        // cout << i << j << " ";
        dfs(vis, vc + 1);
        vis[i][j] = 0;
      }
    }
  }
}

int main() {
  rep(i, 3) {
    rep(j, 3) { cin >> c[i][j]; }
  }
  vector v(3, vector<ll>(3, 0));
  dfs(v, 0);
  double dans = (double)ans / 362880;
  cout << fixed << setprecision(9) << dans;
}