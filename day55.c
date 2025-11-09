//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main()
{
    int n,i,j;
    printf("How many elements do you want in your array? ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 int maj=-1;  //majority element if found

    for (i=0;i<n;i++)
    {
        int count=0;
        for (j=0;j<n;j++)
        {
            if (arr[i]==arr[j])    //count++ if element is repeated(to count frequency)
                count++;
        }        if (count>n/2)
        {
            maj=arr[i];
            break;
        }
    }
  if (maj!=-1)
        printf("Majority element is %d\n",maj);
    else
        printf("No majority element found\n");
  return 0;
}
