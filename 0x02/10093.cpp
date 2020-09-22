#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    if(a>b){
        cout << a-b-1 << "\n";
        for(long long i = b + 1; i < a; i++){
            cout << i << " ";
        }
    }
    else if(b>a){
        cout << b-a-1 << "\n";
        for(long long i = a + 1; i < b; i++){
            cout << i << " ";
        }
    }
    else if(a==b){
        cout << 0 <<"\n";
    }
}