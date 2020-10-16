#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int N;
    cin >> N;
    string c;
    
    while(N--){
        cin >> c;
        if(c == "push_front"){
            int a;
            cin >> a;
            dq.push_front(a);
        }
        else if(c == "push_back"){
            int a;
            cin >> a;
            dq.push_back(a);
        }
        else if(c == "pop_front"){
            if(dq.empty()) cout << -1 << "\n";
            else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(c == "pop_back"){
            if(dq.empty()) cout << -1 << "\n";
            else{
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if(c == "size"){
            cout << dq.size() << "\n";
        }
        else if(c == "empty"){
            cout << dq.empty() << "\n";
        }
        else if(c == "front"){
            if(dq.empty()) cout << -1 << "\n";
            else{
                cout << dq.front() << "\n";
            }
        }
        else{
            if(dq.empty()) cout << -1 << "\n";
            else{
                cout << dq.back() << "\n";
            }
        }
    }
}