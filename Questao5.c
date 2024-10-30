#include <stdio.h>


int mcd(int a, int b) {
    if (b == 0) 
        return a;
        
    return mcd(b, a % b); 
}

int main(){
	int n1, n2;
	
	printf("Digite dois numeros inteiro: ");
	scanf("%d %d", &n1, &n2);
	
	
	int resultado = mcd(n1, n2);
	
	printf("O mcd de %d e %d : %d", n1, n2, resultado ); 
	
	return 0;
}
