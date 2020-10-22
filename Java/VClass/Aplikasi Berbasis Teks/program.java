import java.io.*;

class Program {
    public static void main(String[] args) {
        // Baca File
        System.out.print("Apa nama sumber filenya? ");
        String fileSumber;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            fileSumber = br.readLine();
            System.out.println("Membaca " + fileSumber + "...");
            FileInputStream fis = null;
            try {
                fis = new FileInputStream(fileSumber);
            } catch (FileNotFoundException ex) {
                System.out.println("File tidak ditemukan.");
            }
            try {
                char data;
                int temp;
                String isiFile = "";
                do {
                    temp = fis.read();
                    data = (char) temp;
                    if (temp != -1) {
                        // Ganti spasi ke _
                        if (data == ' ') {
                            data = '_';
                        }
                        System.out.print(data);
                        isiFile += data;
                    }
                } while (temp != -1);
                System.out.println();
                System.out.println();
                buatFileBaru(isiFile);
            } catch (IOException ex) {
                System.out.println("Problem in reading from the file.");
            }
        } catch (IOException e) {
            System.out.print("Error!");
        }
    }

    public static void buatFileBaru(String isiFile) {
        String fileTujuan;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            // Buat file baru
            System.out.print("Apa nama file tujuan-nya? ");
            // Nama file tujuan
            fileTujuan = br.readLine();
            FileOutputStream fos = null;
            try {
                fos = new FileOutputStream(fileTujuan);
            } catch (FileNotFoundException ex) {
                System.out.println("File cannot be opened for writing.");
            }
            try {
                // Tulis isi filenya
                fos.write(isiFile.getBytes());
                System.out.println("File sudah disimpan.");
            } catch (IOException ex) {
                System.out.println("Problem in reading from the file.");
            }
        } catch (IOException e) {
            System.out.print("Error!");
        }
    }
}