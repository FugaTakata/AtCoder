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
  int N, Y, x, y, z;
  bool ans = false;
  cin >> N >> Y;
  x = Y / 10000;
  y = (Y - 10000 * x) / 5000;
  z = (Y - 10000 * x - 5000 * y) / 1000;
  while (x + y + z + 1 <= N) {
    x -= 1;
    y += 2;
    while (x + y + z + 4 <= N && y >= 0) {
      y -= 1;
      z += 5;
      if (x + y + z == N && 10000 * x + 5000 * y + 1000 * z != Y) {
        ans = true;
      }
    }
    if (ans) {
      break;
    }
  }
  // if (x + y + z > N || x + y + z < N) {
  //   ans = false;
  //   x = Y / 10000;
  //   y = (Y - 10000 * x) / 5000;
  //   z = (Y - 10000 * x - 5000 * y) / 1000;
  //   while (x + y + z + 1 <= N) {
  //     x -= 1;
  //     y += 2;
  //     while (x + y + z + 4 <= N) {
  //       y -= 1;
  //       z += 5;
  //       if (x + y + z == N && 10000 * x + 5000 * y + 1000 * z != Y) {
  //         ans = true;
  //       }
  //     }
  //     if (ans) {
  //       break;
  //     }
  //   }
  // }
  // if (x < 0 || y < 0 || z < 0 || x + y + z > N ||
  //     Y / 10000 + (Y - 10000 * (Y / 10000)) / 5000 +
  //             (Y - 10000 * (Y / 10000) -
  //              5000 * ((Y - 10000 * (Y / 10000)) / 5000)) /
  //                 1000 <
  //         N) {
  if (x < 0 || y < 0 || z < 0 || x + y + z > N || x + y + z < N) {
    x = -1;
    y = -1;
    z = -1;
  }
  cout << x << ' ' << y << ' ' << z << endl;
}

signed main() {
  solve();

  return 0;
}