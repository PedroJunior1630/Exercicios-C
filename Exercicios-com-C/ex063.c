
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    printf("=========================\n");
    printf("TABUADA\n");
    printf("=========================\n");
    
    int num=0;
    while(num >= 0){
        printf("Qual tabuada deseja ver? ");
        scanf("%d",&num);
        printf("=========================\n");
        for(int c =1; c<=10;c++){
            printf("%d x %d = %d\n",num,c,num*c);
        }
        printf("=========================\n");
    }   
}
