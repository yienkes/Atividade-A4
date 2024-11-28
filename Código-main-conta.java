import java.util.Scanner;

import construtor.conta_bancaria;

public class main_conta {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Digite o nome do titular da conta: ");
		String titular = sc.nextLine();
		System.out.print("Digite o saldo inicial: ");
		double saldoInicial = sc.nextDouble();

		conta_bancaria conta = new conta_bancaria(titular, saldoInicial);

		int opcao;
		do {
			System.out.println("\n--- MENU ---");
			System.out.println("1. Exibir saldo");
			System.out.println("2. Depositar");
			System.out.println("3. Sacar");
			System.out.println("4. Sair");
			System.out.print("Escolha uma opção: ");
			opcao = sc.nextInt();

			switch (opcao) {
			case 1 -> conta.exibirSaldo();
			case 2 -> {
				System.out.print("Digite o valor a depositar: ");
				double valorDeposito = sc.nextDouble();
				conta.depositar(valorDeposito);
			}
			case 3 -> {
				System.out.print("Digite o valor a sacar: ");
				double valorSaque = sc.nextDouble();
				conta.sacar(valorSaque);
			}
			case 4 -> System.out.println("Encerrando o programa...");
			default -> System.out.println("Opção inválida! Tente novamente.");
			}
		} while (opcao != 4);

		sc.close();

	}

}
