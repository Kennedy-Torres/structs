#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

int main(){

    printf("|------------------Exemplo de Struct-------------------|\n");

    struct Aluno{
        char nome[20]; // variaveis membro 
        int matricula;
    }; 

    struct Aluno aluno[TAM];
    
    for(int i=0; i<TAM; i++){
        printf("Informe o nome do %do aluno:\n",i+1);
        scanf("%[^\n]s",&aluno[i].nome);
        printf("Informe a matrica do %do aluno:\n",i+1);
        scanf("%d",&aluno[i].matricula);
        fflush(stdin);
    }

    printf("\n\nLista de alunos\n\n");

    for(int i=0; i<TAM; i++){
        printf("Nome do %do aluno:%s \n",i+1,aluno[i].nome);
        printf("Matricula do %do aluno:%d\n",i+1,aluno[i].matricula);


    }
    
    return 0;
}