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
vector<vector<int>>sub;
vector<int>temp; 
int n ; 
vector<int>arr={1,2,3,4};
void subseq(int i){
    if(i==n){
        sub.push_back(temp);
        return ; 
    }
    temp.push_back(arr[i]);
    subseq(i+1);
    temp.pop_back();
    subseq(i+1);
}
void solution() {
   n = 4; 
   subseq(0);
   for(auto i : sub){
    for(auto j : i){
        cout<<j<<" ";
    }
    cout<<endl;
   }
}
int main() {
    B7AIRY
// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//     //freopen("output.txt", "w", stdout);
// #endif
    int t = 1;
      //cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solution();
    }
}