#include<iostream>
#define int long long

using namespace std;

const int N = 2e5;
int a[N+10] , b[N+10] , n , r[N+10];

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> n;
        for(int i = 1;i <= n;i ++){
            cin >> r[i];a[i] = 1;
        }
        int flag = 0 , cnt = 1;
        while( !flag ){
            cnt ++;
            for(int i = 1;i <= n;i ++){
                if( a[i] ) b[r[i]] = 1;
            }int temp = 1;
            for(int i = 1;i <= n;i ++){
                if( a[i] == b[i] ) continue;
                else temp = 0;
            }if( temp ) flag = 1;
            for(int i = 1;i <= n;i ++){
                a[i] = b[i];
                b[i] = 0;
            }
        }cout << cnt << endl;
    }
    return 0;
}