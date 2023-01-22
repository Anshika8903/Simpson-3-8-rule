#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) (1/(1+x*x))
void main()
{
    float l,u,h,I=0,k;
    int i,n;
    printf("\nenter the value of lower limit: ");
    scanf("%f",&l);
    printf("\nenter the value of lower limit: ");
    scanf("%f",&u);
    printf("\nenter the value of subinterval: ");
    scanf("%d",&n);
    h=(u-l)/n;
    I=F(l)+F(u);
    for(i=1;i<n;i++)
    {
        k=l+i*h;
        if(i%3==0)
        {
            I=I+2*F(k);
        }
        else
        {
            I=I+3*F(k);
        }
    }
    I=(((3*h)/8)*(I));
    printf("\n\nINTEGRAL=%f",I);
}
