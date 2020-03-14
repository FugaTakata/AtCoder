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
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++) {
    x += a.at(distance(a.begin(), max_element(a.begin(), a.end())));
    a.at(distance(a.begin(), max_element(a.begin(), a.end()))) = 0;
    y += a.at(distance(a.begin(), max_element(a.begin(), a.end())));
    a.at(distance(a.begin(), max_element(a.begin(), a.end()))) = 0;
  }
  if (x < y) {
    cout << "Aoki" << endl;
  } else if (y < x) {
    cout << "Takahashi" << endl;
  } else {
    cout << "Draw" << endl;
  }
}

signed main() {
  solve();

  return 0;
}