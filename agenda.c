

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Contato{
  char nome[100];
  int  telefone;
};

int main(){
  struct Contato *agenda;
  int cap; 
  int n;  
  int opc; 
  int i;
  FILE *fp;

  fp = fopen("agenda.dat","r");

  if(fp==NULL){
    n = 0;    
    cap = 20; 

    agenda = (struct Contato *)malloc(sizeof(struct Contato)*cap);
  }
  else{ 
    fread(&n, sizeof(int), 1, fp);
    
    cap = n*2; 

    agenda = (struct Contato *)malloc(sizeof(struct Contato)*cap);

    fread(agenda, sizeof(struct Contato), n, fp);

    fclose(fp);
  }
  
  do{
    printf("*** Menu ***\n");
    printf("1) Cadastrar contato.\n");
    printf("2) Exibir contatos.\n");
    printf("3) Apagar.\n");
    printf("4) Sair.\n");
    scanf("%d",&opc);

    if(opc==1){

      if(n==cap){
	     cap *= 2;
         agenda = realloc(agenda, sizeof(struct Contato)*cap);
      }
      printf("Digite o nome: ");
      scanf(" %[^\n]",agenda[n].nome);
      printf("Digite o telefone: ");
      scanf("%d",&agenda[n].telefone);
      n++;
    }
    else if(opc==2){
   
      for(i=0; i<n; i++){
	    printf("*** Contato %d ***\n",i+1);
        printf("Nome: %s\n",agenda[i].nome);
	    printf("Telefone: %d\n",agenda[i].telefone);
      }
    }
    else if(opc==3){

      char nome[100];
      int j;
      scanf("%s",&nome);
      for(i=0; i<n; i++){
             if (strcmp(agenda[i].nome, nome)==0){
             	for(j=i+1; j<n; j++){
                         strcpy(agenda[j-1].nome,agenda[j].nome);
                         agenda[j-1].telefone=agenda[j].telefone;
                 }
               n--;
               i=n;
              }
      }
    }

  }while(opc!=4); 

  if(n>0){
 
    fp = fopen("agenda.dat","w");

    fwrite(&n, sizeof(int), 1, fp);
    
    fwrite(agenda, sizeof(struct Contato), n, fp);
    
    fclose(fp);
  }

  free(agenda);
  
  return 0;
}
