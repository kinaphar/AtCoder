#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());  // sortの分かりやすい

  for (auto const& value : v) cout << value << "; ";
  cout << endl;

  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    int ok = n, ng = -1;  // v[ok] >= x, v[ng] < x であることが分かっている
    while (ok - ng > 1) {
      int md = (ok + ng) / 2;
      if (v[md] >= x)
        ok = md;
      else
        ng = md;
    }
    cout << n - ok << endl;
  }
}