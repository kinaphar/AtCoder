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
  string s;
  cin >> s;

  if (s == "tourist") cout << "3858" << endl;
  if (s == "ksun48") cout << "3679" << endl;
  if (s == "Benq") cout << "3658" << endl;
  if (s == "Um_nik") cout << "3648" << endl;
  if (s == "apiad") cout << "3638" << endl;
  if (s == "Stonefeang") cout << "3630" << endl;
  if (s == "ecnerwala") cout << "3613" << endl;
  if (s == "mnbvmar") cout << "3555" << endl;
  if (s == "newbiedmy") cout << "3516" << endl;
  if (s == "semiexp") cout << "3481" << endl;
}
