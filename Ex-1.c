//Nome: Gabriel Oliveira Santos
//Matr�cula: UC21100452

#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
printf("-----------SISTEMAS ELEITORAL-----------\n");
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	
	if (idade == 82)
		printf("Ganha pr�mio 2!!!");
		else
			if (idade == 41)
				printf("Ganha pr�mio 1!!!");
			else	
				if (idade >= 65)
					printf ("Voto opcional");
				else
					if (idade >= 18)
						printf("Voto obrigat�rio");
						if (idade == 17)
							printf ("Voto opcional");
						else
							if(idade == 16)
								printf ("Voto opcional");
							else
								if(idade <=15)
									printf ("N�o vota");
								else
									if (idade <= 0)
										printf ("N�o nasceu");
									else;
										
	return 0;				
}
