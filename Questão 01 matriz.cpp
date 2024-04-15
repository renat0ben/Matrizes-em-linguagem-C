#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, i=1, mat [3][3];
	
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			printf("Digite o %iº valor: ", i++);
			scanf("%i", &mat[a][b]);
		}
	}
	printf("\nExibindo a Matriz na ordem inversa\n");
	
	for(a=2; a>=0; a--){
		for(b=2; b>=0; b--){
			printf("%i", mat[a][b]);}
			printf("\n");
}
return(0);
}
