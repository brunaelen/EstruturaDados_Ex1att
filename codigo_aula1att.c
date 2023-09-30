#include <stdio.h>
#include <conio.h>

typedef struct {
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2;
    int matricula;
    char email[50];
    int telefone;
}ficha_de_aluno;

typedef struct {
    char nome[50];
    int cpf;
    int matricula;
    char endereco[50];
}cadastro_do_professor;


int main () {
    ficha_de_aluno aluno;
    cadastro_do_professor prof;

    printf ("\n\n----------CADASTRO DE ALUNO-----------\n\n");

    printf ("Nome do aluno: ");
    fgets (aluno.nome, sizeof(aluno.nome), stdin);

    printf ("Disciplina: ");
    fgets (aluno.disciplina, sizeof(aluno.disciplina), stdin);

    printf ("Nota da prova 1: ");
    scanf ("%f", &aluno.nota_prova1);

    printf ("Nota da prova 2: ");
    scanf ("%f", &aluno.nota_prova2);

    printf ("Matricula: ");
    scanf ("%d", &aluno.matricula);

    printf ("Email: ");
    scanf ("%s", aluno.email);

    printf ("Telefone: ");
    scanf ("%d", &aluno.telefone);

    system("cls");

    printf ("\n\n---------CADASTRO DE PROFESSOR------------\n\n");

    fflush(stdin);
    printf ("Nome: ");
    fgets (prof.nome, sizeof(prof.nome), stdin);

    printf ("CPF: ");
    scanf ("%d", &prof.cpf);

    printf ("Matricula: ");
    scanf ("%d", &prof.matricula);

    printf ("Endereco: ");
    fgets (prof.endereco, sizeof(prof.endereco), stdin);

    system ("cls");

    printf ("******ALUNO******\n\nNome: %s\nDisciplina: %s\nNota prova 1: %.2f\nNota prova 2: %.2f\nMatricula: %d\nEmail: %s\nTelefone: %d\n\n", aluno.nome, aluno.disciplina, aluno.nota_prova1, aluno.nota_prova2, aluno.matricula, aluno.email, aluno.telefone);

    printf ("*****PROFESSOR*****\n\nNome: %s\nCPF: %d\nMatricula: %d\nEndereco: %s\n\n", prof.nome, prof.cpf, prof.matricula, prof.endereco);

    return 0;
}