#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define B7AIRY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define YES return void(cout << "YES\n")
#define NO return void(cout << "NO\n")
#define RN1 return void(cout << "-1\n")
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
#define ull unsigned long long
const ll N = 2e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int e, s; 
ll NumberOfWays(ll num) { 
    if (num > e)return 0;
    if (num == e)return 1;
    ll ch1 = NumberOfWays(num + 1);
    ll ch2 = NumberOfWays(num + 2);
    ll ch3 = NumberOfWays(num + 3);

    return ch1+ch2+ch3;
}
void solution() {
    cin >> s >> e; 
    cout << NumberOfWays(s) << endl;
}
int main() {
    B7AIRY
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    int t = 1;
      //cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solution();
    }
}