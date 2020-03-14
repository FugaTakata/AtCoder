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
#define INF 1000000000000
#define MOD 10000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

void solve() {
  int N, n = 0, count = 0;
  cin >> N;
  vector<int> a(N);
  vector<bool> b(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
    b.at(i) = false;
  }
  while (true) {
    n = a.at(n) - 1;
    if (b.at(n)) {
      cout << -1 << endl;
      break;
    } else {
      b.at(n) = true;
    }
    count++;
    if (n == 2 - 1) {
      cout << count << endl;
      break;
    }
  }
}

signed main() {
  solve();

  return 0;
}