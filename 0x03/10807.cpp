#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, v;
    int freq[400] = {};

    cin >> N;
    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp >= 0) freq[temp]++;
        else if(temp < 0) freq[temp + 300]++;
    }
    cin >> v;
    if(v >= 0) cout << freq[v];
    else if(v < 0) cout << freq[v + 300];
}