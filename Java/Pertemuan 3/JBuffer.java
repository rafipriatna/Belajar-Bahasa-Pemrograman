import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class JBuffer {
    public static void main(String[] args) {
        String kata1, kata2, kata3;

        BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));
        try {
            // Input
            System.out.print("Masukkan kata pertama: ");
            kata1 = dataIn.readLine();
            System.out.print("Masukkan kata kedua: ");
            kata2 = dataIn.readLine();
            System.out.print("Masukkan kata ketiga: ");
            kata3 = dataIn.readLine();

            // Output
            System.out.println(kata1 + " " + kata2 + " " + kata3);
        } catch (IOException e) {
            System.out.print("Error!");
        }
    }
}
