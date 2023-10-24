#include <stdio.h>
int main()
{
    int idade, alunos, soma;
    int media;
    int velha, nova;
    
    int desprezados = 0;
    int contador = 0; 
    idade = 0;
    soma = 0;
    nova = 9999;
    
    printf("digite o numero de alunos registrados: ");
    scanf("%i", &alunos);
    
    while(alunos == 0){
    printf("digite o numero de alunos registrados(exceto 0): ");
    scanf("%i", &alunos);
    } 
    
    while(idade==idade){
        printf("digite um número: ");
        scanf("%i",&idade);
        
        if(velha < idade){
          velha = idade;    
        }
        
        if(nova > idade){
         nova = idade;
        }
      
        soma = soma + idade;
       
        if(idade>60 || idade<14){
            soma = soma - idade;
            desprezados = desprezados + 1;
        }
        
        printf("soma = %i \n", soma);
    
      contador = contador + 1;
      
     if(contador==alunos)
       {
        printf("---------------------- \n");
        printf("| número de alunos= %i |\n", alunos);
        media = soma/alunos;
        printf("| média das idades= %i |\n", media);
        printf("| idade mais velha= %i |\n", velha);
        printf("| idade mais nova= %i  |\n", nova);
        printf("| idades deprezadas=   |%i", desprezados);
        
        return 0;
       }
    
    }

 return 0;
}







