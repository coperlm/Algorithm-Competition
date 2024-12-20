#include<iostream>

using namespace std;

const int N = 2e5;
int n;
int bin[N+10];

signed main(){
    int t;cin >> t;
    int maxb = 0;
    while( t -- ){
        cin >> n;
        int top = 1;
        for(int i = 1,b;i <= n;i ++){
            cin >> b;
            if( bin[b] ){
                while( bin[top] == 1 ){
                    top ++;
                    
                }
                cout << top << " ";
                bin[top] = 1;
                top ++;
            }
            else{
                bin[b] = 1;
                cout << b << " ";
            }
            maxb = max( max( b , maxb ) , top );
        }cout << endl;
        for(int i = 1;i <= maxb;i ++){
            bin[i] = 0;
        }
    }
    return 0;
}