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

int main() {
  ll n;
  cin >> n;
  string r, c;
  cin >> r >> c;
  vector<string> mx(n);  // matrix;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      mx[i].push_back('.');
    }
  }
  vector<string> emp(n);
  vector<string> t1(n);
  vector<string> t2(n);
  emp = mx;
  vector<ll> vi = {0, 1, 2, 3, 4};
  vector<ll> va, vb, vc;
  ll f;
  ll br;
  va = vi;
  do {
    mx = emp;
    for (ll i = 0; i < n; i++) {
      mx[i][va[i]] = 'A';
    }
    vb = vi;
    t1 = mx;
    do {
      mx = t1;
      for (ll j = 0; j < n; j++) {
        if (mx[j][vb[j]] != '.') {
          br = 1;
          break;
        }
        mx[j][vb[j]] = 'B';
      }
      if (br == 1) {
        br = 0;
        continue;
      }
      vc = vi;
      t2 = mx;
      do {
        mx = t2;
        for (ll k = 0; k < n; k++) {
          if (mx[k][vc[k]] != '.') {
            br = 1;
            break;
          }
          mx[k][vc[k]] = 'C';
        }
        if (br == 1) {
          br = 0;
          continue;
        }
        rep(x, n) {  // check
          f = 0;
          rep(y, n) {
            if (mx[x][y] == '.') continue;
            if (mx[x][y] != r[x]) {
              f = 1;
            }
            break;
          }
          if (f == 1) break;
        }
        if (f == 1) continue;
        rep(x, n) {
          f = 0;
          rep(y, n) {
            if (mx[y][x] == '.') continue;
            if (mx[y][x] != c[x]) {
              f = 1;
            }
            break;
          }
          if (f == 1) break;
        }
        if (f == 0) {  // bng
          cout << "Yes" << endl;
          rep(z, n) { cout << mx[z] << endl; }
          return 0;
        }
      } while (next_permutation(vc.begin(), vc.end()));
    } while (next_permutation(vb.begin(), vb.end()));
  } while (next_permutation(va.begin(), va.end()));
  cout << "No";
}
