/*24. Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal secund�ria. */
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,num_Aleatorio;

		printf("\n Digite o n�mero de linhas:\n");
    	scanf("%d",&n);
	    printf("\n Digite o n�mero de colunas:\n");
	    scanf("%d",&m);

	int matriz[n][m];
	
	printf("\n Gerando a matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      num_Aleatorio = rand() % 10;
			printf("%d ",num_Aleatorio);
			matriz[l][c]=num_Aleatorio;
		}
    printf("\n");
	}
	
	printf("\n A matriz gerada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
  printf("\n A diagonal Secundaria �:");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][m-c-1]);
      }
			
		}

	}
    return 0;
}
