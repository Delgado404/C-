#include <stdio.h>
int main(){
    
  int a, b, divi, mult, media;
  
  printf("Escolha o inicio do intervalo: ");
  scanf("%i", &a);
  printf("Escolha o final do intervalo: ");
  scanf("%i", &b);
  printf("Escolha o divisor: ");
  scanf("%i", &divi);
  
 int Ediv(int c){ 
     if(b%divi){
       return 0;
   } else { 
       return 1;
   }
     
 }
  for(;a<=b; b--)
  {
      if(Ediv(b)){
      printf("%i \n", b);
      mult++;
      media = media + b;
   }
  }

   printf("numero de multiplos de %i no intervalo: %i \n",divi ,mult);
   printf("valor da média: %i",media/mult);
  
}