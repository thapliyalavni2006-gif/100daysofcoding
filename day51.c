//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main()
{
int n,i,target,res;
 printf("How many elements do you want in your sorted array?");
 scanf("%d",&n);
 printf("Enter sorted array: ");
 int nums[n];
 for(i=0;i<n;i++)
 {
	scanf("%d",&nums[i]);
 }
 printf("which element do you want to search for?");
 scanf("%d",&target);
    int first=-1,last=-1,start=0,end=n-1;
	//if not present default value of first and last are -1
    while (start<=end) {
        int mid=(start+end)/2;
        if(nums[mid]==target) {
            first=mid;
            end=mid-1;  //search on left side of mid element
        } else if(nums[mid]<target) {
            start=mid+1;
        } else{
            end=mid-1;
        }
    }
    start=0,end=n-1;
    while (start<=end) {
    int mid=(start+end)/2;
        if (nums[mid]==target) {
            last=mid;
            start=mid+1; //search on right half of mid element
        } else if (nums[mid]<target) {
            start=mid+1;
        } else {
            end=mid-1;
        }}

 if (first==-1)
        printf("-1,-1\n");
    else
        printf("First occurrence is at =%d\nLast occurrence is at %d\n", first, last);

    return 0;
}








