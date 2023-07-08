#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  int tmp = -1;
  string flag = "NO";
  for (int i : data) {
    if (tmp == i) {
      flag = "YES";
    }
    tmp = i;
  }

  cout << flag << endl;
}
