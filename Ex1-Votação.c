//Nome: Gabriel Oliveira Santos
//Matrícula: UC21100452

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
printf("-----------SISTEMAS ELEITORAL-----------\n");
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	
	if (idade == 82)
		printf("Ganha premio 2!!!");
		else
			if (idade == 41)
				printf("Ganha premio 1!!!");
			else	
				if (idade >= 65)
					printf ("Voto opcional");
				else
					if (idade >= 18)
						printf("Voto obrigatorio");
						if (idade == 17)
							printf ("Voto opcional");
						else
							if(idade == 16)
								printf ("Voto opcional");
							else
								if(idade <=15)
									printf ("Não vota");
								else
									if (idade <= 0)
										printf ("Não nasceu");
									else;
										
	return 0;				
}
