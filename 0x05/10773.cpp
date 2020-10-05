#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    stack<int> s;

    while(K--){
        int N;
        cin >> N;
        if(N == 0) s.pop();
        else s.push(N);
    }
    int sum = 0;
    int c;
    while(!s.empty()){
        c = s.top();
        s.pop();
        sum = sum + c;
    }
    cout << sum;
}