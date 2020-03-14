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

ll factorial(ll n) {
  ll f = 1;
  for (ll i = 2; i <= n; i++) {
    f = (f * i) % MOD;
  }
  return f;
}

void solve() {
  ll dog, mon;
  cin >> dog >> mon;
  if (abs(dog - mon) == 0) {
    cout << ((factorial(dog) * factorial(mon) * 2LL) % MOD) << endl;
  } else if (abs(dog - mon) == 1) {
    cout << ((factorial(dog) * factorial(mon)) % MOD) << endl;
  } else {
    cout << 0 << endl;
  }
}

signed main() {
  solve();

  return 0;
}