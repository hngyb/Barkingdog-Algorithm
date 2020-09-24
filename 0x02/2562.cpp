#include<bits/stdc++.h>
using namespace std;

int main(){
    int mx, tmp, n;
    cin >> mx;
    n = 1;
    for(int i = 2; i < 10; i++){
        cin >> tmp;
        if(tmp > mx){
            mx = tmp;
            n = i;
        }
    }
    cout << mx << "\n";
    cout << n;
}