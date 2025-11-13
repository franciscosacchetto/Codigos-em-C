#include <stdio.h>1

int main() {
       int vetor[5];
       int *p = vetor;
       for(int i=0; i<5; i++){
           printf("Digite o elemento %d\n:",i+1);
           scanf("%d",&p[i]);
       }
   for(int i=0; i<5; i++){
           printf("Elemento %d:%d\n",i+1,p[i]);
}
    return 0;
}
