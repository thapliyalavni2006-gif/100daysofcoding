//Q135: Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum alpha {
    A=10,
	B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
};
int main()
{
	enum alpha letter;
	for(int i=A;i<=Z;i++)
	{
		printf("%c=%d\n",'A'+(i-A),i);
	}
return 0;
}