#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;

#define tests() int t; cin >> t; while (t--)
#define For(i,a,b) for(int i=a; i<b; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)

const ll MOD = 1e9+7;
int n, cnt, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    tests(){
        cin >> n >> k;
        int a[1005], res = 0;
        For(i,0,n) cin >> a[i];
        For(i,0,n){
            if(a[i] == k) res++;
        }
        if(res) cout << res << endl;
        else cout << -1 << endl;
    }
}   

