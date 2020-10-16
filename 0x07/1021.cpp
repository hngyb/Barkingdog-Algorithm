#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    deque<int> dq;

    for(int i = 1; i <= N; i++){
        dq.push_back(i);
    }
    int count = 0;
    while(M--){
        int a;
        cin >> a;
        int i = 0;
        while(dq[i] != a){
            i++;
        }
        if(a == dq.front()) dq.pop_front();   
        else if(i+1 <= dq.size()/2+1){
            while(dq.front() != a){
                dq.push_back(dq.front());
                dq.pop_front();
                count++;
            }
            dq.pop_front();
        }
        else{
            while(dq.front() != a){
                dq.push_front(dq.back());
                dq.pop_back();
                count++;
            }
            dq.pop_front();
        }
    }
    cout << count;
}