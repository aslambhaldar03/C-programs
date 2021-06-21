//Swapping of Two numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Temp = 0;

    printf("\n Enter two numbers for swapping =>");
    scanf("%d%d",&No1,&No2);

    printf("\n Values of given number before swap =>");
    printf("\n No1=%d, No2=%d",No1,No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n Values of given number after swap =>");
    printf("\n No1=%d, No2=%d",No1,No2);

    printf("\n\n Thanks !");


    getch();
    return 0;
}
