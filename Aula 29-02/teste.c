#include <stdio.h>


         main(){
                /*Exer 01
int dia,mes,ano;
printf("Entre com o dia: ");
scanf("%i",&dia);
printf("Entre com o mes: ");
scanf("%i",&mes);
printf("Entre com o ano: ");
scanf("%i",&ano);
printf("%i/%i/%i",dia,mes,ano);
getche();

*/
/*Exer 02

float nota1, nota2, nota3;

printf("Primeira nota: ");
scanf("%f",&nota1);
printf("Segunda nota: ");
scanf("%f",&nota2);
printf("Terceira nota: ");
scanf("%f",&nota3);
printf("Resultado: %f", (nota1*0.25+nota2*0.25+nota3*0.5));
getche();

*/
/*Exer 03

float valor, resultado;

printf("Informe o valor: ");
scanf("%f",&valor);
printf("Inteiro: %i", (int) valor);
printf("\nDecimal: %f",(valor -(int) valor));
getche();

*/

int tempo;

printf("Informe o tempo a ser convertido: ");
scanf("%i",&tempo);
printf("\nTempo: %d:%d:%d", (int)(tempo/3600),(int) (tempo%3600),tempo%60);
getche();
}




