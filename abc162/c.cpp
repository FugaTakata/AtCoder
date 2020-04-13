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

unsigned euclidean_gcd(unsigned a, unsigned b) {
  if (a < b) return euclidean_gcd(b, a);
  unsigned r;
  while ((r = a % b)) {
    a = b;
    b = r;
  }
  return b;
}
// unsigned euclidean_gcd(unsigned a, unsigned b) {
//   while(1) {
//     if(a < b) swap(a, b);
//     if(!b) break;
//     a %= b;
//   }
//   return a;
// }

void solve() {
  int k;
  ll sum = 0;
  cin >> k;
  REP(a, k) {
    REP(b, k) {
      REP(c, k) { sum += euclidean_gcd(euclidean_gcd(a + 1, b + 1), c + 1); }
    }
  }
  cout << sum << endl;
}

signed main() {
  solve();

  return 0;
}