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
  int N, X, Y, len = 1, min, st, use_b, b_len;
  cin >> N >> X >> Y;
  b_len = 1;
  st = N;
  use_b = N;
  min = N;
  vector<int> count(N, 0);
  FOR(i, 1, N - 1) {
    FOR(n, i + 1, N) {
      st = n - i;
      if (i <= X) {
        if (n <= X) {
          use_b = st;
        } else {
          if (n <= Y) {
            use_b = X - i + b_len + Y - n;
          } else {
            use_b = X - i + b_len + n - Y;
          }
        }
      } else if (X < i < Y) {
        if (n <= Y) {
          use_b = i - X + b_len + Y - n;
        } else {
          use_b = i - X + b_len + n - Y;
        }
      } else {
        use_b = st;
      }
      if (st < use_b) {
        min = st;
        if (min < N) {
          count[min] += 1;
        }
      } else if (use_b < st) {
        min = use_b;
        if (min < N) {
          count[min] += 1;
        }
      } else {
        min = st;
        if (min < N) {
          count[min] += 1;
        }
      }
      // cout << "I:" << i << "  N:" << n << "  ST:" << st << "  USE_B:" << use_b
      //      << "  MIN:" << min << endl;
    }
  }
  FOR(i, 1, N - 1) { cout << count[i] << endl; }
}

signed main() {
  solve();

  return 0;
}