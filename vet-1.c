#include<stdio.h>
#include<stdlib.h>

int main(){

	 int vet[7];
	 int valor=0;

	 for(int i=0; i < 7 ; i++)
	 {
	 	printf("Digite um valor :");
	 	scanf("%d",&vet[i]);
	 }

	 for(int i=0; i < 1;i++)
	 {  

	 	printf("Digite um valor :");
	 	scanf("%d",&valor);

         if(vet[i] == valor )
         {
         	printf("Esse valor faz parte do vetor..\n");
         } 

         else{
         	printf("Esse valor não faz parte do vetor!\n");
         }

	 	
	 }
    
      


system("pause");
}