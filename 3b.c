#include <stdio.h>
#define BDAY 1
int main()
{
    int arr[20];
    arr[0]=-1;
    arr[1]=BDAY;
    for(int i=2;i<20;i++)
    {
        arr[i]=(arr[i-1]+1)*(arr[i-1]+1);
        arr[i]=arr[i]%(97+arr[i-2]);
    }
    for(int i=0;i<16;i++)
        printf("%d\t", arr[i]);
    printf("\n" );
    return 0;
}
