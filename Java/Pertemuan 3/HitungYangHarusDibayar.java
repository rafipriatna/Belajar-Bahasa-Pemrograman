import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class HitungYangHarusDibayar {
    public static void main(String[] args) {
        String namaBarang;
        int jumlahBarang, hargaBarang, harusDiBayar;

        BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));

        try {
            // Input
            System.out.print("Nama Barang: ");
            namaBarang = dataIn.readLine();
            System.out.print("Jumlah Barang: ");
            jumlahBarang = Integer.parseInt(dataIn.readLine());
            System.out.print("Harga Barang: ");
            hargaBarang = Integer.parseInt(dataIn.readLine());

            // Hitung
            harusDiBayar = jumlahBarang * hargaBarang;

            // Output
            System.out.println("");
            System.out.println("Nama Barang: " + namaBarang);
            System.out.println("Jumlah Barang: " + jumlahBarang + " buah");
            System.out.println("Total Bayar: Rp." + harusDiBayar);

        } catch (IOException e) {
            System.out.print("Error!");
        }
    }
}
