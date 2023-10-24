 #include <stdio.h>
int main()
{
    int idade, alunos, soma;
    int media;
    idade = 0;
    soma = 0;
    alunos = 0;
    while(idade==idade){
    printf("digite um número: ");
    scanf("%i",&idade);
    soma = soma + idade;
    alunos = alunos + 1;
    printf("soma = %i \n", soma);
       if(idade==0)
       {
        alunos = alunos - 1;
        media = soma/alunos;
        printf("%i", media);
        return 0;
       }
        
    }
 return 0;
}







