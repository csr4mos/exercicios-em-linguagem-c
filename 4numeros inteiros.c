#include <stdio.h>
#include <stdlib.h>

// Algoritmo que informa a soma e a multiplicação de 4 números //

main()
{
  int a,b,c,d,ADIC,MULTIP;
  
  printf("Digite o primeiro numero\n");
  scanf("%f",&a);
  
  printf("Digite o segundo numero\n");
  scanf("%f",&b);
  
  printf("Digite o terceiro numero\n");
  scanf("%f",&c);
  
  printf("Digite o quarto numero\n");
  scanf("%f",&d);
  
  ADIC=(a+b+c+d);
  printf("A soma dos valores e:\n%d",ADIC);
  
  MULTIP=(a*b)+(c*d);
  printf("\n A multiplicacao do valores e:\n%d",MULTIP);
  
  getch();	
  return 0;
}
