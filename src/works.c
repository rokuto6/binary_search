#include <stdio.h>

int n;
int k;
int A[100000];
int i, j, lb, ub;
int sum = 0;
int p(int x){
    int asum = 0;
    int count = 1;
    for(i = 0; i < n; i++){
        if(A[i] > x) return 0;
        if(asum + A[i] <= x) asum += A[i];
        else{
            count++;
            asum = A[i];
        }
    }
    if(count <= k) return 1;
    else return 0;
}

int main(){
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
        sum += A[i];
    }   
    lb = (sum-1)/k;
    ub = sum;
    while(ub-lb>1){
        int m = (lb+ub)/2;
        if(p(m)){
            ub = m;
        }else{
            lb = m;
        }
    }
  printf("%d\n", ub);
  return 0;
}
