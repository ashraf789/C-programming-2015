
#include <stdio.h>
struct students
{
char Name[20];
   int Math;
   int English;
   int Bangla;
   int Avarage;
};
main ()
{

    int Result;
    int Avarage;
    int i;
    struct students s[4];
              /*take input and store in array*/
     for (i = 0; i <= 1; i++)
        {
        printf("Insert Name of Students: ");
        scanf("%s",&s[i].Name);
        printf("Insert marks of Subject:\n");
        scanf("%d",&s[i].Math);
        scanf("%d",&s[i].English);
        scanf("%d",&s[i].Bangla);

}


/*open file as structure*/
 FILE *fptr;
fptr=fopen("student.txt","w");
 FILE *p;
p=fopen("student.txt","r");

for (i = 0; i <= 1; i++)
    {

     /*write each record from array*/
fprintf(fptr,"Name     Math English Bangla Avarage Result\n");
fprintf(fptr,"%s ",s[i].Name);
      fprintf(fptr,"%8d ",s[i].Math);
      fprintf(fptr,"%8d",s[i].English);
      fprintf(fptr,"%8d",s[i].Bangla);
      Avarage=(s[i].Math+s[i].English+s[i].Bangla)/3;
      fprintf(fptr,"%8d\n",Avarage);


fscanf(p,"Name     Math English Bangla Avarage Result\n");
fscanf(p,"%s",&s[i].Name);
      fscanf(p,"%d",&s[i].Math);
      fscanf(p,"%d",&s[i].English);
      fscanf(p,"%d",&s[i].Bangla);
      fscanf(p,"%d",&Avarage);






        printf("%s",s[i].Name);
        printf("%8d",s[i].Math);
        printf("%8d",s[i].English);
        printf("%8d",s[i].Bangla);
        Avarage=(s[i].Math+s[i].English+s[i].Bangla)/3;

        if(Avarage >= 80 && Avarage<=100)
        {
            printf("%8d   A+\n",Avarage,Result);
        }
        else if(Avarage >= 75 && Avarage<=79)
        {
            printf("%8d   A\n",Avarage,Result);
        }
        else if(Avarage >= 70 && Avarage<=74)
        {
            printf("%8d   A-\n",Avarage,Result);
        }
        else if(Avarage >= 65 && Avarage<=69)
        {
            printf("%8d   B+\n",Avarage,Result);
        }
        else if(Avarage >= 60 && Avarage<=64)
        {
            printf("%8d   B\n",Avarage,Result);
        }
        else if(Avarage >= 55 && Avarage<=59)
        {
            printf("%8d   B-\n",Avarage,Result);
        }
        else if(Avarage >= 50 && Avarage<=54)
        {
            printf("%8d   C\n",Avarage,Result);
        }
        else if(Avarage >= 45 && Avarage<=49)
        {
            printf("%8d   D\n",Avarage,Result);
        }
        else if(Avarage >= 0 && Avarage<=44)
        {
            printf("%8d   F\n",Avarage,Result);
        }

    }
     fclose(fptr);
     fclose(p);
}
