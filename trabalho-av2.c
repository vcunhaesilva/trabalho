#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, x;
    float nota[30];
    char nome[30][30]; 
    char x2[30];
    //introdução
    printf("\n\nOlá, meu nome é Victor Cunha e Silva e este programa pode ser visto no seguinte endereço do github: https://github.com/brunolandeiro/trabalhoAv2/prog1_av2_1.c\n");

    //le o nome do aluno e a sua nota
    for(i=0;i<=29;i++)
    {
        printf("\nEntre com o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("entre com a nota do %s: ", nome[i]);
        scanf("%f", &nota[i]);
    }
    //ordena de forma decreciva
    for(i=0;i<=29;i++ )
    {
        for(j=i+1;j<=29;j++) 
        {
          if ( nota[j] > nota[i] )
          {
             x = nota[j];
             nota[j] = nota[i];
             nota[i] = x;
             
             strcpy(x2, nome[j]);
             strcpy(nome[j], nome[i]);
             strcpy(nome[i], x2);
          }
        } 
    }
    printf("\n\nListagem da av1\n");
    printf("---------------------\n");
    printf("Nome do aluno\tav1\n");
    printf("_____________________\n");
    for(i=0;i<=29;i++)
    {
        printf("%s\t\t%.2f\n", nome[i], nota[i]);
    }
    
}