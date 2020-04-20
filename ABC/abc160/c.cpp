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
  ll K, N, max_distance = 0;
  cin >> K >> N;
  vector<int> A(N);
  REP(i, N) { cin >> A[i]; }
  sort(ALL(A));
  REP(i, N - 1) {
    if (max_distance < A[i + 1] - A[i]) {
      max_distance = A[i + 1] - A[i];
    }
  }
  if (max_distance < K - A[N - 1] + A[0]) {
    max_distance = K - A[N - 1] + A[0];
  }
  cout << K - max_distance << endl;
}

signed main() {
  solve();

  return 0;
}