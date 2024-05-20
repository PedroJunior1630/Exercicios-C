#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int nums[4];
    int c, sorteio;
    int somapar=0;
    printf("O 5 números sorteados foram...\n");
    while(c<5){
        sorteio = rand() % 10 + 1;
        nums[c] = sorteio;
        if(nums[c] % 2 == 0){
            somapar += nums[c];
        }
        printf("| %d | ",nums[c]);
        c++;
    }
    printf("Somando apenas os números pares: %d\n",somapar);
    return 0;
}
