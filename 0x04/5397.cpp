#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        list<char> L;
        list<char>::iterator c = L.begin();
        string pwd;
        cin >> pwd;
        for(auto p:pwd){
            if(p == '-'){
                if (c != L.begin()){
                    c--;
                    c = L.erase(c);
                }
            }
            else if(p == '<'){
                if (c != L.begin()) c--;
            }
            else if(p == '>'){
                if (c != L.end()) c++;
            }
            else{
                L.insert(c,p);
            }
        }
        for(auto i:L) cout << i;
        cout << '\n';
    }
}