#include<iostream>
#define int long long

using namespace std;

int k , l1 , l2 , r1 , r2;

bool checkl( int num , int kn ){
    if( kn*num < l2 && kn != 0 ) return 1;
    else return 0;
}

int efl( int l , int r , int kn ){
    if( l == r ) return l;
    int mid = (l+r)/2;
    if( checkl(mid,kn) ) return efl( mid + 1 , r , kn );
    else return efl( l , mid , kn );
}

bool checkr( int num , int kn ){
    if( kn*num <= r2 && kn != 0 ) return 1;
    else return 0;
}

int efr( int l , int r , int kn ){
    if( l == r ) return l;
    int mid = (l+r)/2;
    if( checkr(mid,kn) ) return efr( mid + 1 , r , kn );
    else return efr( l , mid , kn );
}

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int n = 0 , kn = 1;
        int ans = 0;
        while( kn <= (r2/l1) ){
            int l = efl( l1 , r1 , kn ) , r = efr( l1 , r1 , kn );
            ans += ( r - l + 1 );
            if( l*kn < l2 ) ans --;
            if( r*kn > r2 ) ans --;
            // if( l == r && (l*kn<l2||l*kn>r2) ) ans = 0;
            // cout << l << " " << r << " " << kn << " ans_now: " << ans << endl;
            kn *= k , n ++;
            if( kn < 0 ) kn = 0;
        }cout << ans << endl;
    }
    return 0;
}