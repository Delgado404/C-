#include <stdio.h>

int main()
{
    int seg, min, hrs, resto;
    
    printf("Insira um valor em segundos: ");
    scanf("%i", &resto);
    
    while(resto >= 3600){
    hrs++; 
    resto = resto - 3600;
    }
    
    while(resto >= 60){
    min++;
    resto = resto - 60;
    } 
    seg = resto;
    printf("%ih %im %is", hrs, min, seg);

    return 0;
}
