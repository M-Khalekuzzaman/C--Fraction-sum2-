#include<stdio.h>
int main()
{
    int number;
    double j =1,sum =0,d;
    printf("Enter your number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i=i+2)
    {
        d =(i/j);
        sum = sum + d;
        j = j*2;

    }
    printf("Value of the series : %.2lf\n",sum);
    getch();
}
