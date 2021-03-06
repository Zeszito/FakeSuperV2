#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <string.h>

typedef struct
{
	float cotaEquipa1V;
	float cotaEquipa2V;
	float cotaEquipaE;
	float probVitoriaEq1;
	float probVitoriaEq2;
	char nomeDeEquipa1[30];
	char nomeDeEquipa2[30];
	char ficheiro1[35];
	char ficheiro2[35];

}ProbEquipas;

void GeraCabecalho();
void printaTopo();
void printaMeio();
void printaParteDeBaixo();
void printaMeioNoLines();
void GeraMenu();
void VerSaldo();
float AdicionarSaldo(float SaldoIntroduzido);
void PrintInfosEquipa(char nometxt[], char nomeEquipa[]);
void Listar();
void Gravar();
void jogar(char nomeDeEquipa1[], char nomeDeEquipa2[], float ValorApostadoIndividual, int ResultadoEscolhido, float cotaEquipa1V, float cotaEquipa2V, float cotaEmpate, float probVitoriaEq1, float probVitoriaEq2);
void Repor();
ProbEquipas GeraEstatistica(int equipa1, int equipa2);
float RetornarSaldo();

int main(void) {
	int Equipa1, Equipa2, Equipa3, Equipa4, Equipa5, Equipa6, Equipa7, Equipa8, Equipa9, Equipa10, Equipa11, Equipa12, Equipa13, Equipa14, Equipa15, Equipa16;
	int JogosEscolhidos[8];
	int ResultadoEscolhido[8];
	int ValorApostado, ValorApostadoIndividual, SaldoDisponivel;
	int VezesQueAposta, i;
	int sair = 0;
	char chose, modalidade;
	srand(time(NULL));
	Repor();
	GeraCabecalho();
	GeraMenu();
	ProbEquipas tentativa;
	ProbEquipas jogo1, jogo2;
	tentativa = GeraEstatistica(3,1);//Vamos printar cota
	//printf("%f-%f-%f-%f-%f\n", tentativa.cotaEquipa1V, tentativa.cotaEquipa2V, tentativa.cotaEquipaE, tentativa.probVitoriaEq1, tentativa.probVitoriaEq2);
	//printf("%s-%s\n", tentativa.nomeDeEquipa1, tentativa.ficheiro1);
	//printf("%s-%s\n", tentativa.nomeDeEquipa2, tentativa.ficheiro2);
	//printf("Equipa 1 V.S. Equipa 2\n");
	//Equipa1 = rand() % 3 + 1;
	//Equipa2 = rand() % 3 + 4;
	jogo1 = GeraEstatistica(Equipa1, Equipa2);
	//printf("\n1.%s V.S. %s\n", jogo1.nomeDeEquipa1, jogo1.nomeDeEquipa2);
	//printf("\%s Cota: %f\t%s Cota: %f\tEmpate:%f\n",jogo1.nomeDeEquipa1, jogo1.cotaEquipa1V,jogo1.nomeDeEquipa2, jogo1.cotaEquipa2V, jogo1.cotaEquipaE);
	
	//Equipa3 = rand() % 3 + 7;
	//Equipa4 = rand() % 3 + 10;
	//jogo2 = GeraEstatistica(Equipa3, Equipa4);
	//printf("2.%s V.S. %s\n", jogo2.nomeDeEquipa1, jogo2.nomeDeEquipa2);

	//Equipa5 = rand() % 3 + 13;
	//Equipa6 = rand() % 3 + 16;
	//jogo2 = GeraEstatistica(Equipa5, Equipa6);
	//printf("3.%s V.S. %s\n", jogo3.nomeDeEquipa1, jogo3.nomeDeEquipa2);

	//Equipa7 = rand() % 3 + 7;
	//Equipa8 = rand() % 3 + 10;
	//jogo2 = GeraEstatistica(Equipa3, Equipa4);
	//printf("2.%s V.S. %s\n", jogo2.nomeDeEquipa1, jogo2.nomeDeEquipa2);

	////Faz esta merda!Otario!
	//printf("Quantas apostas deseja fazer?"); scanf("%d", VezesQueAposta);
	//do {
	//	printf("Quanto deseja apostar por jogo?"); scanf("%d", ValorApostado);
	//} while (ValorApostado > 100 || ValorApostado < 0);
	//ValorApostadoIndividual = ValorApostado;
	//ValorApostado = ValorApostado*VezesQueAposta;
	/*SaldoDisponivel = RetornarSaldo();
	if (ValorApostado > SaldoDisponivel) {
		printf("O seu saldo � insuficiente/nclick enter para voltar ao menu");
	}
	else {*/
		//
		//for (i = 0; i < VezesQueAposta; i++)
		//{	
		//	printf("Qual jogo?"); scanf("%d", JogosEscolhidos[i]);
		//	printf("Qual o resultado que deseja?\n1.Para vitoria da equipa 1.\n2.Para vitoria da equipa 2.\n3.Para empate."); scanf("&d", ResultadoEscolhido[i]);
		//}

		//

		//for (i = 0; i < VezesQueAposta; i++)
		//{
		//	switch (JogosEscolhidos[i])
		//	{
		//	case '1':
		//		Jogar(jogo1.nomeDeEquipa1, jogo1.nomeDeEquipa2, jogo1.cotaEquipa1V, jogo1.cotaEquipa2V, jogo1.cotaEquipaE, jogo1.ficheiro1, jogo1.ficheiro2, jogo1.probVitoriaEq1, jogo1.probVitoriaEq2,ResultadoEscolhido[i],ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '2':
		//		Jogar(jogo2.nomeDeEquipa1, jogo2.nomeDeEquipa2, jogo2.cotaEquipa1V, jogo2.cotaEquipa2V, jogo2.cotaEquipaE, jogo2.ficheiro1, jogo2.ficheiro2, jogo2.probVitoriaEq1, jogo2.probVitoriaEq2,ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '3':
		//		Jogar(jogo3.nomeDeEquipa1, jogo3.nomeDeEquipa2, jogo3.cotaEquipa1V, jogo3.cotaEquipa2V, jogo3.cotaEquipaE, jogo3.ficheiro1, jogo3.ficheiro2, jogo3.probVitoriaEq1, jogo3.probVitoriaEq2, ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '4':
		//		Jogar(jogo4.nomeDeEquipa1, jogo4.nomeDeEquipa2, jogo4.cotaEquipa1V, jogo4.cotaEquipa2V, jogo4.cotaEquipaE, jogo4.ficheiro1, jogo4.ficheiro2, jogo4.probVitoriaEq1, jogo4.probVitoriaEq2, ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '5':
		//		Jogar(jogo5.nomeDeEquipa1, jogo5.nomeDeEquipa2, jogo5.cotaEquipa1V, jogo5.cotaEquipa2V, jogo5.cotaEquipaE, jogo5.ficheiro1, jogo5.ficheiro2, jogo5.probVitoriaEq1, jogo5.probVitoriaEq2, ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '6':
		//		Jogar(jogo6.nomeDeEquipa1, jogo6.nomeDeEquipa2, jogo6.cotaEquipa1V, jogo6.cotaEquipa2V, jogo6.cotaEquipaE, jogo6.ficheiro1, jogo6.ficheiro2, jogo6.probVitoriaEq1, jogo6.probVitoriaEq2, ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '7':
		//		Jogar(jogo7.nomeDeEquipa1, jogo7.nomeDeEquipa2, jogo7.cotaEquipa1V, jogo7.cotaEquipa2V, jogo7.cotaEquipaE, jogo7.ficheiro1, jogo7.ficheiro2, jogo7.probVitoriaEq1, jogo7.probVitoriaEq2, ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
		//	case '8':
		//		Jogar(jogo8.nomeDeEquipa1, jogo8.nomeDeEquipa2, jogo8.cotaEquipa1V, jogo8.cotaEquipa2V, jogo8.cotaEquipaE, jogo8.ficheiro1, jogo8.ficheiro2, jogo8.probVitoriaEq1, jogo8.probVitoriaEq2, ResultadoEscolhido[i], ValorApostado,ValorApostadoIndividual);
		//		break;
			//}	
	//}


	//Recpecao do User
	while (sair!=1)
	{
		GeraCabecalho();
		GeraMenu();
		chose = getchar();
		while (!(chose == '1' || chose == '2' || chose == '3' || chose == '4' || chose == '5' || chose == '6'))
		{
			printf("escolha incorrecta, escolha novamente\n");

			do {
				chose = getchar();
			} while (chose < '1' || chose > '6');
		}

		switch (chose)
		{
		case '1':
			VerSaldo();
			break;
		case '2':
			jogar("porto", "benfica", 2,1,2.1,2.3,3.1,3,0.5,07);
			jogar("Rio Ave", "benfica", 2, 1, 6.1, 4.3, 3.1, 3, 0.5, 07);
			//void jogar(char nomeDeEquipa1[], char nomeDeEquipa2[], float ValorApostadoIndividual, int ResultadoEscolhido, float cotaEquipa1V, float cotaEquipa2V, float cotaEmpate, float probVitoriaEq1, float probVitoriaEq2);
			break;
		case '3':
			Listar();
			break;
		case '4':

			printf("Excellent!\n");
			break;
		case '5':
			Gravar();
			printf("Excellent!\n");
			break;
		case '6':
			Repor();
			sair = 1;			
			break;
		default:
			sair = 0;
			break;
		}
		//system("cls");

	}
	

	return 0;
}

//Funcoes Menu
void GeraCabecalho() {
	system("cls");
	printf("						                     ___\ \n");
	printf("						 o__        o__     |   |\\\n");
	printf("						/|          /\\      |   |X\\\n");
	printf("						/ > o        <\\     |   |XX\\\n");
	printf("		 ______    _        _____  _                         _ \n");
	printf("		|  ____|  | |      |  __ \\| |                       | |\n");
	printf("		| |__ __ _| | _____| |__) | | __ _  ___ __ _ _ __ __| |\n");
	printf("		|  __/ _` | |/ / _ \\  ___/| |/ _` |/ __/ _` | '__/ _` |\n");
	printf("		| | | (_| |   <  __/ |    | | (_| | (_| (_| | | | (_| |\n");
	printf("		|_|  \\__,_|_|\\_\\___|_|    |_|\\__,_|\\___\\__,_|_|  \\__,_|\n");
	printf("								By:Andre, Miguel e Moises\n");
	printf("\n");
	printf("\n");
}
void printaTopo() {
	int i;
	printf("%c", 201);// cantoSupEsquerdo = 201;
	for (i = 0; i < 35; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 187);
	//segunda linha de cima
	printf("%c", 201);// cantoSupEsquerdo = 201;
	for (i = 0; i < 12; i++) { printf("%c", 205); }//linharecta = 221;  //12 segundo bloco 
	printf("%c", 187);
	printf("\n");
}
void printaMeio() {
	int i;
	printf("%c", 204);// uniao direita
	for (i = 0; i < 35; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 185); //uniao esquerda
					   //segunda linha de cima
	printf("%c", 204);// uniao direita
	for (i = 0; i < 12; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 185);// uniao esuqerda
	printf("\n");
}
void printaParteDeBaixo() {
	int i;
	printf("		");
	printf("%c", 200);// cantoInfEsquerdo ;
	for (i = 0; i < 35; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 188);
	//segunda linha de cima
	printf("%c", 200);// cantoinfEsquerdo ;
	for (i = 0; i < 12; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 188);
	printf("\n");
}
void printaMeioNoLines() {
	int i;
	printf("		");
	printf("%c", 186);// barra continua
	for (i = 0; i < 35; i++) { printf("%c", 32); }//Espa�o
	printf("%c", 186); // barra continua
	printf("%c", 186);// barra continua
	for (i = 0; i < 12; i++) { printf("%c", 32); }//Espa�o
	printf("%c", 186);// barra continua
	printf("\n");
}
void GeraMenu() {
	//Desenhar tabela//	
	printf("		");
	printaTopo();
	int i = 0;
	//Recheio
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("MENU DE JOGO");
	for (i = 0; i < 11; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("   Opcoes   ");
	printf("%c", 186);
	printf("\n");
	//escolhaS;
	printf("		");
	printaMeio();
	//Recheio1
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Ver Saldo");
	for (i = 0; i < 14; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     1      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio2
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Jogar");
	for (i = 0; i < 18; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     2      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio3
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Listar");
	for (i = 0; i < 17; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     3      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio4
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Alterar definicoes");
	for (i = 0; i < 5; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     4      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio5
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Gravar");
	for (i = 0; i < 17; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     5      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio6
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Sair");
	for (i = 0; i < 19; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     6      ");
	printf("%c", 186);
	printf("\n");
	printaParteDeBaixo();
}
//Fim Funcoes Menu
//Fun�oes Saldo
void VerSaldo() {
	float SaldoIntroduzido, ImprimirSaldo;
	char escolha[4];
	int i;
	printf("Deseja adicionar saldo a sua conta?");
	scanf("%s", escolha);
	for (i = 0; i < 4; i++) {
		escolha[i] = toupper(escolha[i]);
	}
	if (strcmp(escolha, "SIM") == 0)
	{
		printf("Quanto deseja introduzir?\n");
		scanf("%f", &SaldoIntroduzido);
		if (SaldoIntroduzido < 0)
		{
			printf("N�o � poss�vel intoduzir valores negativos.\n");
			VerSaldo();
		}
		ImprimirSaldo = AdicionarSaldo(SaldoIntroduzido);
		printf("O seu saldo e de %.2f.\n", ImprimirSaldo);

	}
	else if (strcmp(escolha, "NAO") == 0) { GeraCabecalho(); GeraMenu();}
	else
	{
		printf("Essa Resposta esta errada :-). Por favor responda sim ou nao.\n");
		VerSaldo();
	}
}
float AdicionarSaldo(float SaldoIntroduzido)
{
	int i = 0, x;
	char strsaldo[10];
	float SaldoFinal, Saldo;
	FILE *FicheiroSaldo;
	FicheiroSaldo = fopen("AlterarSaldo.txt", "r");
	if (FicheiroSaldo == NULL)
	{
		FicheiroSaldo = fopen("AlterarSaldo.txt", "w");
		fclose(FicheiroSaldo);
	}
	else {
		while ((x = getc(FicheiroSaldo)) != EOF)
		{
			strsaldo[i] = x;
			i++;
		}
		Saldo = atof(strsaldo);
	}
	SaldoFinal = Saldo + SaldoIntroduzido;
	fclose(FicheiroSaldo);
	FicheiroSaldo = fopen("AlterarSaldo.txt", "w");
	fprintf(FicheiroSaldo, "%.2f", SaldoFinal);
	fclose(FicheiroSaldo);
	return SaldoFinal;
}
float RetornarSaldo()
{
	FILE*FicheiroSaldo;
	char strsaldo[10];
	int i, x;
	float SaldoRetornado;
	FicheiroSaldo = fopen("AlterarSaldo.txt", "r");
	for (i = 0; ((x = getc(FicheiroSaldo)) != EOF); i++)
	{
		strsaldo[i] = x;
	}
	SaldoRetornado = atof(strsaldo);
	fclose(FicheiroSaldo);

	return SaldoRetornado;
}
//Guardar e repor defeni��o de saldo
void Gravar()
{
	FILE *fd;
	FILE *fd2;
	int copiador;
	/* Abre o ficheiro �lista.txt� em modo de escrita (�w�)*/
	fd = fopen("AlterarSaldo.txt", "r");
	/* Verifica se houve erro na abertura do ficheiro */
	if (fd == NULL)
	{
		printf("\nERRO!");
	}
	else
	{
		fd2 = fopen("SaldoGuardado.txt", "w");
		if (fd2 == NULL)
		{
			printf("\nERRO!");
		}
		else
		{
			while ((copiador = fgetc(fd)) != EOF) {
				fputc(copiador, fd2);
			}


			fclose(fd2);
			fclose(fd);
		}
	}
	printf("O seu Saldo foi gravado");
}
void Repor() {
	FILE *fd;
	FILE *fd2;
	int copiador;
	/* Abre o ficheiro �lista.txt� em modo de escrita (�w�)*/
	fd = fopen("SaldoGuardado.txt", "r");
	/* Verifica se houve erro na abertura do ficheiro */
	if (fd == NULL)
	{
		printf("\nERRO!");
	}
	else
	{
		fd2 = fopen("AlterarSaldo.txt", "w");
		if (fd2 == NULL)
		{
			printf("\nERRO!");
		}
		else
		{
			while ((copiador = fgetc(fd)) != EOF) {
				fputc(copiador, fd2);
			}


			fclose(fd2);
			fclose(fd);
		}
	}
}
//Fim saldo

//Leitura de equipas
void PrintInfosEquipa(char nometxt[], char nomeEquipa[]) {
	int i = 0, j = 0, l = 0, p = 0, h = 0, x, y, z, w, r;
	char lista[100], jogos[100] = { 0 }, vitorias[100] = { 0 }, empates[100] = { 0 }, derrotas[100] = { 0 };
	float Njogos = 0, Nvitorias = 0, Nempates = 0, Nderrotas = 0;
	FILE *FicheiroDadosEquipas;
	FicheiroDadosEquipas = fopen(nometxt, "r");
	if (FicheiroDadosEquipas == NULL)
	{
		FicheiroDadosEquipas = fopen(nometxt, "w");
		printf("Introduza os dados da equipa sobre a qual pretende fazer a aposta: ");
		scanf("%s", lista);
		fprintf(FicheiroDadosEquipas, "%s", lista);
		fclose(FicheiroDadosEquipas);
		
	}
	else
	{
		while ((x = getc(FicheiroDadosEquipas)) != EOF)
		{
			lista[i] = x;

			if (lista[i] == 'J')
			{
				while ((y = getc(FicheiroDadosEquipas)) != '_')
				{
					jogos[j] = y;
					j++;
				}
			}
			if (lista[i] == 'V')
			{
				while ((z = getc(FicheiroDadosEquipas)) != '_')
				{
					vitorias[l] = z;
					l++;
				}
			}
			if (lista[i] == 'E')
			{
				while ((w = getc(FicheiroDadosEquipas)) != '_')
				{
					empates[p] = w;
					p++;
				}
			}
			if (lista[i] == 'D')
			{
				while ((r = getc(FicheiroDadosEquipas)) != '_')
				{
					derrotas[h] = r;
					h++;
				}
			}
			i++;
		}

	}


	Njogos = atof(jogos);
	Nvitorias = atof(vitorias);
	Nempates = atof(empates);
	Nderrotas = atof(derrotas);

	printf("O %s efectuou %0.2f jogos, dos quais %0.2f sao vitorias, %0.2f sao empates e %0.2f sao derrotas. \n", nomeEquipa, Njogos, Nvitorias, Nempates, Nderrotas);
	fclose(FicheiroDadosEquipas);
}
void Listar() {
	{
		int Nmodalidade;
		printf("\nFutebol - 1\nFutsal - 2\nBasquetbol - 3\nFutebolAmericano - 4\n");
		printf("Escolha modalidade em que pretende fazer a aposta ");
		scanf("%d", &Nmodalidade);

		switch (Nmodalidade)
		{
		case 1://Futebol
		{
			int NequipaFutebol;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nSporting - 1 \tReal Madrid - 5 \tBayern - 9 \tUnited - 13 \tJuventus - 17 \nBenfica - 2 \tBarcelona - 6 \tDortmund - 10 \tCity - 14 \tNapoles - 18  \nPorto - 3 \tAtletico - 7 \tWolfsburg - 11  \tArsenal - 15 \tInter - 19\nBraga - 4 \tSevilha - 8 \tColon- 12 \tChelsea - 16 \tMilan - 20\n");
			scanf("%d", &NequipaFutebol);
			switch (NequipaFutebol)
			{
			case 1://Sporting Clube de Portugal
			{
				PrintInfosEquipa("football/Sporting.txt", "Sporting");
				break;
			}
			case 2://Benfica
			{
				PrintInfosEquipa("football/Benfica.txt", "Benfica");
				break;
			}
			case 3://Porto
			{
				PrintInfosEquipa("football/Porto.txt", "Porto");
				break;
			}
			case 4://Braga
			{
				PrintInfosEquipa("football/Braga.txt", "Braga");
				break;
			}
			case 5://Real Madrid FC
			{
				PrintInfosEquipa("football/RealMadrid.txt", "Real Madrid");
				break;
			}
			case 6://Barcelona FC
			{
				PrintInfosEquipa("football/Bercelona.txt", "Barcelona FC");
				break;
			}
			case 7://Atletico de Madrid
			{
				PrintInfosEquipa("football/AtleticoMadrid.txt", "Atletico Madrid");
				break;
			}
			case 8://Sevilha FC
			{
				PrintInfosEquipa("football/Sevilha.txt", "Sevilha");
				break;
			}
			case 9://Bayern Munchen
			{
				PrintInfosEquipa("football/Bayern.txt", "Bayern");
				break;
			}
			case 10://Dortmund
			{
				PrintInfosEquipa("football/Dortmund.txt", "Dortmund");
				break;
			}
			case 11://Wolfsburg
			{
				PrintInfosEquipa("football/Wolfsburg.txt", "Wolfsburg");
				break;
			}
			case 12://FC Koln
			{
				PrintInfosEquipa("football/Koln.txt", "Koln");
				break;
			}
			case 13://Manchester United
			{
				PrintInfosEquipa("football/ManchesterUnited.txt", "Manchester United");
				break;
			}
			case 14://Manchester City
			{
				PrintInfosEquipa("football/ManchesterCity.txt", "Manchester City");
				break;
			}
			case 15://Arsenal FC
			{
				PrintInfosEquipa("football/Arsenal.txt", "Arsenal");
				break;
			}
			case 16://Chelsea FC
			{
				PrintInfosEquipa("football/Chelsea.txt", "Chelsea");
				break;
			}
			case 17://Juventus FC
			{
				PrintInfosEquipa("football/Juventus.txt", "Juventus");
				break;
			}
			case 18://SSC Napoli
			{
				PrintInfosEquipa("football/Napoli.txt", "SSC Napoli");
				break;
			}
			case 19://Internaziole
			{
				PrintInfosEquipa("football/Inter.txt", "FC Internazionale Milano");
				break;
			}
			case 20://AC MIlan
			{
				PrintInfosEquipa("football/Milan.txt", "AC Milan");
				break;
			}
			case 21:
			{
				PrintInfosEquipa("football/PSG.txt", "PSG");
				break;
			case 22:
			{
				PrintInfosEquipa("football/Monaco.txt", "MonacoFC");
				break;
			}
			case 23:
			{
				PrintInfosEquipa("football/Nice.txt", "Nice");
				break;
			}
			case 24:
			{
				PrintInfosEquipa("football/Lyon.txt", "Lyon");
				break;
			}
			}
			default:
			{
				break;
			}
			}
			break;
		}
		case 2://Futsal
		{
			int NequipaFutsal;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nSporting - 1 Inter Movistar - 2 FK Dynamo Moskva - 3\nBenfica - 4 Barcelona - 5 Kairat Alma-Ata - 6\n");
			scanf("%d", &NequipaFutsal);
			break;
		}
		case 3://Basquetbol
		{
			int NequipaBasquetbol;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nMiami Heat - 1 LA Lakers- 2 Detroit Pistons - 3\nChicago Bulls - 4 Boston Celtics - 5 San Antonio Spurs - 6\n ");
			scanf("%d", &NequipaBasquetbol);
			break;
		}
		case 4://Futebol Americano
		{
			int NequipaFamericano;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nNew England Patriots - 1 New York Giants - 2 Cleveland Browns - 3\nChicago Bears - 4 Denver Broncos - 5  Seattle Seahawks- 6\n");
			scanf("%d", &NequipaFamericano);
			break;
		}
		default:
			printf("ERRO!\nNumero selecionado nao e valido!\nVolte a introduzir um numero valido: ");
			scanf("%d", &Nmodalidade);

			break;
		}

	}
}

//Cotas e probabilidades

ProbEquipas GeraEstatistica(int equipa1, int equipa2) {
	ProbEquipas ajugar;
	char nometxt[30];
	char nomeEquipa1[20];
	char nometxt2[30];
	char nomeEquipa2[20];
	ajugar.cotaEquipa1V;
	ajugar.cotaEquipa2V;
	ajugar.cotaEquipaE;
	ajugar.probVitoriaEq1;
	ajugar.probVitoriaEq2;

	switch (equipa1)
	{
		case 1://Sporting Clube de Portugal
	{
		strcpy(nometxt, "football/Sporting.txt");
		strcpy(nomeEquipa1, "Sporting CP");
		break;
	}
		case 2://Benfica
		{
			strcpy(nometxt, "football/Benfica.txt");
			strcpy(nomeEquipa1, "SL Benfica");
			break;
		}
		case 3://Porto
		{
			strcpy(nometxt, "football/Porto.txt");
			strcpy(nomeEquipa1, "FC Porto");
			break;
		}
		case 4://Braga
		{
			strcpy(nometxt, "football/Braga.txt");
			strcpy(nomeEquipa1, "SC Braga");
			break;
		}
		case 5://Real Madrid FC
		{
			strcpy(nometxt, "football/RealMadrid.txt");
			strcpy(nomeEquipa1, "Real Madrid FC");
			break;
		}
		case 6://Barcelona FC
		{
			strcpy(nometxt, "football/Barcelona.txt");
			strcpy(nomeEquipa1, "Barcelona FC");
			break;
		}
		case 7://Atletico de Madrid
		{
			strcpy(nometxt, "football/AtleticoMadrid.txt");
			strcpy(nomeEquipa1, "Atletico Madrid");
			break;
		}
		case 8://Sevilha FC
		{
			strcpy(nometxt, "football/Sevilha.txt");
			strcpy(nomeEquipa1, "Sevilha FC");
			break;
		}
		case 9://Bayern Munchen
		{
			strcpy(nometxt, "football/Bayern.txt");
			strcpy(nomeEquipa1, "Bayern Muchen");
			break;
		}
		case 10://Dortmund
		{
			strcpy(nometxt, "football/Dortmund.txt");
			strcpy(nomeEquipa1, "Dortmund");
			break;
		}
		case 11://Wolfsburg
		{
			strcpy(nometxt, "football/Wolfsburg.txt");
			strcpy(nomeEquipa1, "Wolfsburg");
			break;
		}
		case 12://FC Koln
		{
			strcpy(nometxt, "football/Koln.txt");
			strcpy(nomeEquipa1, "Koln");
			break;
		}
		case 13://Manchester United
		{
			strcpy(nometxt, "football/ManchesterUnited.txt");
			strcpy(nomeEquipa1, "Manchester United");
			break;
		}
		case 14://Manchester City
		{
			strcpy(nometxt, "football/ManchesterCity.txt");
			strcpy(nomeEquipa1, "Manchester City");
			break;
		}
		case 15://Arsenal FC
		{
			strcpy(nometxt, "football/Arsenal.txt");
			strcpy(nomeEquipa1, "Arsenal");
			break;
		}
		case 16://Chelsea FC
		{
			strcpy(nometxt, "football/ChelseaFC.txt");
			strcpy(nomeEquipa1, "Chelsea FC");
			break;
		}
		case 17://Juventus FC
		{
			strcpy(nometxt, "football/Juventus.txt");
			strcpy(nomeEquipa1, "Juventus FC");
			break;
		}
		case 18://SSC Napoli
		{
			strcpy(nometxt, "football/Napoli.txt");
			strcpy(nomeEquipa1, "SSC Napoli");
			break;
		}
		case 19://Internaziole
		{
			strcpy(nometxt, "football/Inter.txt");
			strcpy(nomeEquipa1, "Internaziole FC");
			break;
		}
		case 20://AC MIlan
		{
			strcpy(nometxt, "football/Milan.txt");
			strcpy(nomeEquipa1, "AC Milan");
			break;
		}
		case 21://PSG
		{
			strcpy(nometxt, "football/PSG.txt");
			strcpy(nomeEquipa1, "PSG");
			break;
		}
		case 22://MonacoFC
		{
			strcpy(nometxt, "football/Monaco.txt");
			strcpy(nomeEquipa1, "MonacoFC");
			break;
		}
		case 23://Nice
		{
			strcpy(nometxt, "football/Nce.txt");
			strcpy(nomeEquipa1, "Nice");
			break;
		}
		case 24://Lyon
		{
			strcpy(nometxt, "football/Lyon.txt");
			strcpy(nomeEquipa1, "Lyon");
			break;
		}
	default:
	{
		break;
	}
	}

	int i = 0, j = 0, l = 0, p = 0, h = 0, x, y, z, w, r;
	char lista[100], jogos[100] = { 0 }, vitorias[100] = { 0 }, empates[100] = { 0 }, derrotas[100] = { 0 };
	float Njogos = 0, Nvitorias = 0, Nempates = 0, Nderrotas = 0;
	FILE *FicheiroDadosEquipas;
	FicheiroDadosEquipas = fopen(nometxt, "r");
	if (FicheiroDadosEquipas == NULL)
	{
		FicheiroDadosEquipas = fopen(nometxt, "w");
		printf("Introduza os dados da equipa sobre a qual pretende fazer a aposta: ");
		scanf("%s", lista);
		fprintf(FicheiroDadosEquipas, "%s", lista);
		fclose(FicheiroDadosEquipas);
	}
	else
	{
		while ((x = getc(FicheiroDadosEquipas)) != EOF)
		{
			lista[i] = x;

			if (lista[i] == 'J')
			{
				while ((y = getc(FicheiroDadosEquipas)) != '_')
				{
					jogos[j] = y;
					j++;
				}
			}
			if (lista[i] == 'V')
			{
				while ((z = getc(FicheiroDadosEquipas)) != '_')
				{
					vitorias[l] = z;
					l++;
				}
			}
			if (lista[i] == 'E')
			{
				while ((w = getc(FicheiroDadosEquipas)) != '_')
				{
					empates[p] = w;
					p++;
				}
			}
			if (lista[i] == 'D')
			{
				while ((r = getc(FicheiroDadosEquipas)) != '_')
				{
					derrotas[h] = r;
					h++;
				}
			}
			i++;
		}

	}


	Njogos = atof(jogos);
	Nvitorias = atof(vitorias);
	Nempates = atof(empates);
	Nderrotas = atof(derrotas);
	fclose(FicheiroDadosEquipas);


	float  probVequipa1;
	probVequipa1 = ((float)Nvitorias / (float)Njogos); //Ai este cast
	float  probE1;
	probE1 = ((float)Nempates / (float)Njogos);
	float  probD1;
	probD1 = ((float)Nderrotas / (float)Njogos);
	switch (equipa2)
	{
	case 1://Sporting Clube de Portugal
	{
		strcpy(nometxt2, "football/Sporting.txt");
		strcpy(nomeEquipa2, "Sporting CP");
		break;
	}
	case 2://Benfica
	{
		strcpy(nometxt2, "football/Benfica.txt");
		strcpy(nomeEquipa2, "SL Benfica");
		break;
	}
	case 3://Porto
	{
		strcpy(nometxt2, "football/Porto.txt");
		strcpy(nomeEquipa2, "FC Porto");
		break;
	}
	case 4://Braga
	{
		strcpy(nometxt2, "football/Braga.txt");
		strcpy(nomeEquipa2, "SC Braga");
		break;
	}
	case 5://Real Madrid FC
	{
		strcpy(nometxt2, "football/RealMadrid.txt");
		strcpy(nomeEquipa2, "Real Madrid FC");
		break;
	}
	case 6://Barcelona FC
	{
		strcpy(nometxt2, "football/Barcelona.txt");
		strcpy(nomeEquipa2, "Barcelona FC");
		break;
	}
	case 7://Atletico de Madrid
	{
		strcpy(nometxt2, "football/AtleticoMadrid.txt");
		strcpy(nomeEquipa2, "Atletico Madrid");
		break;
	}
	case 8://Sevilha FC
	{
		strcpy(nometxt2, "football/Sevilha.txt");
		strcpy(nomeEquipa2, "Sevilha FC");
		break;
	}
	case 9://Bayern Munchen
	{
		strcpy(nometxt2, "football/Bayern.txt");
		strcpy(nomeEquipa2, "Bayern Muchen");
		break;
	}
	case 10://Dortmund
	{
		strcpy(nometxt2, "football/Dortmund.txt");
		strcpy(nomeEquipa2, "Dortmund");
		break;
	}
	case 11://Wolfsburg
	{
		strcpy(nometxt2, "football/Wolfsburg.txt");
		strcpy(nomeEquipa2, "Wolfsburg");
		break;
	}
	case 12://FC Koln
	{
		strcpy(nometxt2, "football/Koln.txt");
		strcpy(nomeEquipa2, "Koln");
		break;
	}
	case 13://Manchester United
	{
		strcpy(nometxt2, "football/ManchesterUnited.txt");
		strcpy(nomeEquipa2, "Manchester United");
		break;
	}
	case 14://Manchester City
	{
		strcpy(nometxt2, "football/ManchesterCity.txt");
		strcpy(nomeEquipa2, "Manchester City");
		break;
	}
	case 15://Arsenal FC
	{
		strcpy(nometxt2, "football/Arsenal.txt");
		strcpy(nomeEquipa2, "Arsenal");
		break;
	}
	case 16://Chelsea FC
	{
		strcpy(nometxt2, "football/ChelseaFC.txt");
		strcpy(nomeEquipa2, "Chelsea FC");
		break;
	}
	case 17://Juventus FC
	{
		strcpy(nometxt2, "football/Juventus.txt");
		strcpy(nomeEquipa2, "Juventus FC");
		break;
	}
	case 18://SSC Napoli
	{
		strcpy(nometxt2, "football/Napoli.txt");
		strcpy(nomeEquipa2, "SSC Napoli");
		break;
	}
	case 19://Internaziole
	{
		strcpy(nometxt2, "football/Inter.txt");
		strcpy(nomeEquipa2, "Internaziole FC");
		break;
	}
	case 20://AC MIlan
	{
		strcpy(nometxt2, "football/Milan.txt");
		strcpy(nomeEquipa2, "AC Milan");
		break;
	}
	case 21://PSG
	{
		strcpy(nometxt2, "football/PSG.txt");
		strcpy(nomeEquipa2, "PSG");
		break;
	}
	case 22://MonacoFC
	{
		strcpy(nometxt2, "football/Monaco.txt");
		strcpy(nomeEquipa2, "MonacoFC");
		break;
	}
	case 23://Nice
	{
		strcpy(nometxt2, "football/Nce.txt");
		strcpy(nomeEquipa2, "Nice");
		break;
	}
	case 24://Lyon
	{
		strcpy(nometxt2, "football/Lyon.txt");
		strcpy(nomeEquipa2, "Lyon");
		break;
	}

	default:
	{
		break;
	}
	}

	i = 0, j = 0, l = 0, p = 0, h = 0, x, y, z, w, r;
	char lista2[100], jogos2[100] = { 0 }, vitorias2[100] = { 0 }, empates2[100] = { 0 }, derrotas2[100] = { 0 };
	float Njogos2 = 0, Nvitorias2 = 0, Nempates2 = 0, Nderrotas2 = 0;
	FILE *FicheiroDadosEquipas2;
	FicheiroDadosEquipas2 = fopen(nometxt2, "r");
	if (FicheiroDadosEquipas2 == NULL)
	{
		FicheiroDadosEquipas2 = fopen(nometxt2, "w");
		printf("Introduza os dados da equipa sobre a qual pretende fazer a aposta: ");
		scanf("%s", lista);
		fprintf(FicheiroDadosEquipas2, "%s", lista);
		fclose(FicheiroDadosEquipas2);
	}
	else
	{
		while ((x = getc(FicheiroDadosEquipas2)) != EOF)
		{
			lista[i] = x;

			if (lista[i] == 'J')
			{
				while ((y = getc(FicheiroDadosEquipas2)) != '_')
				{
					jogos2[j] = y;
					j++;
				}
			}
			if (lista[i] == 'V')
			{
				while ((z = getc(FicheiroDadosEquipas2)) != '_')
				{
					vitorias2[l] = z;
					l++;
				}
			}
			if (lista[i] == 'E')
			{
				while ((w = getc(FicheiroDadosEquipas2)) != '_')
				{
					empates2[p] = w;
					p++;
				}
			}
			if (lista[i] == 'D')
			{
				while ((r = getc(FicheiroDadosEquipas2)) != '_')
				{
					derrotas2[h] = r;
					h++;
				}
			}
			i++;
		}
		fclose(FicheiroDadosEquipas2);
		Njogos2 = atof(jogos2);
		Nvitorias2 = atof(vitorias2);
		Nempates2 = atof(empates2);
		Nderrotas2 = atof(derrotas2);
		
		float  probVequipa2;
		probVequipa2 = ((float)Nvitorias2 / (float)Njogos2); //Ai este cast
		float probabilidadeEmpate, probE2;
		probE2 = ((float)Nempates2 / (float)Njogos2);
		float  probD2;
		probD2 = ((float)Nderrotas2 / (float)Njogos2);
		
		
		//Finais
		probVequipa1 = (probVequipa1 + probD2) / 2.0;
		probVequipa2 = (probVequipa2 + probD1) / 2.0;
		probabilidadeEmpate = (probE1 + probE2) /2.0;

		//Cotas
		float CotaEqu1V, CotaEqu2V, CotaEmp;
		CotaEqu1V = 1 + (((1 - probVequipa1) / probVequipa1));
		CotaEqu2V = 1 + (((1 - probVequipa2) / probVequipa2));
		CotaEmp = 1 + (((1 - probabilidadeEmpate) / probabilidadeEmpate));

		ajugar.cotaEquipa1V = CotaEqu1V;
		ajugar.cotaEquipa2V = CotaEqu2V;
		ajugar.cotaEquipaE = CotaEmp;
		ajugar.probVitoriaEq1 = probVequipa1;
		ajugar.probVitoriaEq2 = probVequipa2;
		
		strcpy(ajugar.ficheiro2, nometxt2);
		strcpy(ajugar.ficheiro1, nometxt);
		strcpy(ajugar.nomeDeEquipa1, nomeEquipa1);
		strcpy(ajugar.nomeDeEquipa2, nomeEquipa2);
		return ajugar;
	}

}
void jogar(char nomeDeEquipa1[30], char nomeDeEquipa2[30], float ValorApostadoIndividual, int ResultadoEscolhido, float cotaEquipa1V, float cotaEquipa2V, float cotaEmpate, float probVitoriaEq1, float probVitoriaEq2) {
	//Jogar(jogo5.nomeDeEquipa1, jogo5.nomeDeEquipa2, jogo5.cotaEquipa1V, jogo5.cotaEquipa2V, jogo5.cotaEquipaE, jogo5.ficheiro1, jogo5.ficheiro2, jogo5.probVitoriaEq1, jogo5.probVitoriaEq2, ResultadoEscolhido[i],ValorApostadoIndividual);
	float saldo = RetornarSaldo();
	float SaldoEmJogo = ValorApostadoIndividual;
	float SaldoPossivelGanho;
	int quemRemata = 0, i;
	int fraseRelato;
	int goloEquipa1 = 0;
	int goloEquipa2 = 0;

	//escolhe cota
	if (ResultadoEscolhido == 1) {
		SaldoPossivelGanho = SaldoEmJogo*cotaEquipa1V;
	}
	else if (ResultadoEscolhido == 2) {
		SaldoPossivelGanho = SaldoEmJogo*cotaEquipa2V;
	}
	else if (ResultadoEscolhido == 3) {
		SaldoPossivelGanho = SaldoEmJogo*cotaEmpate;
	}
	printf("Sejam bem vindos a mais um jogo emocionante onde voce pode ganhar %f\n", SaldoPossivelGanho);
	printf("Jogo entre o %s e o %s\n\n", nomeDeEquipa1, nomeDeEquipa2);


	//Simular
	for (i = 1; i < 5; i++) {
		fflush(stdin);
		getchar();
		fflush(stdin);
		if (quemRemata % 2 == 0) {
			if (probVitoriaEq1 * 10  > rand() % 10 + 1) {
				goloEquipa1++;			
				fraseRelato = rand() % 4 + 1;
				
				switch (fraseRelato) {
				case 1:
				{
					printf("Alexandre Afonso: O %s Cheirou a baliza e entrou!\n", nomeDeEquipa1);
					printf("Nuno Matos: faz-se assim o %s: %i\t %s: %i com este golo do %s\n", nomeDeEquipa1, goloEquipa1, nomeDeEquipa2, goloEquipa2, nomeDeEquipa1);
					break;
				}
				case 2:
				{
					printf("Alexandre Afonso: Erro do %s ela vai rasteira entra!!! O bom football joga-se aqui!\n", nomeDeEquipa2);
					printf("Nuno Matos: faz-se assim o %s: %i\t %s: %i com este golo do %s\n", nomeDeEquipa1, goloEquipa1, nomeDeEquipa2, goloEquipa2, nomeDeEquipa1);
					break;
				}
				case 3:
				{
					printf("Nuno Matos : Resulta de um lance desinteressante mas o %s : %i\t %s: %i fica feito com esta ratada do %s\n", nomeDeEquipa1, goloEquipa1, nomeDeEquipa2, goloEquipa2, nomeDeEquipa1);
					break;
				}
				case 4:
				{
					printf("Nuno Matos : Voltaram fortes e mostraram-se fortes neste golo o %s\n", nomeDeEquipa1);
					break;
				}
				}
			
				quemRemata++;
			}

			else {				
				fraseRelato = rand() % 4 + 1;
				switch (fraseRelato) {
				case 1:
				{
					printf("Alexandre Afonso: O jacare tossui, a mae chorou mas o guardiao segurou!\n");
					printf("Nuno Matos: melhor sorte para a pr�xima %s\n", nomeDeEquipa1);
					break;

				}
				case 2:
				{
					printf("Alexandre Afonso: Aprende-se com os erros %s que leva licao para casa ao falhar o remate\n", nomeDeEquipa1);
					printf("Nuno Matos: O resultado mante-se %s: %i\t %s: %i sem haver o golo do %s\n", nomeDeEquipa1, goloEquipa1, nomeDeEquipa2, goloEquipa2, nomeDeEquipa1);
					break;

				}
				case 3:
				{
					printf("Nuno Matos :Tanta cabe�a e a bola sai para as maos do guardiao do %s\n", nomeDeEquipa2);
					break;

				}
				case 4:
				{
					printf("Alexandre Afonso : Sao uma parede o %s e defendem este lance com elegancia\n", nomeDeEquipa2);
					break;

				}
				}
		
				quemRemata++;
			}
		}
		else
		{
			if (probVitoriaEq2 * 10 > rand() % 9 + 1) {
				goloEquipa2++;
				fraseRelato = rand() % 4 + 1;
				switch (fraseRelato) {
				case 1:
				{
					printf("Alexandre Afonso: O %s foi e ja esta!\n", nomeDeEquipa2);
					printf("Nuno Matos: temos o resultado %s: %i %s: %i com este golo do %s\n", nomeDeEquipa2, goloEquipa2, nomeDeEquipa1, goloEquipa1, nomeDeEquipa2);
					break;

				}
				case 2:
				{
					printf("Alexandre Afonso: Perna coxa para o %s ela vai de curva e entra!!! O bom football joga-se aqui!\n", nomeDeEquipa1);
					printf("Nuno Matos: faz-se assim o %s: %i %s: %i com este golo do %s\n", nomeDeEquipa2, goloEquipa2, nomeDeEquipa1, goloEquipa1, nomeDeEquipa2);
					break;
				}
				case 3:
				{
					printf("Nuno Matos : Todos de pe e.... %s : %i %s: %i esta marcado obsequio da equipa do %s\n", nomeDeEquipa2, goloEquipa2, nomeDeEquipa1, goloEquipa1, nomeDeEquipa2);
					break;
				}
				case 4:
				{
					printf("Nuno Matos : Voltaram fortes e mostraram-se fortes neste golo o %s\n", nomeDeEquipa2);
					break;
				}
				}
				//switch quem remata faz uma string de 10 foi golo
				quemRemata++;
	
			}
			else {
				fraseRelato = rand() % 4 + 1;
				switch (fraseRelato) {
				case 1:
				{

					printf("Nuno Matos: Temos pena %s que tirou tinta, mas nao deixa marca\n", nomeDeEquipa2);
					break;
				}
				case 2:
				{

					printf("Nuno Matos: O resultado mante-se %s: %i\t %s: %i com um falhanco do %s\n", nomeDeEquipa1, goloEquipa1, nomeDeEquipa2, goloEquipa2, nomeDeEquipa2);
					break;
				}
				case 3:
				{
					printf("Nuno Matos :Atento o numero 99, como e tradicao do %s\n", nomeDeEquipa1);
					break;
				}
				case 4:
				{
					printf("Alexandre Afonso : Sem a bencao nao vao la e o %s e defendem este lance sem problema\n", nomeDeEquipa1);
					break;
				}
				}
				quemRemata++;
				//switch quem remata faz uma string de 10 falhou
			}
		}

	}

	//Resultado
	printf("O jogo ficou: \n %s: %i\t %s: %i\n", nomeDeEquipa1, goloEquipa1, nomeDeEquipa2, goloEquipa2);
	if (goloEquipa1 > goloEquipa2 && ResultadoEscolhido == 1) {
		AdicionarSaldo(-SaldoEmJogo);
		AdicionarSaldo(SaldoPossivelGanho);
		saldo = RetornarSaldo();
		printf("Parabens! o Seu saldo adora e de %f\n\n", saldo);

	}
	else if (goloEquipa1 < goloEquipa2 && ResultadoEscolhido == 2) {
		AdicionarSaldo(-SaldoEmJogo);
		AdicionarSaldo(SaldoPossivelGanho);
		saldo = RetornarSaldo();
		printf("Parabens! o Seu saldo agora e de %f\n\n", saldo);
	}
	else if (goloEquipa1 == goloEquipa2 && ResultadoEscolhido == 3) {
		AdicionarSaldo(-SaldoEmJogo);
		AdicionarSaldo(SaldoPossivelGanho);
		saldo = RetornarSaldo();
		printf("Parabens! o Seu saldo agora e de %f\n\n", saldo);
	}
	else {
		AdicionarSaldo(-SaldoEmJogo);
		saldo = RetornarSaldo();
		printf("Com muita pena mas nao previu a resulado, ficou com %f euros\n\n", saldo);
	}
	printf("Pr�ximo jogo para quem vai jogar!");
	fflush(stdin);
	getchar();
	fflush(stdin);
	system("cls");
}

void alterarficheiro(char txt[40]) {
	char ficheiroCausa[40] = "";
	strcpy(ficheiroCausa, txt);
	FILE *FicheiroDadosEquipas;
	int i = 0, j = 0, l = 0, p = 0, h = 0, x, y, z, w, r;
	char lista[100], jogos[100] = { 0 }, vitorias[100] = { 0 }, empates[100] = { 0 }, derrotas[100] = { 0 };
	float Njogos = 0, Nvitorias = 0, Nempates = 0, Nderrotas = 0;
	FicheiroDadosEquipas = fopen(txt, "w");
	if (FicheiroDadosEquipas == NULL)
	{
		printf("Este ficheiro nao existia.");
		alterarficheiro(ficheiroCausa);
	}
	else
	{
		while ((x = getc(FicheiroDadosEquipas)) != EOF)
		{
			lista[i] = x;

			if (lista[i] == 'J')
			{
				while ((y = getc(FicheiroDadosEquipas)) != '_')
				{
					jogos[j] = y;
					j++;
				}
			}
			if (lista[i] == 'V')
			{
				while ((z = getc(FicheiroDadosEquipas)) != '_')
				{
					vitorias[l] = z;
					l++;
				}
			}
			if (lista[i] == 'E')
			{
				while ((w = getc(FicheiroDadosEquipas)) != '_')
				{
					empates[p] = w;
					p++;
				}
			}
			if (lista[i] == 'D')
			{
				while ((r = getc(FicheiroDadosEquipas)) != '_')
				{
					derrotas[h] = r;
					h++;
				}
			}
			i++;
		}

	}

}




	