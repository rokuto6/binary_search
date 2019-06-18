#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  lb = 0;
  ub = 1000000001;
  int sum = 0;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  while(ub-lb>1){
    sum = 0;
    int m = (ub+lb)/2;
    for(i = 0; i < n; i++){
        sum += A[i]/m;
    }
    if(sum>=k){
        lb = m;
    }else{
        ub = m;
    }
  }
  printf("%d\n", lb);
  return 0;
}
