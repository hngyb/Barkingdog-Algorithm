#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string init;
    int M;
    
    cin >> init >> M;
    
    list<char> L;
    for(auto i: init) L.push_back(i);
    list<char>::iterator t = L.end();

    char comm;
    char c;
    for(int i = 0; i < M; i++){
        cin >> comm;
        if (comm == 'L'){
            if(t != L.begin()) t--;
        }
        else if (comm == 'D'){
            if(t != L.end()) t++;
        }
        else if (comm == 'B'){
            if(t != L.begin()){
                t--;
                t = L.erase(t);
            }
        }
        else{
            cin >> c;
            L.insert(t,c);
        }
    }
    for(auto i : L) cout << i;
}