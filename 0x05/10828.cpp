#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int  N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string c;
        cin >> c;
        if(c == "push"){
            int x;
            cin >> x;
            s.push(x);
        }
        else if(c == "pop"){
            if(s.empty()) cout << -1 << "\n";
            else{
                cout << s.top() << "\n";
                s.pop();
                }
        }
        else if(c == "size"){
            cout << s.size() << "\n";
        }
        else if(c == "empty"){
            if(s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else{
            if(s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
}