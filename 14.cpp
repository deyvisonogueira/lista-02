/*14 . Durante uma corrida de autom�veis com N voltas de dura��o foram anotados para um piloto, na ordem, os
tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N voltas, sendo que os
tempos devem ser armazenados em um vetor e ap�s a entrada de todos os tempos de um piloto deve-se
apresentar o vetor juntamente com:
� melhor tempo;
� a volta em que o melhor tempo ocorreu;
� tempo m�dio das N voltas para cada piloto*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
float tmedio;
int tempo[10],mt=-1,st=0, melhorvolta,i;
for(i=0;i<10;i++)
printf("\ndigite o tempo obtido na %d volta em minutos: ",i);
scanf("%d",&tempo[i]);
if( tempo[i] > mt)
{
mt=tempo[i];
melhorvolta=i;
}
st=st+tempo[i];
tmedio=st/10;
printf("\no melhor tempo foi %d.\n ",mt);
printf("\na volta q ocorreu o melhor tempo foi %d volta.\n ",melhorvolta);
printf("\ntempo medio das 10 voltas: %f\n ",tmedio);
system("pause");

}
