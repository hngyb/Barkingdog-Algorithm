#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B, C;
    int freq[10] = {};
    cin >> A >> B >> C;
    string mult = to_string(A * B * C);
    for(auto i : mult){
        freq[int(i - '0')]++;
    }
    for(int i = 0; i < 10; i++){
        cout << freq[i] << '\n';
    }
}