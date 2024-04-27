#include <stdio.h>

int main(){
    char pl[20][32] = {"Arsenal","Manchester City","Liverpool","Aston Villa","Totteham","Manchester United","Newcastle","West Ham","Chelsea","Wolves","Bournemouth","Brighton","Fulham","Crystal Palace","Everton","Brentford","Forest","Luton","Burnley","Sheffield United"};
    printf("===========PREMIER LEAGUE============\n");
    for(int c = 0; c < 20; c ++){
        printf("%d° - ",c+1);
        for(int i = 0; i <32; i++){
            if(pl[c][i] == "\0"){
                break;
            }
            printf("%c",pl[c][i]);
        }
        printf("\n");
    }
    printf("=====================================\n");
    printf("Os 5 primeiros colocados: ");
    for(int c = 0; c < 5; c++){
        for(int i = 0; i < 32; i++){
            if(pl[c][i] == "\0"){
                break;
            }
            printf("%c",pl[c][i]);
        }
        printf(" | ");
    }
    printf("\nOs últimos 4 colocados: ");
    for(int c = 16; c < 20; c++){
        for(int i = 0; i <32; i++){
            if(pl[c][i] ==  "\0"){
                break;
            }
            printf("%c",pl[c][i]);
        }
        printf(" | ");
    }
    return 0;
}