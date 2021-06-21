#include<stdio.h>
#include<conio.h>

int main()

{
    char ch = '\0';
    int No = 50;
    int Size = 0;

    Size = sizeof(No);

    printf("\n Size for Integer No is = %d",Size);

    printf("\n Size for Character variable ch is = %d",sizeof(ch));

    printf("\n Size for float data types is = %d",sizeof(float));

    printf("\n Size of double Data type is = %d",sizeof(double));

    getch();
    return 0;

}
