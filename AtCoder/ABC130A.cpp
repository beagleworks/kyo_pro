// ABC130A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, a;
  cin >> x >> a;

  // solve
  int ans = (x < a ? 0 : 10);

  // output
  cout << ans << endl;
  return 0;

}