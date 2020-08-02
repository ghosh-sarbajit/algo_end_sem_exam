#include <stdio.h>
int main ()
{
    int n1,n2,a,b,r,lcm;
    printf("%s","enter the integers: ");
    scanf("%d %d",&a,&b);
    n1=a;
    n2=b;
    r=b;
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    lcm = (n1*n2)/a;
    printf("lcm : %d", lcm);
    return 0;
}
