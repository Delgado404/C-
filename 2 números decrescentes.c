#include <stdio.h>

int main()
{
    float a, b;
   
   
    printf("Escolha o primeiro número: ");
    scanf("%f", &a);
    printf("Escolha o segundo número: ");
    scanf("%f", &b);
    
    while(a != 0 && b != 0){
        if(a > b){
            printf("valores em ordem decrescente: %.1f %.1f \n", a, b);
        } else {
            printf("valores em ordem decrescente: %.1f %.1f \n", b, a);
        }
         printf("Escolha o primeiro número: ");
         scanf("%f", &a);
         printf("Escolha o segundo número: ");
         scanf("%f", &b);
        }
    printf("O valor não pode ser 0, encerrado...");
    return 0;
    
}
