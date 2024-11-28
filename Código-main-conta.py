from conta_bancaria import ContaBancaria

titular = input("Digite o nome do titular da conta: ")
saldo_inicial = float(input("Digite o saldo inicial: "))

conta = ContaBancaria(titular, saldo_inicial)

while True:
    print("\n--- MENU ---")
    print("1. Exibir saldo")
    print("2. Depositar")
    print("3. Sacar")
    print("4. Sair")
    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        conta.exibir_saldo()
    elif opcao == "2":
        valor = float(input("Digite o valor a depositar: "))
        conta.depositar(valor)
    elif opcao == "3":
        valor = float(input("Digite o valor a sacar: "))
        conta.sacar(valor)
    elif opcao == "4":
        print("Encerrando o programa...")
        break
    else:
        print("Opção inválida! Tente novamente.")
