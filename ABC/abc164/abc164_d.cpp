#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPD(i, n) for (ll i = (ll)(n)-1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define ALL(x) (x).begin(), (x).end()
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000000
#define MOD 1000000007

void solve() {
  string S;
  cin >> S;
  int mod = 2019, count = 0;
  int l = S.length();
  FOR(i, 0, l - 3) {
    FOR(j, i + 3, l) {
      string s = S.substr(i, j - i);
      unsigned long long n = stoull(s);
      // cout << n << endl;
      if (n % 2019 == 0) {
        count++;
      }
    }
  }
  cout << count << endl;
}

signed main() {
  solve();

  return 0;
}