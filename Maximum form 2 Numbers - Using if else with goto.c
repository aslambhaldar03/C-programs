#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;

    UP:
        printf("\n Enter 2 Integer Numbers : ");
        scanf("%d%d",&Num1,&Num2);

        if (Num1 == Num2)
        {
            printf("\n Both Numbers are Equal.");
            printf("\n=========================================********=========================");

            printf("\n\n For Comparison there should be 2 Different Numbers,");
            goto UP;
        }

        if (Num1 > Num2)
        {
            printf("\n Number %d is Maximum.",Num1);
        }
        else
        {
            printf("\n Number %d is Maximum.",Num2);
        }

        printf("\n\n Thanks !!!");

        getch();
        return 0;

}
