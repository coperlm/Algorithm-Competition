#include<iostream>

using namespace std;

int n , k;
int a[110];

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> n >> k;
        for(int i = 1;i <= n;i ++){
            cin >> a[i];
        }
        int ans_num = -1;
        for(int i = 1;i <= n;i ++){
            int ok = 0;
            for(int j = 1;j <= n;j ++){
                if( i == j ) continue;
                if( (a[i]-a[j])%k == 0 ) ok = 1;
            }
            if( ok == 0 ){
                ans_num = i;
                // break;
            }
        }
        if( ans_num == -1 ){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl << ans_num << endl;
        }
    }
    return 0;
}