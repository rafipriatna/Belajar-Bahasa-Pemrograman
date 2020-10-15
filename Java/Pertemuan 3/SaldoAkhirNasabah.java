import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class SaldoAkhirNasabah {
    public static void main(String[] args) {
        String nomorRekening, namaNasabah;
        int saldo, debit, totalSaldo;

        BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));

        try {
            // Input
            System.out.print("Nomor Rekening: ");
            nomorRekening = dataIn.readLine();
            System.out.print("Nama Nasabah: ");
            namaNasabah = dataIn.readLine();
            System.out.print("Saldo: ");
            saldo = Integer.parseInt(dataIn.readLine());
            System.out.print("Debit: ");
            debit = Integer.parseInt(dataIn.readLine());

            // Hitung
            totalSaldo = saldo - debit;

            // Output
            System.out.println("");
            System.out.println("Nama Nasabah: " + namaNasabah);
            System.out.println("Total Saldo: " + totalSaldo);
        } catch (IOException e) {
            System.out.print("Error!");
        }
    }
}
