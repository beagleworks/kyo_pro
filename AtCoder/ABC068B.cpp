// ABC068B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  for (int i=1; i; i*=2) {
    if (i > n) {
      cout << i/2 << endl;
      return 0;
    }
  }
}