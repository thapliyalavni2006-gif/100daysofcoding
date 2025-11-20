//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
	int a[n];
    printf("Enter %d elements(one missing):\n",n);

    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
	}
    int totalsum=n*(n+1)/2;
    int actualsum=0;
    for (int i=0;i<n;i++) {
        actualsum+=a[i];
    }

    int missing=totalsum-actualsum;
    printf("Missing number: %d\n",missing);
  return 0;
}
