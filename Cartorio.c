#include <stdio.h> //biblioteca de comunicação com o usuario.
#include <stdlib.h> //bilbioteca de alocação de espaço em memoria
#include <locale.h> // biblioteca de alocação de txto por região
#include <string.h> //biblioteca de String


int registrar(){ //função responsavel por cadastrar usuario
	
	//inicio criação de variavel/ string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variavel
	
	printf("Digite o C.P.F:  ");//coletando informação do usuario
	scanf("%s", cpf);//%s refere-se a string
	
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
	
	setlocale(LC_ALL, "portuguese"); //Define linguagem

		char cpf[40];
		char conteudo[200];
		
	printf("Digite o CPF:   ");
	scanf("%s", cpf);
	
		FILE *file;
		file = fopen(cpf,"r");
		
	if(file == NULL){
		
		printf("CPF não localizado.\n");
		system("pause");
		
	}
	
	while(fgets(conteudo, 200, file) != NULL){
		
		printf("\nEssas são as informações do usuário:  ");
		printf("%s", conteudo);
		printf("\n\n");
		system("pause");
	}
}
int deletar(){
	
		char cpf[40];
	
	printf("Digite o CPF a ser deletado:  \n");
	scanf("%s",cpf);
	
		FILE *file;
		file =fopen(cpf,"r");
	
	if(file ==NULL){		
		printf("Usuario não localizado. \n");
		system("pause");		
	}
	
	
	system("pause");
	
}


int main()

{
	int opcao=0; //Definindo variaveis
	int x=1;
	char senhadigitada[]="a";
	int comparacao;
	
		printf("Login de administrador!\n\nDigite a sua senha:");
		scanf("%s",senhadigitada);
		
		comparacao = strcmp(senhadigitada, "admin");
		
	if(comparacao == 0)	
	{
		
		
		
	for(x=1;x=1;)
	{
		
	
		system("cls");// responsavel por limpar a tela
	
		setlocale(LC_ALL,"portuguese"); // Definindo linguagem
	
	//inicio menu
		printf("\t###Cartório EBAC####\n\n"); 
		printf("escolha uma das opções no menu:\n\n");
		printf("\t1 - Registrar nomes\n");	
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n"); 
		printf("\t4 - Sair do sistema\n\n\n");
		printf("opção: ");
	// fim menu
	
	scanf("%d", &opcao); // armazenando as escolhas
	
	system("cls");
	
	switch(opcao) // inicio da seleção
	{
		case 1:
			registrar();// chamada de funções
			break;
			
		case 2:
			consultar();
			break;
			
		case 3:
			deletar();
			break;
			
		case 4:
			printf("Obrigado por ultilizar o sistema!\n");
			return 0;
			break;
			
		default:
			printf("Opção não disponível\n");
			system("pause");
			break;
	
	} // fim da seleção
	
	}
}
else
printf("Senha incorreta");
}
