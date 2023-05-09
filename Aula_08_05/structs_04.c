#include <stdio.h>
#include <string.h>
#define TAM 2

int main(){

    printf("|------------------Exemplo de Struct-------------------|\n");

    struct Endereco{
        int numero;
        char cep[10];
    };

    struct Aluno{
        char nome[20]; // variaveis membro 
        int matricula;
        struct Endereco endereco;
    }; 

    struct Aluno aluno[TAM];

    aluno[0].endereco.numero = 300;

    printf("Endereco=%d",aluno[0].endereco.numero); // aplicacao da chave estrangeira.... contexto banco de dados
    
    return 0;
}