//Q68: Delete an element from an array.

#include <stdio.h>
int main()
{
    int n,s,i,pos,found=0;
    printf("How many elements do you want in your array? : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be deleted: ");
    scanf("%d",&s);
    for (i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            found=1;
            pos=i;
            break;
        }
    }
    if (found==1)
    {
        for (i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }

        printf("The array after deleting %d is:\n",s);
        for (i =0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        printf("Element not found");}
    return 0;
}
