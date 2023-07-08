#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

#define DEBUG_  //!!提出時にコメントアウト!!
#ifdef DEBUG_
#define dump(x) cerr << #x << " = " << (x) << endl;
#else
#define dump(x) ;
#endif

#define equals(a, b) (fabs((a) - (b)) < EPS)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define SZ(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back

//#define int long long

typedef long long LL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;

template <class T>
bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}

template <typename T>
std::string printVector(const std::vector<T> &data) {
  std::stringstream ss;
  std::ostream_iterator<T> out_it(ss, ", ");
  ss << "[";
  std::copy(data.begin(), data.end() - 1, out_it);
  ss << data.back() << "]";
  return ss.str();
}

template <typename T>
void print_array(const T &ary, int size) {
  REP(i, size) { cout << ary[i] << " "; }
  cout << endl;
}

const int mod = 1e9 + 7;
// const int mod = 998244353;
const LL LINF = 1001002003004005006ll;
const int INF = 1001001001;
const double EPS = (1e-10);
const long double PI =
    3.14159265358979323846264338327950288419716939937510582097494459230781640628620899;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

signed main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << setprecision(12);

  int N, Q;
  cin >> N >> Q;
  map<int, VI> mp;
  REP(i, N) {
    int a;
    cin >> a;
    mp[a].eb(i + 1);
  }

  REP(_, Q) {
    int x, k;
    cin >> x >> k;
    if (mp.find(x) == mp.end()) {
      cout << -1 << endl;
    } else {
      int sz = SZ(mp[x]);
      if (sz < k) {
        cout << -1 << endl;
      } else {
        cout << mp[x][k - 1] << endl;
      }
    }
  }
}