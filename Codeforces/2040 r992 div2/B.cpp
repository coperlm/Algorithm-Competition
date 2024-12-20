#include<iostream>
#define int long long

using namespace std;

int n;

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> n;
        int now = 1 , ans = 1;
        while( now < n ){
            now += 1;now *= 2;
            ans ++;
        }cout << ans << endl;
    }
    return 0;
}