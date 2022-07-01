/*Exercicio da Prova 23/06/2022*/


/* OBS: Por algum motivo o caso 3 não imprime a resposta se o primeiro usuário gosta ou não de programação. Para os demais funciona normalmente!*/
/* OBS2: Por usar o VS code a acentuação ficou estranha mesmo com o comando locale, por isso resolvi remove-la*/
/* OBS3: O código está com apenas 3 entradas para ser testado mais rapidamente, porém esse valor pode ser alterado*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int idade[3];
char sexo[3];
char prog[3];
int x, c, op, sexom, sexof, gosta_prog;
float media_idade,  soma_idade;

main() {
    soma_idade = 0;
    gosta_prog = 0;
    sexof = 0;
    c = 0;

    do{
        printf("1 - Responder Pesquisa \n");
        printf("2 - Resultados da Pesquisa\n");
        printf("3 - Exibir Dados da Pesquisa\n");
        printf("0 - Sair\n");
        scanf("%d", &op);

        switch (op){
            case 0:
                printf("Programa finalizado");
                break;

            case 1:
                printf("Qual sua idade?\n");
                scanf("%d", &idade[c]);
                printf("Sexo (M/F)?\n");
                scanf("%s", &sexo[c]);
                printf("Voce gosta de programacao? (S/N)\n");
                scanf("%s", &prog[c]);

                if(sexo[c] == 'M' || sexo[c] == 'm'){
                    sexom = sexom + 1;
                }
                else{
                    sexof = sexof + 1;
                }
                if(prog[c] == 'S' || prog[c] == 's'){
                    gosta_prog = gosta_prog + 1;
                }
                c = c + 1;
                break;
            
            
            case 2:
                for(c = 0; c < 3; c++){
                    soma_idade = soma_idade + idade[c];
                }
               /*printf("soma idade %.2f\n", soma_idade);*/
                media_idade = soma_idade/c;
               
                printf("Numero de pesquisas realizadas: %d\n", c);
                printf("Quantidade de pessoas do sexo Feminino: %d\n", sexof);
                printf("Quantidade de pessoas do sexo Masculino: %d\n", sexom);
                printf("Quantidade de pessoas que gostam de programacao %d\n", gosta_prog);
                printf("Media idade:%.2f\n", media_idade);
                break;

            case 3:
                for(c = 0; c < 3; c++) {
                    printf("\nIdade: %d", idade[c]);
                    printf("\nSexo: %c", sexo[c]);
                    printf("\nGosta de programacao: %c\n", prog[c]);
                }
                break;

            default:
                printf("Opcao Invalida \n");
                break;
        }
    }while(op != 0);

    getch();
}