#include<iostream>
#define int long long

using namespace std;

const int N = 2e5;
int n;
int a[N];

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> n;
        for(int i = 1;i <= n;i ++){
            cin >> a[i];
        }
        int flag = 1;
        // for(int i = 2;i < n;i ++){
        //     if( ( a[i-1]%2==a[i+1]%2 ) && a[i-1]!=0 && a[i+1]!=0 ){
        //         flag = 1;
        //         // break;
        //     }else flag = 0;
        // }
        // int j = 0 , o = 0 , t_j = 0 , t_o = 0;
        // for(int i = 1;i <= n;i ++){
        //     if( i % 2 ) j += a[i] , t_j ++;
        //     else o += a[i] , t_o ++;
        // }if( j*t_o != o*t_j ) flag = 0;
        // cout << j << " " << o << " " << t_j << " " << t_o << endl;
        int sumj = 0 , cntj = 0;
        for(int i = 1;i <= n;i ++){
            if( i % 2 ) sumj += a[i] , cntj ++;
        }int ave = sumj / cntj;if( sumj % cntj ) flag = 0;
        int lef = 0;
        for(int i = 1;i <= n;i ++){
            if( i == 2 ){
                lef = a[i] - ave;
                
            }
            else{
                if( i % 2 == 0 ){
                    lef = a[i] - ave + lef;
                }
            }
                
        }
        if( lef != 0 ) flag = 0;
        // cout << lef << endl;
        cout << (flag?"Yes":"No") << endl;
    }
    return 0;
}