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
  int N, K, max = 0, max_index = 0, sum = 0;
  double ans = 0.0;
  cin >> N >> K;
  vector<int> p(N);
  vector<int> a(K);
  REP(i, N) { cin >> p[i]; }
  REP(i, K) { sum += p[i]; }
  max = sum;
  max_index = K - 1;
  FOR(i, K, N - 1) {
    sum = sum - p[i - K] + p[i];
    if (max == sum) {
    } else if (max < sum) {
      max = sum;
      max_index = i;
    }
  }
  REP(i, K) { ans += (p[max_index - i] + 1) / 2.0; }
  // cout << fixed << ans << endl;
  printf("%.7lf\n", ans);
}

signed main() {
  solve();

  return 0;
}