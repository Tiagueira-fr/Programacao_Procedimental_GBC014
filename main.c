#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* exercicio 01
 printf("Primeiros 5 multiplos de 3\n");

    int mult, cont = 0;

    mult = 3;
        while (cont < 5)
        {

            printf("%d\n", mult);
            mult = mult + 3;
            cont ++;
        }

    */



    /*  exercicio 02
   printf("Loop 1 ate 100\n");
   int num;
   num = 1;


   for (num == 1; num <= 100; num ++ )
    {
        printf("%    d\n", num);
    }

    while (num <= 100)
        {
            printf("%d\n",num );
            num ++;
        }


    do  {
            printf ("%d\n", num);
            num ++;
        }
    while (num <= 100);
*/

    /*  exercicio 03
    int cont = 100;


    while (cont > 0){
        printf("%d\n", cont);
        cont --;
        system ("cls");

    }
    printf("0\n");
    printf("\n FIM \n ");

*/

 /*     exercicio 4

int num = 0;

for (num ==0;num <= 100000; num = num+1000 )
    {
        printf("%d\n",num );
    }
*/

/*      exercicio 5
int cont = 0;
float num_in = 0, num = 0 ;


    while (cont < 10)
    {
         cont ++;
    scanf("%f", &num_in);
    num = num_in + num;

    }

    printf("%f", num);
*/


/*      exercicio 6
int num_in, cont, media, soma;

cont = 0;
soma = 0;
media = 0;

while (cont!=10)
{
    printf("Insira o valor de soma para a media: ");
   scanf("%d", &num_in);
    soma = num_in + soma;
    cont ++;
}
media = soma / cont;
printf ("O valor da media é : %d ", media);
system("pause");
return 0;

*/


/*  	exercico 7
int num_in = 0, cont;
int media, soma = 0;

while (cont <10 ){
		printf("Insira o numero para calcular a media: ");
        scanf("%d", &num_in);
        if (num_in > 0 ){
        soma = num_in + soma;
        cont ++;
        }
    }
    media = soma / cont;
    printf("Sua media e igaual: %d", media);


return 0;
*/

/*      exercicio 8
int num_in;
int cont, min, max;
min = 0;
max = 0;


for (cont = 0 ; cont < 10 ; cont ++){
	printf ("Insira os numeros para saber o maior e menor numero para a lista de numeros :");
	scanf ("%d", &num_in);
	 if (num_in > max ){ max = num_in; }
     if (num_in < min){ min = num_in; }
		
}

printf("Seu teto e: %d \n Seu piso e : %d", max , min);
return 0 ;
system("pause");
*/


/*      exercicoo 10
int num_in, cont , soma;
soma = 0;

for (cont = 0 ; cont < 50 ; cont ++ ){
    printf("Insira o numero para a soma : ");
    scanf("%d", &num_in);
    if (num_in % 2 == 0 ){ soma = num_in + soma; }
}
printf ("A soma dos 50 primeiros numeros pares e : %d", soma);

return 0;
*/

/*      exercicio 11
int num_in, num_list;
num_list = 0;

printf("Insira o numero teto para a lista : ");
scanf("%d", &num_in);
system("clear");
do
{
    printf ("%d , ", num_list);
    num_list ++;
} while (num_list <=  num_in);

system("pause");
return 0 ;
*/


/*      exercico 12 - incompleto
int num_in, soma_out, div=0 ;

 scanf("%d", &num_in);

 while ( div )
 {
   
 }
*/



}

