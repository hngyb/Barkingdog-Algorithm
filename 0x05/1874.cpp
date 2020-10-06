#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<char> v;
    stack<int> s;
    int mx = 0;

    while(n--){
        int c;
        cin >> c;
        if(mx < c){
            while(mx != c){
                v.push_back('+');
                mx++;
                s.push(mx);
            }
        }
        else{
            if(c != s.top()){
                cout << "NO";
                return 0;
            }
        }
        v.push_back('-');
        s.pop();
    }
    for(auto i:v) cout << i << '\n';
    return 0;
}