#include<bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){
    int a[101] = {};
    for(int i = 0; i < N; i++){
        if(a[100-arr[i]] == 1) return 1;
        a[arr[i]]++;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {4, 13, 63, 87};
    int sol2 = func2(arr, 4);
    printf("%d\n", sol2);
}