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

int cont = 0;
float num_in = 0, num = 0 ;


    while (cont < 10)
    {
         cont ++;
    scanf("%f", &num_in);
    num = num_in + num;

    }

    printf("%f", num);


return 0;
}

