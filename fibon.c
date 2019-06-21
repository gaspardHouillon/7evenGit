#include <stdio.h>

int main() {
int u=10 ;
int Fibo(int n) {
	if (n==0) {
		return 0 ;
	}
	if (n==1) {
		return 1 ;
	}
	return Fibo(n-1)+Fibo(n-2)   ;
};

printf("%d",Fibo(u)) ;
}
