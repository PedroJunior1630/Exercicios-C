
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int nt, t1,t2,tx, c = 3;
    printf("Digite quantos termos deseja ver de fibonacci: ");
    scanf("%d",&nt);
    t1 = 0;
    t2 = 1;
    printf("%d > %d",t1, t2);
    while(c <= nt){
        tx = t1 + t2;
        printf(" > %d",tx);
        t1 = t2;
        t2 = tx;
        c ++;
    }
    printf(" FIM");
    return 0;
}
