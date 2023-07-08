#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<double>> data(2, vector<double>(n));

  for (int i = 0; i < n; i++) {
    cin >> data.at(0).at(i) >> data.at(1).at(i);
  }

  double a1x, a1y, a2x, a2y;
  int ans = 0;

  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      a1x = data.at(0).at(i) - data.at(0).at(j);
      a1y = data.at(1).at(i) - data.at(1).at(j);
      for (int k = j + 1; k < n; k++) {
        a2x = data.at(0).at(i) - data.at(0).at(k);
        a2y = data.at(1).at(i) - data.at(1).at(k);
        if (a1x * a2y - a2x * a1y != 0) {
          ans += 1;
        }
      }
    }
  }

  cout << ans << endl;
}

// cout << "a1 = " << a1 << " , a2 = " << a2 << endl;
