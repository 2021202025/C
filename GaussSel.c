1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
#include<stdio.h>
#include<math.h>
#define X 2
main()
{
    float x[X][X+1],a[X], ae, max,t,s,e;
    int i,j,r,mxit;
    for(i=0;i<X;i++) a[i]=0;
    puts(" Eneter the elemrnts of augmented matrix rowwise\n");
    for(i=0;i<X;i++)
    {
    for(j=0;j<X+1;j++)
    {
    scanf("%f",&x[i][j]);
    }
    }
    printf(" Eneter the allowed error and maximum number of iteration: ");
    scanf("%f%d",&ae,&mxit);
    printf("Iteration\tx[1]\tx[2]\n");
    for(r=1;r<=mxit;r++)
    {
        max=0;
        for(i=0;i<X;i++)
        {
            s=0;
            for(j=0;j<X;j++)
            if(j!=i) s+=x[i][j]*a[j];
            t=(x[i][X]-s)/x[i][i];
            e=fabs(a[i]-t);
            a[i]=t;
        }
        printf(" %5d\t",r);
        for(i=0;i<X;i++)
        printf(" %9.4f\t",a[i]);
        printf("\n");
        if(max<ae)
        {
            printf(" Converses in %3d iteration\n", r);
            for(i=0;i<X;i++)
            printf("a[%3d]=%7.4f\n", i+1,a[i]);
            return 0;
        }

        }
    }
