// ABC065A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, a, b;
  cin >> x >> a >> b;

  // output
  cout << (a >= b ? "delicious" : b-a <= x ? "safe" : "dangerous") << endl;
  return 0;

}