#include <algorithm>
#include <iostream>
#include <valarray>
using namespace std;

int main() {
  int n;
  cin >> n;
  valarray<long long> a(n), b(n);
  for (auto&& e : a) cin >> e;
  for (auto&& e : b) cin >> e;
  sort(begin(a), end(a));
  sort(begin(b), end(b));
  cout << abs(a - b).sum() << endl;
}
