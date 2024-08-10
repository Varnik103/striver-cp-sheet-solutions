#include<bits/stdc++.h>
#define ll long long
#define p pair<int,int>
#define pp pair<int,pair<int,int>>
using namespace std;

ll findNumber(ll num){
    if(num <= 0)
        return 0;
    int last = num % 10;
    num /= 10;
    if(num <= 0){
        if(last==9)
            return 9;
    }
    ll curr = findNumber(num);
    if(last < 9-last)
        return curr * 10 + last;
    return curr * 10 + (9 - last);
}

int main(){
    ll t;
    cin >> t;
    ll ans = findNumber(t);
    cout << ans << endl;
}