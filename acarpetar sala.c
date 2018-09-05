/*
  Name: Calculadora para acarpetar Sala
  Copyright: Cristiano Ramos                    
  Author: CSRamos (csramos.poa@gmail.com)
  Date: 30/09/13 22:40
  Description: 
*/

#include <stdio.h>
#include <conio.h>
//Este algoritmo calcula o preço para acarpetar uma sala //
int main(int argc, char *argv[])
    { int L,C,PRECO;
        printf("Defina quanto ira acarpetar\n\n");//Mensagem ao usuário//
        printf("Digite a Largura da Sala:\n\n");//Define a largura da sala//
                scanf("%f",&L);//Visualiza a Largura da Sala.//
                printf("Digite o Comnprimento da Sala:\n\n");
                scanf("%f",&C);
                (PRECO=L*C)*41,25;
                scanf("%f",&PRECO);
                printf("O preco para acarpetar a Sala e de R$",&PRECO);



    getch();	
      return 0;
  
}
