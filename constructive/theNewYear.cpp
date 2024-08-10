#include<bits/stdc++.h>
#define ll long long
#define p pair<int,int>
#define pp pair<int,pair<int,int>>
#define v vector<int> 
#define vv vector<vector<int>>
using namespace std;

int main(){
    v arr(3);
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    sort(arr.begin(), arr.end());
    cout << (arr[1] - arr[0]) + (arr[2] - arr[1]) << endl;
}