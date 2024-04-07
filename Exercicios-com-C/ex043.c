#include <stdio.h>
#include <time.h>
int main(){
  for(int c = 10; c >= 0; c--){
    sleep(1);
    printf("%d\n", c);
  }
  printf("KABUM!");
  return 0;
}
