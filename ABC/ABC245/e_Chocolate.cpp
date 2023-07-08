#include <bits/stdc++.h>
using namespace std;
int n, m;
pair<int, int> a[400020];
multiset<int> s;
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) cin >> a[i].first;
  for (int i = 1; i <= n; i++) {
    cin >> a[i].second;
    a[i].second = -a[i].second;
  }
  for (int i = 1; i <= m; i++) cin >> a[i + n].first;
  for (int i = 1; i <= m; i++) cin >> a[i + n].second;
  sort(a + 1, a + n + m + 1);
  for (int i = n + m; i >= 1; i--) {
    if (a[i].second > 0)
      s.insert(a[i].second);
    else {
      multiset<int>::iterator it = s.lower_bound(-a[i].second);
      if (it == s.end()) {
        cout << "No" << endl;
        return 0;
      }
      s.erase(it);
    }
  }
  cout << "Yes" << endl;
  return 0;
}