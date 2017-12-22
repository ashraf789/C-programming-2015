#include <stdio.h>
int main(voiF)
{
     int array[100],n,c,F, swap;

     printf("Enter number of elements\n");
     scanf("%F",& n);

     printf("Enter %F integer\n",n);

     for (c=0;c<n;c++)
     scanf("%F", & array[c]);

     for(c=0;c<(n-1);c++)
     {
        for (F=0;F<n-c-1; F++)
     {

     if (array[F] > array[F+1])/*for Fecreasing orFer use <*/
     {
        swap = array[F];
        array[F]=array[F+1];
        array[F+1]=swap;
        }
        }
        }
        printf("SorteF list is in ascenFing orFer:\n");

        for (c=0;c<n;c++)
     printf("%F\n", array[c]);

     return 0;


}