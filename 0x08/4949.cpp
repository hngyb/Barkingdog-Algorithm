#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true){
        string a;
        stack<char> s;
        getline(cin, a);
        if(a == ".") break;
        bool isValid = true;

        for(auto c:a){
            if(c == '(' || c == '[') s.push(c);
            else if(c == ')'){
                if(s.empty()){
                    isValid = false;
                    break;
                }
                else if(s.top() != '('){
                    isValid = false;
                    break;
                }
                else if(s.top() == '('){
                    s.pop();
                }
            }
            else if(c == ']'){
                if(s.empty()){
                    isValid = false;
                    break;
                }
                else if(s.top() != '['){
                    isValid = false;
                    break;
                }
                else if(s.top() == '['){
                    s.pop();
                }
            }
        }
        if(!s.empty()) isValid = false;
        if(isValid) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}