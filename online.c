#include<stdio.h>
int main()
{
    int p;
    float a,b=0.0,c,d;
    //a is purchace amount
    //b is discount rate
    //c is discount amount
    //d is final amount
    //p is premium member
    printf("the discount calculater \n");
    
    printf("enter the purchace amount \n");
    scanf("%f",&a);

    if(a >=5000)
    {
        printf("you are elgible for discount\n");
        printf("are you premium member or not\nif yes enter 1\nif not enter 0");
        scanf("%d",&p);
        
        if(p==1)
        {
            printf("your discount is 20 persent\n");
            b =0.20;
        }
        else
        {
            printf("your discount is 10 persent\n");
            b =0.10;
        }

    }
    else
    {
        printf("you are not elgible for discount\n");
        b =0.0;
    }
c=a*b;
d=a-b;
printf("%f if your final amount\n",d);
return 0;    
}