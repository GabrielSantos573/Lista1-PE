#include <stdio.h>
 
void head(); 
float soma(float n1, float num2); 
char le_valida_operador();
 
int main() {
 
	float n1,n2,result;
	char op;
 
	head(); 
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	op = le_valida_operador();
 
	printf("N2: ");
	scanf("%f",&n2);
 
	printf("---------------\n");
 
	switch(op){
		case '+':
			result = soma(n1,n2);
			printf("RESULTADO:   %.1f\n",result); 
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
 
	}
 
	return 0;
}
 

void head(){
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");	
}

float soma(float n1, float num2){
	float resultado;
	resultado = n1 + num2;
	return resultado;
}
 
char le_valida_operador(){
	char operador;
	int cont=0;
	do{
		if(cont!=0){
			printf("-------\nERRO\n-------\n");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
 
	return operador;
}
