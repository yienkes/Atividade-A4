package construtor;

public class conta_bancaria {
	private String titular;
	private double saldo;

	public conta_bancaria(String titular, double saldoInicial) {
		this.titular = titular;
		this.saldo = saldoInicial;
	}

	public void depositar(double valor) {
		saldo += valor;
		System.out.println("Depósito de R$ " + valor + " realizado com sucesso!");
	}

	public void sacar(double valor) {
		if (valor <= saldo) {
			saldo -= valor;
			System.out.println("Saque de R$ " + valor + " realizado com sucesso!");
		} else {
			System.out.println("Saldo insuficiente!");
		}
	}

	public void exibirSaldo() {
		System.out.println("\n--- Informações da Conta ---");
		System.out.println("Titular: " + titular);
		System.out.println("Saldo atual: R$ " + saldo);
	}
}
