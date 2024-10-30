#include <stdio.h>

int main(){

int array, p, r, c, termo1;
	
	printf("Qual o tamanho do array: ");
	scanf("%d", &array);
	
	printf("Primeiro termo: ");
	scanf("%d", &p);

	printf("Razao: ");
	scanf("%d", &r);
	
	 termo1 = p;
	printf("Resultado da PA: ");
		
	for (c = 0; c < array; c++) {
		printf("%d " , termo1);
        termo1 += r;
        
}
	
	
 return 0;

}


