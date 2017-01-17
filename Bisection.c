#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(cos(x)-x*exp(x));
}
void bisection (float *x, float a, float b, int *itr)
{
    *x=(a+b)/2;
    ++(*itr);
    printf("\n Iteration No. %d : X=%4f",*itr,*x);
}
void main()
{
    int itr=0, maxmitr;
    float x,a,b,x1,err;
    printf("Enter the values of a,b, allowed error and maximum iterations\n ");
    scanf("%f %f %f %d", &a, &b, &err, &maxmitr);
    bisection(&x,a,b,&itr);
    do
    {
        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
        bisection(&x1,a,b,&itr);
        if(fabs(x1-x)<err)
        {
            printf("\nAfter %d iterations, root=%f \n",itr,x1);
            return 0;
        }
        x=x1;
    }
    while(itr<maxmitr);
    printf("\nThe solution does not converge");
    printf("\n\n\n\n\t\t\t\t\t\t\tManu Gupta\n\t\t\t\t\t\t\t15SCSE101609");
    return 1;
}
