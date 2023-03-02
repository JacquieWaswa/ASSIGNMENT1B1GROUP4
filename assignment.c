#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, average;
    printf("\t Student name: ");
    printf("\t English subject marks: ");
    printf("\t Maths subject marks: ");
    printf("\t Science subject marks: ");
    printf("\t average marks;%d" ,average);
    for(i=0; i<3; i++);
    {
        scanf("%f",&mark);
        sum = sum+mark;
    }
     average= sum/3;
     getch();
     return 0;
}
