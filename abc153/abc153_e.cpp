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

struct magic {
  int damage;
  int cost;
  double e;
};

void solve() {
  int H, N, cost = 0, i = 0;
  ll min = INF;
  cin >> H >> N;
  vector<magic> m(N);
  REP(i, N) {
    cin >> m[i].damage >> m[i].cost;
    m[i].e = 1.0 * m[i].damage / m[i].cost;
  }
  sort(ALL(m), [](const magic& x, const magic& y) { return x.e > y.e; });
  while (H > 0 && i < N) {
    cost += H / m[i].damage * m[i].cost;
    H -= H / m[i].damage * m[i].damage;
    i++;
  }
  sort(ALL(m), [](const magic& x, const magic& y) { return x.cost < y.cost; });
  if (H > 0) {
    H -= m[0].damage;
    cost += m[0].cost;
  }
  cout << cost << endl;
}

signed main() {
  solve();

  return 0;
}