#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,t,count=0;
    int * a = (int *)malloc(sizeof(int)*n);//Instead of assigning random big value we can allocate memory dynamically
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    t=a[n-1];
    for(i=0;i<n;i++)
    {
        if(t==a[i])
        count+=1;
    }
    printf("%d",count);
    free(a);//to avoid memory leak
    return 0;

}
