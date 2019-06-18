#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  int sum = 0;
  lb = 0;
  scanf("%d%d", &n, &k);
  ub = 100000000/k;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
    sum += A[i];
  }
  while(ub-lb>1){
    int m = (lb+ub)/2;
    if((sum/m)<k) lb = m;
    else ub = m;
  }
  printf("%d\n", ub);
  return 0;
}
