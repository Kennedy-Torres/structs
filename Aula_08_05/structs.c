#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    printf("|------------------Exemplo de Struct-------------------|\n");

    struct Aluno{
        char nome[20]; // variaveis membro 
        int matricula;
    }aluno; // criando variavel do tipo Aluno 

    aluno.matricula = rand() % 1000; // gerando um valor aleatorio 
    strcpy(aluno.nome,"Kennedy");

    printf("Matricula: %d\n",aluno.matricula);
    printf("Nome: %s\n",aluno.nome);

    return 0;
}