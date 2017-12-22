#include <stdio.h>
#define NUMBER_OF_columS 4
#define NUMBER_OF_COLUMNS 3
void main ()
{
    int colum,col,sum;
    int matrix[NUMBER_OF_columS][NUMBER_OF_COLUMNS];

    printf("enter value of matrix:: \n");
    for (colum=0; colum<NUMBER_OF_columS; colum++)
    {
        for (col=0;col<NUMBER_OF_COLUMNS;col++)
        {
            scanf("%d", & matrix[colum][col]);
        }
    }
    printf("\n\n");
    printf("matrix is:\n\n");
    for(colum=0;colum<NUMBER_OF_columS;colum++)
    {
        for(col=0;col<NUMBER_OF_COLUMNS;col++)
        {
            printf("%d",matrix[colum][col]);
            printf("\t");
        }
        printf("\n\n");
    }

}