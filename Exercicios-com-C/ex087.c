#include <stdio.h>
#include <time.h>

/*Crie uma lógica que preencha um vetor de 20 posições com números 
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os 
números gerados e depois coloque o vetor em ordem crescente, mostrando no final 
os valores ordenados.*/
void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordernarVetor(int arr[], int tamanho){
    for(int i = 1; i <= tamanho; i++){
        int indiceMenor = i;
        for(int j = i + 1; j <= tamanho;j++){
            if(arr[j] < arr[indiceMenor]){
                indiceMenor = j;
            }
        }
        trocar(&arr[indiceMenor],&arr[i]);
    }
}

int main(){
    int vetor[20];
    int sortear, maior;
    srand(time(NULL));
    for(int c = 1; c <= 20; c++){
        sortear = rand() % 99;
        vetor[c] = sortear;
        printf("| %d |  ",vetor[c]);
    }
    ordernarVetor(vetor, 20);

    printf("\nEm ordem crescente a lista fica: \n");
    for(int c = 1; c <= 20; c++){
        printf("| %d |  ",vetor[c]);
    }
    return 0;
}
