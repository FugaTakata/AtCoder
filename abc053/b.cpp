#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPD(i, n) for (ll i = (ll)(n)-1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000000
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

void solve() {
  int max = 0;
  string ans = "", str;
  cin >> str;
  REP(i, str.length()) {
    if (str[i] == 'A' || ans.length() != 0) {
      ans += str[i];
    }
    if (str[i] == 'Z' && ans.length() != 0) {
      if (ans.length() > max) {
        max = ans.length();
      }
    }
  }
  cout << max << endl;
}
signed main() {
  solve();

  return 0;
}