#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  int sum = 0;
  lb = 0;
  scanf("%d%d", &n, &k);
  ub = 1000000000;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while(ub-lb>1){
    sum = 0;
    int m = (lb+ub)/2;
    for(i = 0; i < n; i++){
        sum = sum + (A[i]+m-1)/m;
    }
    if(sum>k){
        lb = m;
    }else{
        ub = m;
    }
  }
  printf("%d\n", ub);
  return 0;
}
