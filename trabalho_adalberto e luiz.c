/*Alunos: Adalberto Espirito Santo Neto, Luiz Sergio Passos da Silva*/

//bibliotecas:
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (int argc, char *argv[]){
    //PT-BR
    setlocale(LC_ALL, "Portuguese");
    //dados
    int inscri = 1, idade, eng = 0, banco = 0, ana = 0;
    char resposta;
    //dados[vetores][matrizes]
    char nome_eng[99][99], nome_banco[99][99], nome_ana[99][99], maioresN_eng[2][99], maioresN_banco[2][99], maioresN_ana[2][99];
    int area[99], curta[99], media[99], longa[99], livre[99], idio[99], ponto_eng[99], ponto_banco[99], ponto_ana[99], pt_eng=0, pt_banco=0, pt_ana=0, maiorespt_eng[2], maiorespt_banco[2], maiorespt_ana[2];
    char perguntas[4][99] = {
    "Pesquisa ou Trabalha na área há mais de 3 anos?[S/N]",
    "Possui certificações nacionais ou internacionais?[S/N]",
    "Já participou de alguma equipe de desenvolvimento de software para o governo?[S/N]",
    "Fazer novo registro?[S/N]"};

    while (inscri > 0){
        printf("\nInforme a idade do candidato %d: ", inscri);
            scanf("%u", &idade);
        printf("\n[1] - Engenharia de software  [2] - Banco de dados  [3] - Análise e Projeto de Algoritimos\n");
        printf("Digite a área pretendida pelo candidato: ");/* code */
            scanf("%1u", &area[inscri]);
                while(area[inscri] > 3 || area[inscri] < 1) {
                    printf("\nEscreva um valor valido!\nÁrea de interesse do candidato: ");
                        scanf("%1u", &area[inscri]);
                }
            if (area[inscri] == 1)
            {
                printf("\nCursos feitos pelo candidato de curta duração[até 10 horas]: ");
                    scanf("%u", &curta[inscri]);

                printf("\nCursos feitos pelo candidato de media duração[de 11 até 40 horas]: ");
                    scanf("%u", &media[inscri]);

                printf("\nCursos feitos pelo candidato de longa duração[mais de 40 horas]: ");
                    scanf("%u", &longa[inscri]);

                printf("\nCursos livres feito pelo candidato relacionado a seleção: ");
                    scanf("%u", &livre[inscri]);

                printf("\nIdiomas estrangeiros compreendidos pelo candidato: ");
                    scanf("%u", &idio[inscri]);
                ponto_eng[inscri] = curta[inscri] + (media[inscri]*2) + (livre[inscri]*2) + (idio[inscri]*2) + (longa[inscri]*3);
                for (int perg = 0; perg < 3; perg++)
        {
            printf("\n%s", perguntas[perg]);
                scanf(" %c", &resposta);
                    switch (resposta)
                    {
                    case 's':
                        ponto_eng[inscri] = ponto_eng[inscri] + 1;
                        break;
                    case 'S':
                        ponto_eng[inscri] = ponto_eng[inscri] + 1;
                        break;
                    }
                        getchar();
        }
                ++eng;
                printf("\nDigite o nome do candidato:");
                    fgets(nome_eng[inscri], 99, stdin);
            }
            else if (area[inscri] == 2)
            {
                printf("\nCursos feitos pelo candidato de curta duração[até 10 horas]: ");
                    scanf("%u", &curta[inscri]);

                printf("\nCursos feitos pelo candidato de media duração[de 11 até 40 horas]: ");
                    scanf("%u", &media[inscri]);

                printf("\nCursos feitos pelo candidato de longa duração[mais de 40 horas]: ");
                    scanf("%u", &longa[inscri]);

                printf("\nCursos livres feito pelo candidato relacionado a seleção: ");
                    scanf("%u", &livre[inscri]);

                printf("\nIdiomas estrangeiros compreendidos pelo candidato: ");
                    scanf("%u", &idio[inscri]);
                ponto_banco[inscri] = curta[inscri] + (media[inscri]*2) + (livre[inscri]*2) + (idio[inscri]*2) + (longa[inscri]*3);
                for (int perg = 0; perg < 3; perg++)
        {
            printf("\n%s", perguntas[perg]);
                scanf(" %c", &resposta);
                    switch (resposta)
                    {
                    case 's':
                        ponto_banco[inscri] = ponto_banco[inscri] + 1;
                        break;
                    case 'S':
                        ponto_banco[inscri] = ponto_banco[inscri] + 1;
                        break;
                    }
                        getchar();
        }
                ++banco;
                printf("\nDigite o nome do candidato:");
                    fgets(nome_banco[inscri], 99, stdin);
            }
            else if (area[inscri] == 3)
            {
                printf("\nCursos feitos pelo candidato de curta duração[até 10 horas]: ");
                    scanf("%u", &curta[inscri]);

                printf("\nCursos feitos pelo candidato de media duração[de 11 até 40 horas]: ");
                    scanf("%u", &media[inscri]);

                printf("\nCursos feitos pelo candidato de longa duração[mais de 40 horas]: ");
                    scanf("%u", &longa[inscri]);

                printf("\nCursos livres feito pelo candidato relacionado a seleção: ");
                    scanf("%u", &livre[inscri]);

                printf("\nIdiomas estrangeiros compreendidos pelo candidato: ");
                    scanf("%u", &idio[inscri]);
                ponto_ana[inscri] = curta[inscri] + (media[inscri]*2) + (livre[inscri]*2) + (idio[inscri]*2) + (longa[inscri]*3);
                for (int perg = 0; perg < 3; perg++)
        {
            printf("\n%s", perguntas[perg]);
                scanf(" %c", &resposta);
                    switch (resposta)
                    {
                    case 's':
                        ponto_eng[inscri] = ponto_eng[inscri] + 1;
                        break;
                    case 'S':
                        ponto_eng[inscri] = ponto_eng[inscri] + 1;
                        break;
                    }
                        getchar();
        }
                ++ana;
                printf("\nDigite o nome do candidato:");
                    fgets(nome_ana[inscri], 99, stdin);
                }


                

        ++inscri;
        if (inscri > 0)
        {
            printf("\n%s", perguntas[3]);
                scanf(" %c", &resposta);
                    if (resposta == 'n' || resposta == 'N' )
                    {
                        break;
                    }
                    
                        getchar();
        }
    }

         for(int j=0;j<2;j++){
         for(int i=0;i<eng; i++){
                if(ponto_eng[i]> pt_eng){
                    pt_eng = ponto_eng[i];
			}
		}
		for(int i=0;i<eng; i++){
            if(pt_eng == ponto_eng[i]){
                strcpy(maioresN_eng[j], nome_eng[i]);
                maiorespt_eng[j] = pt_eng;
                }
		}
		for(int i=0;i<eng; i++){
			if(pt_eng == ponto_eng[i]){
				ponto_eng[i] = 0;
				pt_eng = 0;
			}
        }


        for(int i=0;i<banco; i++){
			if(ponto_banco[i]> pt_banco){
				pt_banco = ponto_banco[i];
			}
		}
		for(int i=0;i<banco; i++){
			if(pt_banco == ponto_banco[i]){
				strcpy(maioresN_banco[j], nome_banco[i]);
				maiorespt_banco[j] = pt_banco;
			}
		}
		for(int i=0;i<banco; i++){
			if(pt_banco == ponto_banco[i]){
				ponto_banco[i] = 0;
				pt_banco = 0;
			}
        }        



         for(int i=0;i<ana; i++){
			if(ponto_ana[i]> pt_ana){
				pt_ana = ponto_ana[i];
			}
		}
		for(int i=0;i<ana; i++){
			if(pt_ana == ponto_ana[i]){
				strcpy(maioresN_ana[j], nome_ana[i]);
				maiorespt_ana[j] = pt_ana;
			}
		}
		for(int i=0;i<ana; i++){
			if(pt_ana == ponto_ana[i]){
				ponto_ana[i] = 0;
				pt_ana = 0;
			}
		}
     }
     for (int i = 0; i < 2; i++)
     {
         printf("\nEngenharia de software: %s = %d\n", maioresN_eng[i], maiorespt_eng[i]);
     }
     for (int i = 0; i < 2; i++)
     {
         printf("\nBanco de dados: %s = %d\n", maioresN_banco[i], maiorespt_banco[i]);
     }
     for (int i = 0; i < 2; i++)
     {
         printf("\nAnalise e porjeto de algoritimos: %s = %d\n", maioresN_ana[i], maiorespt_ana[i]);
     }
     
    
    return 0;
}