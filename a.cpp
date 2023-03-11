#include <bits/stdc++.h>
#include "addTemplate.cpp"
#define ll long long
#define ull unsigned long long
#define all(vec) vec.begin(), vec.end()
#define cin(v) for (auto& i : v) cin >> i
#define cout(v) for (auto& i : v) cout << i << " "; cout << "\n"
#define Ceil(a, b) ((a / b) + (a % b ? 1 : 0))
#define mod 998244353
#define fr first
#define sc second

using namespace std ;

void code (){
    ios_base :: sync_with_stdio (false), cin.tie(0), cout.tie(0);
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
}

void solve(){
    addTemplate("dsu", "a.cpp");
}

int main() {
    code();
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
