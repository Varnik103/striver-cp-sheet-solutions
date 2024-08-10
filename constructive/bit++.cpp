#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int ans = 0;
    while(t--){
        string s;
        cin >> s;
        for (int i = 0; i < 3; ++i){
            if(s[i] == '+'){
                ans++;
                break;
            } else if(s[i] == '-'){
                ans--;
                break;
            }
        }
    }
    cout << ans << endl;
}