#include <stdio.h>

int main(){
  int num1, num2, N, r, PA;
  N = PA = 0;
  
  scanf("%d", &num1);
  num2 = num1;
  N++;

  do{
      scanf("%d", &num1);
            
      if(num1 != 0){
        N++;
        if(PA == 0){
          r = num1 - num2;
          PA = 1;
        } else {
          if(num1 - num2 != r){
            PA = 2;
          }
        }
        num2 = num1;
      }
  } while(num1 != 0);
    
  if (PA == 0) {
    printf("sim %d", num2);
  } else {
    if (PA == 1){
      printf("sim %d", r);
    } else {
      printf("nao %d", N);
    }
  }  
  return 0;
}
