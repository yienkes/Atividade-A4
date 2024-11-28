#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_TAREFAS 100
#define TAM_TAREFA 100

void adicionar_tarefa(char tarefas[][TAM_TAREFA], int *total_tarefas) {
    if (*total_tarefas >= MAX_TAREFAS) {
        printf("A lista de tarefas est? cheia.\n");
        return;
    }
    printf("Digite a tarefa que deseja adicionar: ");
    scanf(" %[^\n]", tarefas[*total_tarefas]);
    (*total_tarefas)++;
    printf("Tarefa adicionada com sucesso!\n");
}

void remover_tarefa(char tarefas[][TAM_TAREFA], int *total_tarefas) {
    if (*total_tarefas == 0) {
        printf("Nenhuma tarefa para remover.\n");
        return;
    }
    int indice;
    printf("Digite o n?mero da tarefa que deseja remover: ");
    scanf("%d", &indice);
    if (indice < 1 || indice > *total_tarefas) {
        printf("N?mero inv?lido.\n");
        return;
    }
    indice--; 
    printf("Tarefa '%s' removida com sucesso!\n", tarefas[indice]);
    for (int i = indice; i < *total_tarefas - 1; i++) {
        strcpy(tarefas[i], tarefas[i + 1]);
    }
    (*total_tarefas)--;
}

void visualizar_tarefas(char tarefas[][TAM_TAREFA], int total_tarefas) {
    printf("\nLista de Tarefas:\n");
    if (total_tarefas == 0) {
        printf("Nenhuma tarefa encontrada.\n");
    } else {
        for (int i = 0; i < total_tarefas; i++) {
            printf("%d. %s\n", i + 1, tarefas[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char tarefas[MAX_TAREFAS][TAM_TAREFA];
    int total_tarefas = 0;
    int opcao;

    while (1) {
        printf("\nGerenciador de Tarefas\n");
        printf("1. Adicionar Tarefa\n");
        printf("2. Remover Tarefa\n");
        printf("3. Visualizar Tarefas\n");
        printf("4. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionar_tarefa(tarefas, &total_tarefas);
                break;
            case 2:
                remover_tarefa(tarefas, &total_tarefas);
                break;
            case 3:
                visualizar_tarefas(tarefas, total_tarefas);
                break;
            case 4:
                printf("Saindo do programa...\n");
                return 0;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");

        }
    }
 
        
        
    }

