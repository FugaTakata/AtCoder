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
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

void solve() {
  int i = 0, n, a, b, count = 0;
  cin >> n >> a >> b;
  vector<int> d(b + 2);
  for (int i = 0; i < b; i++) {
    cin >> d.at(i);
  }
  d.at(b + 1) = 0;
  d.at(b) = n + 1;
  sort(ALL(d));
  while (i <= b) {
    count += (d.at(i + 1) - d.at(i) - 1) - (d.at(i + 1) - d.at(i) - 1) / a;
    i++;
  }
  cout << count << endl;
}

signed main() {
  solve();

  return 0;
}
