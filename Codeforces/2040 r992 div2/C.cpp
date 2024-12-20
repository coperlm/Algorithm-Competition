#include<iostream>
#include<queue>
#define int long long

using namespace std;

int n , k;

deque < int > q;

signed main(){
    int t;cin >> t;
    while( t -- ){
        cin >> n >> k;
        int num = 1 , flag = 1;
        for(int i = 1;i < n;i ++){
            num *= 2ll;
            if( num >= k || num < 0 ){
                flag = 2;break;
            }
        }if( num < k && flag == 1 ){
            cout << "-1" << endl;
            continue;
        }
        k --;
        q.push_back(n);n--;
        while( n ){
            if( k % 2 == 0 )
                q.push_front( n );
            else
                q.push_back( n );
            n --;k /= 2;
        }
        while( !q.empty() ){
            cout << q.front() << " ";
            q.pop_front();
        }cout << endl;
    }
    return 0;
}
/*
1
1000 21
*/