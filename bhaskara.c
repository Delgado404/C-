#include <stdio.h>
#include <math.h>

int main()
{
    float a = 9, b, c;
    float delta, rad, eq, x1, x2;
    
    while(a!=0){
    printf("\nDigite um número, a: ");
    scanf("%f", &a);
    printf("Digite um número, b: ");
    scanf("%f", &b);
    printf("Digite um número, c: ");
    scanf("%f", &c);
    
    delta = b*b - (4*a*c);
    
    rad = sqrt(delta);
            
    x1 = (-b + rad)/2*a;
    x2 = (-b - rad)/2*a;
    
    if(a == 0){
        printf("o Valor de a nao pode ser 0");
        return 0;
    } 
    if (delta <0 ){
        printf("impossível calcular");
    } else {
        printf("x1 = %.2f e x2 = %.2f", x1, x2);
    }
}
    return 0;
}