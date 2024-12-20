#include<iostream>

using namespace std;

int m , a , b , c;
int ans;

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> m >> a >> b >> c;
        if( a + c < b ){
            a += c;
            ans = min( a , m ) + min( b , m );
        }else if( b + c < a ){
            b += c;
            ans = min( a , m ) + min( b , m );
        }else{
            ans = min( a+b+c , m*2 );
        }
        cout << ans << endl;
    }
    return 0;
}