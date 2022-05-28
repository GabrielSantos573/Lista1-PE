#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char nome[45];
	int i=0, tamanho=0, espaco_id=0, l=0, r=0; 
	
	printf("Digite seu nome: ");
	scanf("%[^\n]s", &nome);
	
	tamanho=strlen(nome);
	
	for(i=0; i<tamanho; i++){
		if(nome[i]==' '){
			espaco_id = i;
		}
	}
	for(i=espaco_id+1; i<tamanho; i++){
		printf("%c", toupper(nome[i]));
	}
	
	printf(",");
	
	for(i = 0; i < tamanho; i++){
		if(l==0)r=nome[i];
			l++;
		if(nome[i]==' '){
			l=0;
			printf("%c. ", toupper (r));
		}
	}
	
	return 0;
}
