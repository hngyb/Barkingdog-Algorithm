#include<stdio.h>

int func1(int N);
int func2(int arr[], int N);
int func3(int N);
int func4(int N);
int main(){
    int sol1 = func1(27639);
    printf("%d\n", sol1);
    
    int arr[] = {4, 13, 63, 87};
    int sol2 = func2(arr, 4);
    printf("%d\n", sol2);

    int sol3 = func3(756580036);
    printf("%d\n", sol3);
    
    int sol4 = func4(97615282);
    printf("%d", sol4);
}
int func1(int N){/* 시간 복잡도: O(N) */
    int s;
    for(int i = 0; i <= N; i++){
        if ((i % 3 == 0) || (i % 5 == 0)){
            s = s+ i;
        }
    }
    return s;
}
int func2(int arr[], int N){/* 시간 복잡도: O(N^2) */
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == 100){
                return 1;
            }
        }
    }
    return 0;
}
int func3(int N){/* 시간 복잡도: O(√N) */
    for(int i = 1; i * i <=  N; i++){
        if(i*i == N){
            return 1;
        }
    }
    return 0;
}
int func4(int N){/* 시간 복잡도: O(lgN) */
    int mx = 1;
    for(int i = 1; i * 2 <= N; i = i*2){
        if(i*2 > mx) mx = i*2;
    }
    return mx;
}