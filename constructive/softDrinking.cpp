#include<bits/stdc++.h>
#define ll long long
#define p pair<int,int>
#define pp pair<int,pair<int,int>>
#define v vector<int> 
#define vv vector<vector<int>>
using namespace std;

int main(){
    int n, k, l, c, d, pg, nl, np;
    cin >> n >> k >> l >> c >> d >> pg >> nl >> np;
    int ans = 1e9;
    ans = min(ans, (k * l / nl));
    ans = min(ans, c * d);
    ans = min(ans, pg / np);
    cout << ans / n << endl;
}