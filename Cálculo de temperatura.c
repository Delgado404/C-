#include <stdio.h>

int main()
{
  float C, F;
  printf("Digite uma temperatura em farhaneit: ");
  scanf("%f", &F);
  C = (F - 32)/9 * 5;
  printf("%.1f", C);
    
}
