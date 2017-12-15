#include<stdio.h>
struct customers{
char name[30];
int credit_card_account;
int credit_amount;
int password;
char email[50];
};

int main()
{
   int a,b,c=0,i,shoping,price,total_price=0,present_credit_amount,shoping_item,customer_amount,credit_card_account,password;
   struct customers s[3];
   printf("Enter Total Customer Amount");
   scanf("%d",&customer_amount);

   for(i=0; i<customer_amount; i++)
   {
       printf("\nFor New Customer Registation: \nEnter Customer Name And Email\n");
       scanf("%s",&s[i].name);
       scanf("%s",&s[i].email);

       printf("Enter Customer Credit card account_no Total Credit Card Take Amount And password\n");
       scanf("%d",&s[i].credit_card_account);
       scanf("%d",&s[i].credit_amount);
       scanf("%d",&s[i].password);
   }


   FILE *p;
   p=fopen("Customer_details.txt","w");//open a text file for keep customer details in write mode
   for(i=0; i<customer_amount; i++)
   {
       fprintf(p,"%s\n",s[i].name);
       fprintf(p,"%s\n",s[i].email);
       fprintf(p,"%d\n",s[i].credit_card_account);
       fprintf(p,"%d\n",s[i].credit_amount);
       fprintf(p,"%d\n",s[i].password);
   }

   FILE *q;
   q=fopen("Customer_details.txt","r");//Now open customer details text file for read
   for(i=0; i<customer_amount; i++)
   {
       fscanf(q,"%s",&s[i].name);
       fscanf(q,"%s",&s[i].email);
       fscanf(q,"%d",&s[i].credit_card_account);
       fscanf(q,"%d",&s[i].credit_amount);
       fscanf(q,"%d",&s[i].password);
   }

       printf("\n\n\n\n\nFor customer Shoping:\nCustomer credit_card_account And password\n");
       scanf("%d%d",&credit_card_account,&password);

       for(i=0; i<customer_amount; i++)
       {
           if(credit_card_account==s[i].credit_card_account && password==s[i].password)
           {
               c=1;
               b=i;
           }
           else
           {
                printf("Sorry Your Credit Card account Are wrong Please Enter valid Account thank You\n");
           }
       }


        if(c==1)
           {
               printf("\n\nShoping item Amount\n");
               scanf("%d",&shoping_item);
               for(a=0; a<shoping_item; a++)
               {
                   printf("%d Shoping item price\n",a+1);
                   scanf("%d",&price);
                   total_price=total_price+price;
               }
               present_credit_amount=s[b].credit_amount-total_price;

               if(present_credit_amount>=0)
               {
                   printf("Present Customer Details:\n    name: %6s\n    email: %6s\n    credit_card_account: %6d\n    previous_credit_amount: %6d\n    present_credit_amount: %6d\nThank You You successfully Buy This Item\n",s[b].name,s[b].email,s[b].credit_card_account,s[b].credit_amount,present_credit_amount);
               }else{
                   printf("Sorry You Can not Buy this Your Present Due amount: %d pleaser clear Your Due first\n",present_credit_amount);
               }
           }


}
