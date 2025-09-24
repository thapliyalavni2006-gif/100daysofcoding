//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main()
{
    int n;
	printf("Enter the number ");
	scanf("%d",&n);
    int count[10]={0};  // to store frequency
    int dig,maxDigit=0,maxCount=0;
    // count frequency of each digit
    while (n> 0) {
        dig=n%10;
        count[dig]++;
        n=n/10;
    }
	 //  maximum frequency
    for (int i=0;i<10;i++) {
        if (count[i]>maxCount) {
            maxCount=count[i];
            maxDigit=i;
        }
    }
	printf("The digit that occurs most times is: %d \n",maxDigit);
	return 0;
}






