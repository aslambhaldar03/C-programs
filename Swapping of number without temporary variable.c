//Swapping of 2 inputed integer numbers without temp variable

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter two numbers for swapping => ");
    scanf("%d%d",&No1,&No2);

    printf("\n Values of given number before swap => ");
    printf("\n No1=%d, No2=%d",No1, No2);

    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;

    printf("\n Values of Given Numbers After Swap => ");
    printf("\n No = %d, No2 = %d.", No1, No2);

    printf("\n\n Thanks !!!");

    getch();
    return 0;

}
