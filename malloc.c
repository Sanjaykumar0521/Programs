#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,*p,i,s=0,*pt;
    printf("enter size of array ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    p=ptr;
    printf("enter elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        s=s+*ptr;
        ptr++;
    }
   printf("elements of array are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
    free(ptr);
    printf("realloc\n");
     s=0;
    pt=(int *)realloc(ptr,2*n*sizeof(int));
    if(pt==NULL)
    {
        printf("memory is not allocated\n");
    }
     p=pt;
    printf("enter elements of array ");
    for(i=0;i<2*n;i++)
    {
        scanf("%d",pt);
        s=s+*pt;
        pt++;
    }
   printf("elements of array are ");
    for(i=0;i<2*n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}
