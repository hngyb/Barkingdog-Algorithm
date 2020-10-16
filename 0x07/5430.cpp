#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--){
        bool iserror = false;
        bool isreverse = false;
        string p;
        cin >> p;
        deque<int> dq;
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        for(int i = 1; i < arr.size(); i++){
            int x = 0;
            while((arr[i] >= '0') & arr[i] <= '9'){
                x *= 10;
                x += int(arr[i]-'0');
                i++;
            }
            if(x!=0) dq.push_back(x);
        }
        for(int i = 0; i < p.size(); i++){
            if(p[i] == 'R'){
                isreverse = !isreverse;
            }
            else{
                if(dq.empty()){
                    iserror = true;
                }
                else{
                    if(isreverse) dq.pop_back();
                    else dq.pop_front();
                }
            }
        }
        if(iserror) cout << "error" << '\n';
        else if(dq.empty()) cout << "[]" << '\n';
        else{
            if(isreverse){
                cout << '[';
                for(auto it = dq.rbegin(); it < dq.rend()-1; it++){
                    cout << *it << ',';
                }
                cout << dq.front() << ']' << '\n';
            }
            else{
                cout << '[';
                for(int i = 0; i < dq.size()-1; i++){
                    cout << dq[i] << ',';
                }
                cout << dq.back() << ']' << '\n';
            }
        }
    }
}
