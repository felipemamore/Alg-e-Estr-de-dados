#include <stdio.h>
float calc(float num){
  if(num == 1){
    return 1;
  }
  else{
    return 1/num +calc(num-1);
  }
}
int main(void) {
  float num;
  scanf("%f", &num);

  printf("%f\n", calc(num));
  return 0;
}