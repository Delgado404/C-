#include <stdio.h>

int main()
{
    int nota, notaMaior, notaMenor = 10, c;
    float total;
    c=1;
    while(c<7)
    {
        printf("Digite uma nota: ");
        scanf("%i", &nota);
        if(nota <= 10)
        {
            c++;
            total = total + nota;
            if(nota>notaMaior)
            {
                notaMaior = nota;
            }
            else if(nota<notaMenor)
            {
                notaMenor = nota;
            }
        }
        else
            printf("Digite um numero de 0 a 10\n");
    }
        total = total - notaMaior - notaMenor;
        printf("valor da média %.1f", total/4);
}
