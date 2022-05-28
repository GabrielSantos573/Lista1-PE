#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, g ,op, opBoleto, data, qntVeic;
	
	struct DataNas{
		int dia, mes, ano;
	};
	
	struct DataNas dataNas;
	
	struct Endereco{
		char Ender[200], Bairro[200], Est[45], Cidade[45],Comp[200];
		int Num, Cep;
	};
	
	struct Endereco endereco;
	
	struct Veiculo{
		char  placa[10], modelo[45], cor[45];
		int anoVeic;
	};  
	
	struct Veiculo veiculo[3];
	
	struct Pessoa{
		struct Endereco endereco;
		struct Veiculo veiculo[3];
		struct DataNas dataNas;
		char Rs[200], Nome[200], Email[45], CPF[12], CNPJ[45], AssResp[200];
		int DDD, Tel, TelCom, InscE, InscM, CNAE,TelResp, TelComResp;
	};
	
	struct Pessoa pessoa[TAM];
	
	for(i = 0; i <= TAM; i++){

		printf("Digite a Razão Social:");
		scanf("%[^\n]s", &pessoa[i].Rs);
		fflush(stdin);
			
		printf("Digite o Nome Completo:");
		scanf("%[^\n]s", &pessoa[i].Nome);
		fflush(stdin);
		
		printf("Digite o endereço:");
		scanf("%[^\n]s", &pessoa[i].endereco.Ender);
		fflush(stdin);
		
		printf("Digite o Número:");
		scanf("%d", &pessoa[i].endereco.Num);
		fflush(stdin);
		
		printf("Digite o Bairro:");
		scanf("%[^\n]s", &pessoa[i].endereco.Bairro);
		fflush(stdin);
		
		printf("Digite o CEP:");
		scanf("%d", &pessoa[i].endereco.Cep);
		fflush(stdin);
		
		printf("Digite o Estado:");
		scanf("%[^\n]s", &pessoa[i].endereco.Est);
		fflush(stdin);
		
		printf("Digite a Cidade:");
		scanf("%[^\n]s", &pessoa[i].endereco.Cidade);
		fflush(stdin);
		
		printf("Digite o Complemento:");
		scanf("%[^\n]s", &pessoa[i].endereco.Comp);
		fflush(stdin);
		
		printf("Digite o DDD");
		scanf("%d", &pessoa[i].DDD);
		fflush(stdin);
		
		printf("Digite o Telefone Celular:");
		scanf("%d", &pessoa[i].Tel);
		fflush(stdin);
		
		printf("Digite o Telefone Residencial ou Comercial:");
		scanf("%d", &pessoa[i].TelCom);
		fflush(stdin);
		
		printf("Digite seu CPF:");
		scanf("%d", &pessoa[i].CPF);
		fflush(stdin);
		
		printf("Você é uma pessoa Jurídica? Digite (s) - sim ou (n) - não:");
		scanf("%[^\n]s", &op);
		fflush(stdin);
		
		switch(op){
			case 's':
				printf("Digite seu CNPJ:");
				scanf("%d", &pessoa[i].CNPJ);
				fflush(stdin);
				printf("Digite seu Insc. Estadual:");
				scanf("%d", &pessoa[i].InscE);
				fflush(stdin);
				printf("Digite seu Insc. Municipal:");
				scanf("%d", &pessoa[i].InscM);
				fflush(stdin);
				printf("Digite seu CNAE:");
				scanf("%d", &pessoa[i].CNAE);
				fflush(stdin);
				
				printf("Digite sua Data de Nascimento\n");
				printf("Dia:");
				scanf("%d", &dataNas.dia);
				printf("Mês:");
				scanf("%d", &dataNas.mes);
				printf("Ano:");
				scanf("%d", &dataNas.ano);
				fflush(stdin);
				
				printf("Digite seu E-mail:");
				scanf("%[^\n]s", &pessoa[i].Email);
				fflush(stdin);
				
				printf("Deseja receber os próximos boletos por E-mail? (s) - sim ou (n) - não");
				scanf("%[^\n]s", &opBoleto);
				fflush(stdin);
				
				printf("Digite o Contato do Responsável:");
				scanf("%d", &pessoa[i].TelResp);
				fflush(stdin);
				
				printf("Digite o Telefone Comercial:");
				scanf("%d", &pessoa[i].TelComResp);
				fflush(stdin);
				
				printf("Digite a Data de hoje:");
				scanf("%d", &data);
				fflush(stdin);
				
				printf("Assinatura do Responsável:");
				scanf("%[^\n]s", &pessoa[i].AssResp);
				fflush(stdin);	
						
				printf("Quantos veículos possui? min - (0) e max - (3):");
				scanf("%d", &qntVeic);
				fflush(stdin);
				
				for(g = 0; g <= qntVeic; g++){
					printf("Digite a placa do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].placa);
					fflush(stdin);
						
					printf("Digite o modelo do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].modelo);
					fflush(stdin);
						
					printf("Digite o ano do veículo:");
					scanf("%d", &pessoa[i].veiculo[g].anoVeic);
					fflush(stdin);
						
					printf("Digite a cor do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].cor);
					fflush(stdin);
				}
			break;
				
			
			case 'n':
				printf("Digite sua Data de Nascimento\n");
				printf("Dia:");
				scanf("%d", &dataNas.dia);
				printf("Mês:");
				scanf("%d", &dataNas.mes);
				printf("Ano:");
				scanf("%d", &dataNas.ano);
				fflush(stdin);
				
				printf("Digite seu E-mail:");
				scanf("%[^\n]s", &pessoa[i].Email);
				fflush(stdin);
				
				printf("Deseja receber os próximos boletos por E-mail? (s) - sim ou (n) - não");
				scanf("%[^\n]s", &opBoleto);
				fflush(stdin);
				
				printf("Digite o Contato do Responsável:");
				scanf("%d", &pessoa[i].TelResp);
				fflush(stdin);
				
				printf("Digite o Telefone Comercial:");
				scanf("%d", &pessoa[i].TelComResp);
				fflush(stdin);
				
				printf("Digite a Data de hoje:");
				scanf("%d", &data);
				fflush(stdin);
				
				printf("Assinatura do Responsável:");
				scanf("%[^\n]s", &pessoa[i].AssResp);
				fflush(stdin);	
						
				printf("Quantos veículos possui? min - (0) e max - (3):");
				scanf("%d", &qntVeic);
				fflush(stdin);
				
				for(g = 0; g == qntVeic; g++){
					printf("Digite a placa do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].placa);
					fflush(stdin);
						
					printf("Digite o modelo do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].modelo);
					fflush(stdin);
						
					printf("Digite o ano do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].anoVeic);
					fflush(stdin);
						
					printf("Digite a cor do veículo:");
					scanf("%[^\n]s", &pessoa[i].veiculo[g].cor);
					fflush(stdin);
				}
				break;
				
			default: printf("Opção inválida.");
		}
		
		system("cls");
				
		printf("Razão Social %s\nNome Completo:%s", pessoa[i].Nome, pessoa[i].Nome);
		
		printf("\nEndereço:");
		printf("%s\n", pessoa[i].endereco.Ender);
		
		printf("Número: %d \t\t Complemento: %s \t\t \t  Bairro:%s\n", pessoa[i].endereco.Num, pessoa[i].endereco.Comp, pessoa[i].endereco.Bairro);
		
		printf("CEP: %d \t\t Estado: %s \t\t Cidade:%s\n ", pessoa[i].endereco.Cep, pessoa[i].endereco.Est, pessoa[i].endereco.Cidade);
		
		printf("DDD %d \t\t Telefone Residencial ou Comercial: %d \t\t DDD:%D \t\t Telefone Celular:%d", pessoa[i].DDD, pessoa[i].TelCom, pessoa[i].DDD, pessoa[i].Tel);
		
		printf("CPF:%d \t \t \t CNPJ:%d", pessoa[i].CPF, pessoa[i].CNPJ);
		
		printf("Insc. Estadual:%d \t \t \t \t Insc. Municipal:%d", pessoa[i].InscE, pessoa[i].InscM);
	
		printf("CNAE:%d \t \t \t Data de Nasc.:%d/%d/%d \t \t \t ", pessoa[i].CNAE, dataNas.dia, dataNas.mes, dataNas.dia);
		
		printf("E-mail:%\n", pessoa[i].Email);
		
		printf("Contato do Responsável:%d \t \t \t Telefone Comercial:%d", pessoa[i].TelResp, pessoa[i].TelComResp);
		
		printf("Data:%d\t \t \t \t Assinatura do Responsável:%s\n",data, pessoa[i].AssResp);
	}
return 0;
}
