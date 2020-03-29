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
  int N, a, min = 0, max = 0;
  vector<int> C(9, 0);
  cin >> N;
  REP(i, N) {
    cin >> a;
    if (a >= 3200) {
      C[8] += 1;
    } else {
      C[a / 400] += 1;
    }
  }
  REP(i, 8) {
    if (C[i] > 0) {
      min++;
      max++;
    }
  }
  max += C[8];
  if (min == 0) {
    min = 1;
  }
  cout << min << " " << max << endl;
}

signed main() {
  solve();

  return 0;
}