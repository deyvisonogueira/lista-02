/* 32 Fa�a um programa que leia duas matrizes N X N de mesma ordem com valores reais. Ofere�a ao usu�rio um menu de op��es: (a) somar as duas matrizes (b) subtrair a primeira matriz da segunda (c) adicionar uma constante as duas matrizes (d) imprimir as matrizes
Nas duas primeiras op��es uma terceira matriz deve ser criada. Na terceira op��o o valor da constante deve ser lido e o resultado da adi��o da constante deve ser armazenado na pr�pria matriz*/
#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,m,l,c;
  char opcao[1];

	printf("\n Digite o n�mero de linhas:\n");
	scanf("%d",&n);
	printf("\n Digite o n�mero de colunas :\n");
	scanf("%d",&m);
	
  float matriz[n][m];
  float matriz2[n][m];

	printf("\n Valores da matriz 1:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz1[%d][%d]=",l,c);
			scanf("%f",&matriz[l][c]);
			
		}
	}
	
	printf("\n A matriz 1 digitada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%2.f  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n Valores da matriz 2:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz[%d][%d]=",l,c);
			scanf("%2.f",&matriz2[l][c]);
			
		}
	}
	
	printf("\n A matriz 2 digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%2.f  ",matriz2[l][c]);
		}
		printf("\n \n");
	}
	


  printf("\n Qual oper��o voc� deseja fazer?\n");
	printf("a)Somar as duas matrizes\n b) Subtrair a primeira matriz da segunda\n c) Adicionar uma constante as duas matrizes\n d) Imprimir as matrizes.\n\n");

  scanf("%s",&opcao[0]);

 
  switch(opcao[0]){
    case 'a':
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		printf("%2.f  ",matriz2[l][c]+matriz[l][c]);
	      }
	      	printf("\n");
	    }

        printf("\n");
        break;
    case 'b':
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		printf("%2,f  ",matriz[l][c]-matriz2[l][c]);
	      }
	      	printf("\n");
	    }

      printf("\n");
      break;
    case 'c':
    printf("\n Digite uma constante:\n");
    float constante;
    scanf("%f",&constante);
      for(l=0;l<n;l++){
	    	for(c=0;c<m;c++){
	      		matriz[l][c]=matriz[l][c]+constante;
            matriz2[l][c]=matriz2[l][c]+constante;
	      }
	      	printf("\n");
	    }

      printf("\n\n Matriz 1:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%2.f  ",matriz[l][c]);
        }
        printf("\n");
      }
      printf("\n\n Matriz 2:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%2.f  ",matriz2[l][c]);
        }
        printf("\n");
      }

      printf("\n");
      break;
    case 'd':
      printf("\n\n Matriz 1:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%2.f  ",matriz[l][c]);
        }
        printf("\n");
      }
      printf("\n\nMatriz 2:\n\n");
      for(l=0;l<n;l++){
        for(c=0;c<m;c++){
          printf("%2.f  ",matriz2[l][c]);
        }
        printf("\n");
      }
    break;

  }

    return 0;
}
