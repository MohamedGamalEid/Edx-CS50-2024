
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int _200LE=0,_100LE=0,_50LE=0,ammount=0,withdraw=0,c,p,_op,no_of_200,no_of_100,no_of_50;//c = customer  p = password _op=operator  balance=الرصيد
    while (1)
{
    printf ("welcome to Edx bank\n");
    printf ("for withdraw press 1\n");
    printf ("for deposit press 2\n");
    scanf ("%d",&_op);
if (_op==2)//if operator or owner
         {
             printf ("please enter your password  =  ");
scanf ("%d",&p);
        if (p==512)  // check password
                   { // calculating amount of deposting
                       printf ("please enter amount of 200LE =  ");
                       scanf ("%d",&_200LE);
                       printf ("please enter amount of 100LE =  ");
                       scanf ("%d",&_100LE);
                       printf ("please enter amount of 50LE  =  ");
                       scanf ("%d",&_50LE);
                       ammount+=(_200LE*200)+(_100LE*100)+(_50LE*50);
                       printf ("total avilable money in machine is  =  ");
                       printf ("%d\n",ammount);

                   }
        else//if incorrect password
             {
            printf ("please try again\n\n\n ");
             }
         }
else if (_op==1)   // if you are customer
{
    printf ("please enter your password  ");
    scanf ("%d",&p);
        if (p==513)
        {
            int rem_withdraw=0;
            printf ("available balance in machine is  = %d \n",ammount);
            printf ("please enter amount to withdraw ");
            scanf ("%d",&withdraw);
                                if (withdraw<=ammount)
                                {

            no_of_200=withdraw/200;        //calculating remaining

            rem_withdraw=withdraw%200;

            no_of_100=rem_withdraw/100;

            rem_withdraw=rem_withdraw%100;

            no_of_50=rem_withdraw/50;

            rem_withdraw=rem_withdraw%50;
            printf (" |200|   |100|   |50|\n");
            printf ("   %d      %d      %d\n",no_of_200,no_of_100,no_of_50);
            ammount=ammount-withdraw;  // remaining of balance
            printf ("available remains in machine is    %d\n",ammount);  // print
                                }
else
{
    printf ("not valid   \n\n please try again\n\n\n"); //for amount bigger than amount
}

        }
        else
        {

            printf ("please try again\n\n");
    }
}

       printf ("if you want to exit press > 0 \n");

        printf ("if you want to continue press > 1 \n");
        int exit;
        scanf ("%d",&exit);
        if (exit==0)
            break;
}
}
