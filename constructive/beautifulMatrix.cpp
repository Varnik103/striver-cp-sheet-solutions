#include<bits/stdc++.h>
#define ll long long
#define p pair<int,int>
#define pp pair<int,pair<int,int>>
#define v vector<int> 
#define vv vector<vector<int>>
using namespace std;

int main(){
    vv arr(5, v(5));
    p pos;
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 1)
                pos = {i, j};
        }
    }
    cout << abs(2 - pos.first) + abs(2 - pos.second) << endl;
}