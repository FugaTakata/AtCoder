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
  string s, s_b = "", s_a = "", ans;
  char c;
  int q, t, f;
  bool reversed = false;
  cin >> s >> q;
  REP(i, q) {
    cin >> t;
    if (t == 1) {
      reversed = !reversed;
    } else {
      cin >> f >> c;
      if ((f == 1 && !reversed) || (f == 2 && reversed)) {
        s_b += c;
      } else {
        s_a += c;
      }
    }
  }
  if (reversed) {
    reverse(ALL(s));
    reverse(ALL(s_a));
    ans = s_a + s + s_b;
  } else {
    reverse(ALL(s_b));
    ans = s_b + s + s_a;
  }
  cout << ans << endl;
}

signed main() {
  solve();

  return 0;
}