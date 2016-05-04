#include <stdio.h>
int fun1(int a,int b ,int c,int d,int e,int f){
	int sum = a + b + c + d + e + f;
	return sum;
}
int main(int argc,char *argv[]){
	int i;

	for ( i = 0; i< argc ; i++){
	    printf("iput argc = %d name = %s\n",i,argv[i]);
	}

	fun1(0x12,0x34,0x56,0x78,0x10,0x90);

	return 0xabcd;
}
