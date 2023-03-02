#include<stdio.h>
int main(void)
{
    float marks,tot_marks=0;
    char name [50];
    int num;
    printf("enter your mark");
    printf("enter number of students: ");
    scanf("%d",&num);
    printf("you entered %d marks n",num);
    if(num>=80)
    {
        printf("you got grade 1 n,distinction");
    }
    else if(num>=60)
    {
        printf("you got grade 3 n,credit");
    }
    else if(num>=40)
    {
        printf("you got grade 5 n,pass");
    }
    else if(num<40)
    {
        printf("you got grade 7 n,fail ");
    }
    else
    {
        tot_marks+=marks;
    }
    printf("average marks=%.2ff\n",tot_marks/5);

}
