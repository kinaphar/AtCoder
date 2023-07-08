#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

// vector<int> output(vector<int> &data, int i) {
//   // ベースケース
//   if (i == 0) {
//     cout <<
//   }

//   // 再帰ステップ
//   vector<int> tmp = reverse_array_from_i(
//       data, i + 1);  // dataのi+1番目以降の要素を逆順にした配列を得る
//   tmp.push_back(data.at(i));  // 末尾にdataのi番目の要素を追加
//   return tmp;
// }

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  ll n;
  cin >> n;

  string bin = "";
  vector<int> digit(0);
  int digitp = 0;

  while (n > 0) {
    // bin = (char)(n % 2) + bin;
    bin.insert(0, to_string(n % 2));
    // cout << n % 2 << "(n%2)" << endl;
    if (n % 2 == 1) {
      digit.push_back(digitp);
    }
    n -= n % 2;
    n /= 2;
    // cout << n << endl;

    // cout << digitp << endl;
    digitp++;
  }

  // cout << bin;
  // cout << digit.size();
  // output(digit, digit.size());

  int d = digit.size();
  ll output = 0;

  ll o1 = 1;
  if (d == 0) {
    for (ll tmp = 0; tmp < (1 << 0); tmp++) {
      output = 0;
      bitset<0> s(tmp);
      rep(i, 0, 0) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 1) {
    for (ll tmp = 0; tmp < (1 << 1); tmp++) {
      output = 0;
      bitset<1> s(tmp);
      rep(i, 0, 1) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 2) {
    for (ll tmp = 0; tmp < (1 << 2); tmp++) {
      output = 0;
      bitset<2> s(tmp);
      rep(i, 0, 2) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 3) {
    for (ll tmp = 0; tmp < (1 << 3); tmp++) {
      output = 0;
      bitset<3> s(tmp);
      rep(i, 0, 3) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 4) {
    for (ll tmp = 0; tmp < (1 << 4); tmp++) {
      output = 0;
      bitset<4> s(tmp);
      rep(i, 0, 4) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 5) {
    for (ll tmp = 0; tmp < (1 << 5); tmp++) {
      output = 0;
      bitset<5> s(tmp);
      rep(i, 0, 5) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 6) {
    for (ll tmp = 0; tmp < (1 << 6); tmp++) {
      output = 0;
      bitset<6> s(tmp);
      rep(i, 0, 6) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 7) {
    for (ll tmp = 0; tmp < (1 << 7); tmp++) {
      output = 0;
      bitset<7> s(tmp);
      rep(i, 0, 7) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 8) {
    for (ll tmp = 0; tmp < (1 << 8); tmp++) {
      output = 0;
      bitset<8> s(tmp);
      rep(i, 0, 8) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 9) {
    for (ll tmp = 0; tmp < (1 << 9); tmp++) {
      output = 0;
      bitset<9> s(tmp);
      rep(i, 0, 9) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 10) {
    for (ll tmp = 0; tmp < (1 << 10); tmp++) {
      output = 0;
      bitset<10> s(tmp);
      rep(i, 0, 10) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 11) {
    for (ll tmp = 0; tmp < (1 << 11); tmp++) {
      output = 0;
      bitset<11> s(tmp);
      rep(i, 0, 11) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 12) {
    for (ll tmp = 0; tmp < (1 << 12); tmp++) {
      output = 0;
      bitset<12> s(tmp);
      rep(i, 0, 12) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 13) {
    for (ll tmp = 0; tmp < (1 << 13); tmp++) {
      output = 0;
      bitset<13> s(tmp);
      rep(i, 0, 13) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 14) {
    for (ll tmp = 0; tmp < (1 << 14); tmp++) {
      output = 0;
      bitset<14> s(tmp);
      rep(i, 0, 14) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 15) {
    for (ll tmp = 0; tmp < (1 << 15); tmp++) {
      output = 0;
      bitset<15> s(tmp);
      rep(i, 0, 15) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  } else if (d == 16) {
    for (ll tmp = 0; tmp < (1 << 16); tmp++) {
      output = 0;
      bitset<16> s(tmp);
      rep(i, 0, 16) {
        if (s.test(i)) {
          output += (o1 << digit[i]);
        }
      }
      cout << output << endl;
    }
  }
}