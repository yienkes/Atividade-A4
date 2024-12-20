def adicionar_tarefa(lista):
    tarefa = input("Digite a tarefa que deseja adicionar: ")
    lista.append(tarefa)
    print("Tarefa adicionada com sucesso!")

def remover_tarefa(lista):
    visualizar_tarefas(lista)
    try:
        indice = int(input("Digite o número da tarefa que deseja remover: ")) - 1
        if 0 <= indice < len(lista):
            tarefa_removida = lista.pop(indice)
            print(f"Tarefa '{tarefa_removida}' removida com sucesso!")
        else:
            print("Número inválido.")
    except ValueError:
        print("Por favor, digite um número válido.")

def visualizar_tarefas(lista):
    print("\nLista de Tarefas:")
    if lista:
        for i, tarefa in enumerate(lista, start=1):
            print(f"{i}. {tarefa}")
    else:
        print("Nenhuma tarefa encontrada.")

tarefas = []
while True:
    print("\nGerenciador de Tarefas")
    print("1. Adicionar Tarefa")
    print("2. Remover Tarefa")
    print("3. Visualizar Tarefas")
    print("4. Sair")
    
    opcao = input("Escolha uma opção: ")
    if opcao == "1":
        adicionar_tarefa(tarefas)
    elif opcao == "2":
        remover_tarefa(tarefas)
    elif opcao == "3":
        visualizar_tarefas(tarefas)
    elif opcao == "4":
        print("Saindo do programa...")
        break
    else:
        print("Opção inválida! Tente novamente.")

