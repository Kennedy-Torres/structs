#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    printf("|------------------Exemplo de Struct-------------------|\n");

    struct Aluno{
        char nome[20]; // variaveis membro 
        int matricula;
    }; 

    struct Aluno aluno1, aluno2, aluno3; // criando variavel do tipo Aluno .... sinonimo ....................................


        aluno1.matricula = rand() % 1000; // gerando um valor aleatorio 
        aluno2.matricula = rand() % 1000;
        aluno3.matricula = rand() % 1000;

        strcpy(aluno1.nome,"Kennedy");
        strcpy(aluno2.nome,"Rodrigo");
        strcpy(aluno3.nome,"Torres");
    

        printf("Matricula1: %d\n",aluno1.matricula);
        printf("Matricula1: %d\n",aluno2.matricula);
        printf("Matricula1: %d\n",aluno3.matricula);

        printf("Nome: %s\n",aluno1.nome);
        printf("Nome: %s\n",aluno2.nome);
        printf("Nome: %s\n",aluno3.nome);

    return 0;
}