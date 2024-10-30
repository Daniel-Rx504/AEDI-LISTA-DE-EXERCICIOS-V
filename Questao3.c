#include <stdio.h>

int fibonacci(int n){

	if ( n <= 1)
	
	return n;
	
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
	int n, i;
	
	printf("Digite o numero de termos da seguencia de fibonacci: ");
	scanf("%d" , &n);
	
	 printf("Sequencia de Fibonacci ate %d termos: ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", fibonacci(i));
}

	return 0;
}

