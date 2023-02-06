// ARC005A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int ans = 0;
  set<string> tkhs = {"TAKAHASHIKUN", "Takahashikun", "takahashikun"};
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    if (i == n-1) s.pop_back();
    if (tkhs.count(s)) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}