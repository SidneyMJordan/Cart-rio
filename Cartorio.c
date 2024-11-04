#include <stdio.h> //biblioteca de comunicação com o usuario.
#include <stdlib.h> //bilbioteca de alocação de espaço em memoria
#include <locale.h> // biblioteca de alocação de txto por região
#include <string.h> //biblioteca de String


int registrar(){
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o C.P.F:  ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel por copiar comandos de string
	
	FILE *file; //cria arquivo
	file = fopen(arquivo, "w"); //cria arquivo
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); // fecha a variavel
	
	file = fopen(arquivo, "a");
	fprintf(file,";");
	fclose(file);
	
	printf("Digite o nome para cadastro:  ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,";");
	fclose(file);
	
	printf("Digite o sobrenome para cadastro:  ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,";");
	fclose(file);
	
	printf("Digite o cargo para cadastro:  ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,".");
	fclose(file);
	
	system("pause");
}

int consultar(){
	
	printf("Você escolheu 'Consultar nomes'\n");
	system("pause");
}
int deletar(){
	
	printf("Você escolheu 'Deletar nomes'\n");
	system("pause");
	
}


int main()

{
	int opcao=0; //Definindo variaveis
	int x=1;
	
	for(x=1;x=1;)
	{
	
		system("cls");
	
		setlocale(LC_ALL,"portuguese"); // Definindo linguagem
	
	
		printf("\t###Cartório EBAC####\n\n"); //inicio menu
		printf("escolha uma das opções no menu:\n\n");
		printf("\t1 - Registrar nomes\n");	
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n\n"); 
		printf("opção: ");// fim menu
	
	scanf("%d", &opcao); // armazenando as escolhas
	
	system("cls");
	
	switch(opcao) // inicio da seleção
	{
		case 1:
			registrar();
			break;
			
		case 2:
			consultar();
			break;
			
		case 3:
			deletar();
			break;
			
		default:
			printf("Opção não disponível\n");
			system("pause");
			break;
	
	} // fim da seleção
	
	}
}
