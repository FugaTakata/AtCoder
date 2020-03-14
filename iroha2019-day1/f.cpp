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
  int n, k, count = 0, i;
  cin >> n >> k;
  vector<int> a(100);
  while (n > 1) {
    i = 2;
    while (i * i < n) {
      if (n % i == 0) {
        n /= i;
        a.at(count) = i;
        count++;
        break;
      }
      i++;
    }
  }
  if (count + 1 < k) {
    cout << -1 << endl;
  } else if (count + 1 == k) {
    for (int i = 0; i < k; i++) {
      cout << a.at(i) << " ";
    }
  } else {
    while (count + 1 > k) {
      a.at(count - 1) *= a.at(count);
    }
    for (int i = 0; i < k; i++) {
      cout << a.at(i) << " ";
    }
  }
}

signed main() {
  solve();

  return 0;
}
