#include<iostream>

using namespace std;

signed main(){
    int t;cin >> t;string s;
    while( t -- ){
        cin >> s;
        for(int i = s.length()-1;i >= 0;i --){
            if( s[i] == 'p' ) cout << 'q';
            else if( s[i] == 'q' ) cout << 'p';
            else cout << 'w';
        }cout << endl;
    }
    return 0;
}