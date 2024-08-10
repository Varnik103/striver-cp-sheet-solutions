#include<bits/stdc++.h>
#define ll long long
#define p pair<int,int>
#define pp pair<int,pair<int,int>>
#define v vector<int> 
#define vv vector<vector<int>>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        v ans;
        int multiplier = 1;
        while (num > 0){
            int last = num % 10;
            if(last > 0)
                ans.push_back(last * multiplier);
            multiplier *= 10;
            num /= 10;
        }
        cout << ans.size() << endl;
        for(auto it:ans){
            cout << it << " ";
        }
        cout << endl;
    }
}