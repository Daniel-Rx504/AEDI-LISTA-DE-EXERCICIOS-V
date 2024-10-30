#include <stdio.h>

int pa (int termo, int r, int n){
	
	 if (n <= 0) {
        return;
    }
    
     printf("%d ", termo); 
    pa(termo + r, r, n - 1);
}




int main(){

int array, p, r, c, termo;
	
	printf("Qual o tamanho do array: ");
	scanf("%d", &array);
	
	printf("Primeiro termo: ");
	scanf("%d", &p);

	printf("Razao: ");
	scanf("%d", &r);
	
	 termo = p;
	printf("Resultado da PA: ");
	
		
	for (c = 0; c < array; c++) {
		printf("%d " , termo);
        termo += r;
        
}
	
	
 return 0;

}


