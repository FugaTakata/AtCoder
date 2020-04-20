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
  int N, T, total = 0, start, f = 0;
  cin >> N >> T;
  vector<int> A(N);
  REP(i, N) { cin >> A[i]; }
  start = A[0];
  REP(i, N - 1) {
    if (A[i + 1] - A[i] > T) {
      total += A[i] - start + T;
      start = A[i + 1];
      f++;
    }
    if (i == N - 2) {
      total += A[i + 1] - start + T;
    }
  }
  cout << total << endl;
}

signed main() {
  solve();

  return 0;
}