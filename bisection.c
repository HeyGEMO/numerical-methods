#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (x*x*x-4*x-9);
}
int main()
{
    float x0,x1,xr,er=0.0001;
    printf("enter the initail guesses x1 and x2:");
    scanf("%f%f",&x0,&x1);
    if((f(x0) * f(x1))>0)
    {
        printf("Our initial guess is wrong !!");
    }
    else
    {
        printf("x0\tx1\tf(x0)\tf(x1)\txr\tf(xr)\n");
    }
    do
    {
        xr=(x0+x1)/2;
        printf("%f\t%f\t%f\t%f\t%f\t%f\n",x0,x1,f(x0),f(x1),xr,f(xr));
        if(f(x0)*f(xr)>0)
        {
            x0=xr;
        }
        else
        {
            x1=xr;
        }
    } while (fabs(f(xr))>er);
    printf("Root of the given quation is:%f",xr);
 return 0;   
}