#include<stdio.h>
#include<stdlib.h>

int main(){

	float vet[5];
	float maior,menor=10000;

    for(int i=0;i < 5;i++)
    {
    	printf("Informe um valor :");
    	scanf("%f",&vet[i]);

    	if(vet[i] >= maior)
    	{
    		maior=vet[i];
    	}

    	if(vet[i] <= menor)
    	{
    		menor=vet[i];
    	}

    }

    printf("O maior valor do vetor : %.1f\n",maior);
    printf("Menor valor armazenado no vetor:%.1f\n\n",menor);


system("pause");

}