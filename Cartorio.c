#include <stdio.h> //biblioteca de comunica��o com o usuario.
#include <stdlib.h> //bilbioteca de aloca��o de espa�o em memoria
#include <locale.h> // biblioteca de aloca��o de txto por regi�o
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
	
	printf("Voc� escolheu 'Consultar nomes'\n");
	system("pause");
}
int deletar(){
	
	printf("Voc� escolheu 'Deletar nomes'\n");
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
	
	
		printf("\t###Cart�rio EBAC####\n\n"); //inicio menu
		printf("escolha uma das op��es no menu:\n\n");
		printf("\t1 - Registrar nomes\n");	
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n\n"); 
		printf("op��o: ");// fim menu
	
	scanf("%d", &opcao); // armazenando as escolhas
	
	system("cls");
	
	switch(opcao) // inicio da sele��o
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
			printf("Op��o n�o dispon�vel\n");
			system("pause");
			break;
	
	} // fim da sele��o
	
	}
}
