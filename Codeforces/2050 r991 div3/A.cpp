#include<iostream>
#include<algorithm>

using namespace std;

int n , m;
string s[55];
int a[55];

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> n >> m;
        for(int i = 1;i <= n;i ++){
            cin >> s[i];
            a[i] = s[i].length();
        }
        // sort( a+1 , a+n+1 );
        int i = 1 , ans = 0;
        while( m > 0 ){
            if( i == n + 1 ) break;
            if( m >= a[i] ){
                m -= a[i];
                ans ++;i ++;
            }else break;
        }cout << ans << endl;
    }
    return 0;
}
/*
1
3 2
abc
ab
a
*/