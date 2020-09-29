#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;

    list<int> L;
    for(int i = 1; i <= N; i++) L.push_back(i);
    list<int>::iterator t = L.begin();
    cout << '<';

    for (int i = 0; i < N-1; i++){
        for(int j = 0; j < K-1; j++){
            if(t == --L.end()) t = L.begin();
            else t++;
        }
        cout << *t << ", ";
        t = L.erase(t);
        if(t == L.end()) t = L.begin();
    }
    for(int j = 0; j < K-1; j++){
    if(t == --L.end()) t = L.begin();
    else t++;
    }
    cout << *t << ">";
}