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
  vector<vector<int>> card(3, vector<int>(3));
  vector<vector<bool>> called(3, vector<bool>(3, false));
  int count;
  string ans = "No";
  REP(i, 3) {
    REP(n, 3) { cin >> card[i][n]; }
  }
  cin >> count;
  vector<int> call(count);
  REP(i, count) { cin >> call[i]; }
  REP(i, count) {
    REP(n, 3) {
      REP(m, 3) {
        if (call[i] == card[n][m]) {
          called[n][m] = true;
        }
      }
    }
  }
  REP(i, 3) {
    if ((called[i][0] && called[i][1] && called[i][2]) ||
        (called[0][i] && called[1][i] && called[2][i])) {
      ans = "Yes";
    }
  }
  if ((called[0][0] && called[1][1] && called[2][2]) ||
      (called[0][2] && called[1][1] && called[2][0])) {
    ans = "Yes";
  }
  cout << ans << endl;
}

signed main() {
  solve();

  return 0;
}