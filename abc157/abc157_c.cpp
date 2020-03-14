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
  int n, m, ans = -1, bu;
  cin >> n >> m;
  vector<int> s(m);
  vector<int> c(m);
  REP(i, m) { cin >> s[i] >> c[i]; }

  FOR(i, pow(10, (n - 1)), pow(10, n) - 1) {
    vector<bool> o(m, false);
    REP(k, m) {
      if (s[k] == 1) {
        bu = i / 100;
      } else if (s[k] == 2) {
        bu = (i % 100) / 10;
      } else {
        bu = (i % 100) % 10;
      }
      if (bu == c[k]) {
        o[k] = true;
      }
    }
    REP(k, m) {
      if (!o[k]) {
        break;
      }
      if (k == m - 1 && o[k]) {
        ans = i;
      }
    }
    if (ans != -1) {
      break;
    }
  }
  cout << ans << endl;
}

signed main() {
  solve();

  return 0;
}