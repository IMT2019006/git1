#include<stdio.h>
int main()
{
    int i,j,t,a[100000],count=0,n;
    scanf("%d",&n);
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
    return 0;

}
