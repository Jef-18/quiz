//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <windows.h> 

struct CADASTRO {
	char nome[30];
	int idade;

};

int main ()

{	

	struct CADASTRO usuario;

	//IDIOMA
	setlocale(LC_ALL, "Portuguese");
	 
	//TIPOS DE VARIÁVEIS
	int  n, *Pt;
	int  errou=0, acertou=0, record;
	char r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;	
	float pontuacao;	
	
	Pt = &record; 	
		
	//ENTRADA
	system("color 0F");
	while(n != 3)
	{
		system("cls");
		printf("\n\t TELA RECOMENDADA: \"800px 600px\"\t REALESE: 6.2\n");
	 	printf("\n\t*------------------------------------------------------*\n");    
		printf("\t|                    MENU DE OPCOES                    |\n");
		printf("\t*------------------------------------------------------*\n");
		printf("\t|  1 - JOGAR                                           |\n");
		printf("\t|  2 - SOBRE                                           |\n");
		printf("\t|  3 - SAIR                                            |\n");
		printf("\t*------------------------------------------------------*\n");
		printf("\n\n\t ESCOLHA UMA OPCAO: ");
		scanf("%d", &n);
		
		switch (n){
			
			case 1:
			{				
			//CABEÇALHO 
			system("color 4F");
			system("cls");
			printf("\n\n\t| HISTORIA E MOVIMENTOS DE CAPOEIRA |\n\n");
			printf("\n\tINFORME SEUS DADOS PARA COMECAR O QUIZ!\n");		
			
		
			//CADASTRAR DADOS DO USUÁRIO
		  	fflush(stdin);
			printf("\n\tNOME: ");
			//scanf("%s", nome);
			gets(usuario.nome);
			printf("\tIDADE: ");
			scanf("%d", &usuario.idade);
			//system("pause");
			getchar();
			system("cls");
			
			system("COLOR FF");
			printf ("\n\tSEJA BEM VINDO \"%s !\"\n", usuario.nome );
			printf("\n\n\tVAMOS COMEÇAR?\n\n\n\n\tTECLE ENTER PARA LER O TEXTO.");
			getchar(); system ("cls");  
			
			//TEXTO PARA O JOGO
			system("color 6F");			
			printf("\n\n\t | O QUANTO VOCE SABE SOBRE CAPOEIRA? | ");
			printf("\n\n\n\tA origem da capoeira data da epoca da escravidao no Brasil. Muitos negros foram\n\t");
			printf("trazidos da Africa para o Brasil para trabalhar nos engenhos de cana-de-acucar, nas\n\t");
			printf("fazendas de cafe, nas roças ou nas casas dos senhores. A capoeira era uma forma\n\tde luta e de resistencia ");
			printf("Porem, para nao despertarem suspeitas, os escravos adaptaram os movimentos da\n\n\t");
			printf("luta aos cantos da Africa, fazendo tudo parecer uma danca. A capoeira foi ficando\n\t");
			printf("do jeitinho que ela eh hoje, gingada.\n\n\n");
			printf("\n\tPRESSIONE ENTER PARA COMECAR...");
			getchar(); system ("cls");  
						
			
			//QUESTÃO 1
			//ALEATORIO
			srand(time(NULL));{
							
			system("color 1F");	
			printf("\n\n\t Como se chama o golpe que visa acertar do abdomen para cima do adversario,\n\t");
			printf(" cuja perna de tras da ginga eh esticada para frente em linha reta visando empurrar ou deslocar o adversario?\n");
			
			printf("\n\t a) Au.\n\t");
			printf(" b) Bencao.\n\t");
			printf(" c) Cocorinha.\n\t");
			printf(" d) Chapa de costas.\n\t");
			printf(" e) Meia lua de frente.\n\n\t"); 
			printf(" Resposta: ");
			scanf("%s", &r1);	
									  	
			if(r1 == 'b' || r1 == 'B'){
				acertou++;
			}else
				//Beep(1000, 500);	
				errou++;
				
				system("cls");
			
			//QUESTÃO 2	
			system("color 2F");
			printf("\n\n\t Como se chama o movimento basico da capoeira?\n");
			
			printf("\n\t a) Ginga.\n\t");
			printf(" b) Martelo.\n\t");
			printf(" c) Parafuaso.\n\t");
			printf(" d) Cocorinha.\n\t");
			printf(" e) Chapa de costas.\n\n\t");
			printf(" Resposta: ");
			scanf("%s", &r2);
							
			if(r2 == 'a' || r2 == 'A'){
				acertou++;
			}else
				//Beep(1000, 500);	
				errou++;				
				system("cls");				
				
			//QUESTÃO 3 
			system("color 3F");	
			printf("\n\n\t Como se chama o movimento em que atraves do movimento de rotacao, um pe fica firme\n\t");
			printf(" ao chao enquanto o outro sobe varrendo a horizontal atingindo o adversario com a parte externa do pe?\n");
			
			printf("\n\t a) Forquilha\n\t");
			printf(" b) Chibata\n\t");
			printf(" c) Arpao\n\t");
			printf(" d) Armada\n\t");
			printf(" e) Martelo\n\n\t");
		
			printf(" Resposta: ");
			scanf("%s", &r3);
							 
			if(r3 == 'd' || r3 == 'D'){
				acertou++;
			}else
				//Beep(1000, 500);			
				errou++;				
				system("cls");
				
			//QUESTÃO 4  
			system("color 4F");	
			printf("\n\n\t Os golpes da capoeira sao divididos em dois tipos. Quais sao eles?\n");
			
			printf("\n\t a) Golpes em pe e Golpes agachados.\n\t");
			printf(" b) Golpes de Linha e Golpes sentados.\n\t");
			printf(" c) Golpes de Linha e Golpes rodados.\n\t");
			printf(" d) Golpes em pe e Golpes rodados.\n\t");
			printf(" e) Meia lua de frente.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r4);
									  	
			if(r4 == 'c' || r4 == 'C'){
				acertou++;
			}else
				//Beep(1000, 500);	
				errou++;
				system("cls");
								
			//QUESTÃO 5
			system("color 1F");	
			printf("\n\n\t Os golpes traumatizantes sao golpes ofensivos, golpes que podem causar danos\n\t");
			printf(" ao adversario. Apesar de a maioria das vezes, em rodas ou treinamento o dano nao eh desejado,\n\t");
			printf(" entao o golpe fica apenas para incentivar a esquiva do adversario. Sao exemplos de golpes traumatizantes:\n");
			
			printf("\n\t a) Arpao, cotovelada e forquilha.\n\t");
			printf(" b) Bençao, cotovelada e arpao.\n\t");
			printf(" c) Meia lua de compasso, banda de costas e arpao.\n\t");
			printf(" d) Rabo de arraia, vingativa e tesoura.\n\t");
			printf(" e) Crucifixo, forquilha e rasteira de mao.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r5);
									  	
			if(r5 == 'a' || r5 == 'A'){
				acertou++;
			}else
				//Beep(1000, 500);	
				errou++;
				system("cls");
		
			//QUESTÃO 6
			system("color 2F");	  		
			printf("\n\n\t Tambem conhecida por rabo-de-arraia, pois deriva do movimento rabo-de-arraia da capoeira de Angola.\n\t Ficando de lado,");
			printf(" agacha-se sobre a perna da frente, estendendo a perna de tras. Faz-se um movimento\n\t de rotacao varrendo a horizontal com a perna");
			printf(" de tras esticada, apoiando-se na perna da frente, ter-\n\t minando em posicao de ginga. O corpo do aplicante fica rente a perna da frente");
			printf(" sobre a qual ele esta agachado.\n\t O aplicante pode colocar as duas maos ao chao para aumentar a sua seguranca, ou apenas uma ou nenhuma mao.\n\t");
			printf(" Qual o nome deste movimento?\n");
			
			printf("\n\t a) Rasteira de mao.\n\t");
			printf(" b) Arpao.\n\t");
			printf(" c) Cluxifixo.\n\t");
			printf(" d) Bencao.\n\t");
			printf(" e) Meia lua de compasso.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r6);
									  	
			if(r6 == 'e' || r6 == 'E'){
				acertou++;
			}else
				errou++;
				//Beep(1000,500);		
				system("cls");
				
			//QUESTÃO 7
			system("color 3F");  	
			printf("\n\n\t Sao instrumentos da capoeira:\n");
			
			printf("\n\t a) Atabaque, pandeiro e castanholas.\n\t");
			printf(" b) Atabaque, cuica, pandeiro e caxixi.\n\t");
			printf(" c) Berimbau, atabaque, agogo, pandeiro e flauta.\n\t");
			printf(" d) Berimbau, atabaque, agogo, pandeiro e caxixi.\n\t");
			printf(" e) Berimbau, atabaque, agogo, pandeiro e violao.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r7);		
						  	
			if(r7 == 'd' || r7 == 'D'){
				acertou++;
			}else
				errou++;
				//Beep(1000, 500);
				system("cls");
				
			//QUESTÃO 8
			system("color 4F"); 	
			printf("\n\n\t A capoeira eh uma heranca cultural deixada pelos:\n");
			
			printf("\n\t a) Indios.\n\t");
			printf(" b) Negros.\n\t");
			printf(" c) Jesuitas.\n\t");
			printf(" d) Espanhois.\n\t");
			printf(" e) Portuguesa.\n\n\t");
			 
			printf(" Resposta: ");
			scanf("%s", &r8);
									  	
			if(r8 == 'b' || r8 == 'B'){
				acertou++;
			}else
				//Beep(1000, 500);		
				errou++;
				system("cls");
				
			//QUESTÃO 9
			system("color 1F");	
			printf("\n\n\t Golpes Desequilibrantes sao golpes onde o aplicante coloca suas duas pernas entre as pernas do adversario e\n\t");
		    printf(" abre-as e puxa-as forcando a abertura excessiva das pernas do adversario desequilibrando-o.\n\t Sao exemplos de golpes desequilibrantes:\n");
				
			printf("\n\t a) Vingativa, arpao, tesoura e bencao.\n\t");
			printf(" b) Vingativa, arpao, rasteira de mao e bencao.\n\t");
			printf(" c) Vingativa, tesoura, boca de calca e crucifixo.\n\t");
			printf(" d) Vingativa, tesoura, arpao e bencao.\n\t");
			printf(" e) Vingativa, boca de calca, bencao e arpao.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r9);
									  	
			if(r9 == 'c' || r9 == 'C'){
				acertou++;
			}else
				//Beep(1000, 500);		
				errou++;
				system("cls");
				
			//QUESTÃO 10 
			system("color 2F");	
			printf("\n\n\t A capoeira eh uma manifestacao propria do Brasil, mas que ja ganhou adeptos pelo mundo.\n\t Um exemplo disso foi um filme norte americano de 1993 que conta a historia");
		    printf(" de um fuzileiro\n\t americano que em missao no Brasil, acabou aprendendo a capoeira e ensinando a jovens de um bairro pobre nos Estados Unidos.\n\t Qual eh o nome desse filme?\n");
				
			printf("\n\ta) Capoeira Brasil.\n\t");
			printf("b) Esporte Sangrento.\n\t");
			printf("c) Esporte do Brasil.\n\t");
			printf("d) Capoeira: uma historia.\n\t");
			printf("e) Superando os limites.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r10);			
						  	
			if(r10 == 'b' || r10 == 'B'){
				acertou++;
			}else
				//Beep(1000, 500);			
				errou++;
				system("cls");						

			//QUESTÃO 11
			system("color 1F");	
			printf("\n\n\t O que eh Maculele?\n");
				
			printf("\n\ta) Eh um movimento de capoeira.\n\t");
			printf("b) Eh um mestre de capoeira.\n\t");
			printf("c) Eh um instrumento de capoeira.\n\t");
			printf("d) Eh uma luta com bastões ou facões que é praticada em conjunto com os movimentos e o ritmo da Capoeira.\n\t");
			printf("e) Eh uma musica de capoeira.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r11);			
						  	
			if(r11 == 'd' || r11 == 'B'){
				acertou++;
			}else
				//Beep(1000, 500);			
				errou++;
				system("cls");		
												
			//QUESTÃO 12
			system("color 3F");	
			printf("\n\n\t A Capoeira eh o unico esporte verdadeiramente nacional. De quem sao essas palavras?\n");
				
			printf("\n\ta) Mestre Bimba.\n\t");
			printf("b) Mestre Pastinha.\n\t");
			printf("c) Getulio Vargas.\n\t");
			printf("d) Dilma Rousseff.\n\t");
			printf("e) Mestre Joao Grande.\n\n\t"); 
			
			printf(" Resposta: ");
			scanf("%s", &r12);			
						  	
			if(r12 == 'b' || r12 == 'B'){

				acertou++;
			}else
			//Beep(1000, 500);			
				errou++;
				system("cls");	
						
			}
			
			//RESULTADO
			system("color CF");
			pontuacao = (acertou * 10);
			record = (pontuacao);
						
		 	printf("\n\t*------------------------------------------------------*\n");    
			printf("\t|                    RESULTADO FINAL:                  |\n");
			printf("\t*------------------------------------------------------*\n");
			printf("\n\t| NOME DO JOGADOR: %s\n", usuario.nome);
			printf("\t| %i ANOS.\n", usuario.idade);
			printf("\n\t| PONTUACAO TOTAL: %.1lf", pontuacao);
			printf("\n\t| ACERTOU: %d", acertou);
			printf("\n\t| ERROU: %d", errou);	
			printf("\n\t| RECORD REGISTRADO: %d \n\n", Pt);	
			
			//MENSAGEM FINAL
			printf("\n\t****** | FIM | ******\n");
			printf("\n\n\t REFERENCIA: \n\n");
			printf("\t https://rachacuca.com.br/quiz/80783/historia-e-Movimentos-da-capoeira\n\n");
			getchar(); printf("\n\tPRESSIONE ENTER PARA VOLTAR AO MENU PRINCIPAL...");
			fflush(stdin);
			getchar(); system ("cls");	
			break;			
			}
				
			case 2:
			{
			//SOBRE O PROGRAMA
			system("cls");
			system("COLOR CF");
			printf("\n\n\t| SOBRE O JOGO |\n\n\n\t");
			printf("\"QUIZ\" PERGUNTAS E RESPOSTAS PARA TESTAR, NADA MAIS E NADA MENOS\n\t");
			printf(" QUE, O SEU NIVEL DE CONHECIMENTO EM UMA DAS MAIORES LUTAS DO BRASIL, A (CAPOEIRA).\n\n\t");
			printf("CADA QUESTAO VALE DEFINITIVAMENTE 10 PONTOS.\n\n\tREALESE: 6.2 ~ VERSAO DO GAME\n\n\n\t");
			printf("DESENVOLVEDOR:\n\n\t");
			printf("JEFERSON ALMEIDA\n\t");			
			printf("ALUNOS DA DICIPLINA: ALGORITIMOS E PRATICAS DE PROGRAMACAO\n\n\tPROFESSOR: DANIEL JR.\n\n\n\t");
			getchar();printf("\n\tPRESSIONE ENTER PARA VOLTAR...");
			getchar(); system ("cls");	
			break;
			}
				
			case 3:
			{
			//SAIR DO PROGRAMA
			system ("cls");	
			return 0;
			}		
			//MENSAGEM DE ERRO
			default:			
	        printf("\n\n\tOpcao nao encontrada, por favor digite uma opcao valida.\n\n\t"); Beep(1000, 500);	
			system("pause");
	    }
        
	}
		
}
