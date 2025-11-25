//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
enum gender
	{
      MALE,
	  FEMALE,
	  OTHER
	};

int main() {
    enum gender g;
    int c;
    printf("Enter choice (0-2): ");
    scanf("%d",&c);
g =(enum gender)c;  //typecast
switch(c){
    case MALE:
    printf("Male");
    break;
    case FEMALE:
    printf("Female");
    break;
    case OTHER:
    printf("Other gender");
    break;
    default:
    printf("Invalid choice");
    break;

}
	return 0;
}