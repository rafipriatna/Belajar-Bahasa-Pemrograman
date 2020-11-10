import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class BukuAlamat {
    public static void main(String[] args) {
        pilihMenu();
    }

    public static void pilihMenu() {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String pilihan = "";

        do {
            try {
                // Menu
                System.out.println("Silakan pilih menu:");
                System.out.println("1. Tampilkan semua data");
                System.out.println("2. Tambah data baru");
                System.out.println("3. Ubah data");
                System.out.println("4. Hapus data");
                System.out.println("5. Keluar");

                // Membaca pilihan menu
                System.out.print("Pilihan kamu (1 - 5): ");
                pilihan = br.readLine();

                // Tampilkan sesuai pilihannya
                switch (Integer.parseInt(pilihan)) {
                    case 1:
                        tampilkanSemuaData();
                        break;
                    case 2:
                        tambahData();
                        break;
                    case 3:
                        ubahData();
                        break;
                    case 4:
                        hapusData();
                        break;
                    case 5:
                        System.exit(0);
                    default:
                        System.out.println("Tidak ada menu.");
                }

            } catch (IOException e) {
                System.out.println(e);
            }

        } while (Integer.parseInt(pilihan) != 5);
    }

    public static void tampilkanSemuaData() {
        DataAlamat dataAlamat = new DataAlamat();
        int totalRecord = dataAlamat.getTotalRecord();

        for (int i = 0; i < totalRecord; i++) {
            System.out.println("Data ke-" + (i + 1));

            System.out.println("Nama    : " + dataAlamat.getNama(i));
            System.out.println("Alamat  : " + dataAlamat.getEmail(i));
            System.out.println("Telepon : " + dataAlamat.getTelepon(i));
            System.out.println("Email   : " + dataAlamat.getEmail(i));

            System.out.println(); // Spasi
        }
    }

    public static void tambahData() {
        DataAlamat dataAlamat = new DataAlamat();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] nama = new String[100];
        String[] alamat = new String[100];
        String[] telepon = new String[100];
        String[] email = new String[100];

        String jumlah;

        int totalRecord = dataAlamat.getTotalRecord();

        System.out.println("Masukkan data baru");
        try {
            System.out.print("Berapa banyaknya data? ");
            jumlah = br.readLine();
            int n = totalRecord + Integer.parseInt(jumlah);

            // Looping inputan tambah data sesuai banyaknya data yang akan dimasukkan
            for (int i = totalRecord; i < n; i++) {
                System.out.println("Tambah data ke-" + (i + 1));

                System.out.print("Nama: ");
                try {
                    nama[i] = br.readLine();
                } catch (IOException e) {
                    System.out.println(e);
                }

                System.out.print("Alamat: ");
                try {
                    alamat[i] = br.readLine();
                } catch (IOException e) {
                    System.out.println(e);
                }

                System.out.print("Nomor Telepon: ");
                try {
                    telepon[i] = br.readLine();
                } catch (IOException e) {
                    System.out.println(e);
                }

                System.out.print("Email: ");
                try {
                    email[i] = br.readLine();
                } catch (IOException e) {
                    System.out.println(e);
                }

                System.out.println(); // Spasi
            }

            // Setelah selesai looping input data, sekarang masukin datanya
            // ke class DataAlamat
            for (int i = totalRecord; i < n; i++) {
                dataAlamat.setNewRecord(i, nama[i], alamat[i], telepon[i], email[i]);
            }
            System.out.println("Data berhasil dimasukkan!");

        } catch (IOException e) {
            System.out.println(e);
        }
    }

    public static void ubahData() {
        DataAlamat dataAlamat = new DataAlamat();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] nama = new String[100];
        String[] alamat = new String[100];
        String[] telepon = new String[100];
        String[] email = new String[100];

        String recordDiPilih = "";
        String ubahData = "";
        System.out.println("Ubah Data");

        try {
            System.out.print("Silakan masukkan nomor yang mau diubah (1 - " + dataAlamat.getTotalRecord() + " ): ");
            recordDiPilih = br.readLine();
            int i = Integer.parseInt(recordDiPilih) - 1;

            System.out.println("Nama    : " + dataAlamat.getNama(i));
            System.out.println("Alamat  : " + dataAlamat.getEmail(i));
            System.out.println("Telepon : " + dataAlamat.getTelepon(i));
            System.out.println("Email   : " + dataAlamat.getEmail(i));

            System.out.println(); // Spasi

            try {
                System.out.print("Ubah data (y/t): ");
                ubahData = br.readLine();

                if (ubahData.equals("y") || ubahData.equals("Y")) {
                    System.out.print("Nama: ");
                    try {
                        nama[i] = br.readLine();
                    } catch (IOException e) {
                        System.out.println(e);
                    }

                    System.out.print("Alamat: ");
                    try {
                        alamat[i] = br.readLine();
                    } catch (IOException e) {
                        System.out.println(e);
                    }

                    System.out.print("Nomor Telepon: ");
                    try {
                        telepon[i] = br.readLine();
                    } catch (IOException e) {
                        System.out.println(e);
                    }

                    System.out.print("Email: ");
                    try {
                        email[i] = br.readLine();
                    } catch (IOException e) {
                        System.out.println(e);
                    }

                    dataAlamat.setNewRecord(i, nama[i], alamat[i], telepon[i], email[i]);

                    System.out.println(); // Spasi
                }
            } catch (IOException e) {
                System.out.println(e);
            }

        } catch (IOException e) {
            System.out.println(e);
        }

    }

    public static void hapusData() {
        DataAlamat dataAlamat = new DataAlamat();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String recordDiPilih = "";
        String hapusDataDiPilih = "";
        System.out.println("Hapus Data");

        try {
            System.out.print("Silakan masukkan nomor yang mau dihapus (1 - " + dataAlamat.getTotalRecord() + " ): ");
            recordDiPilih = br.readLine();
            int i = Integer.parseInt(recordDiPilih) - 1;

            System.out.println("Nama    : " + dataAlamat.getNama(i));
            System.out.println("Alamat  : " + dataAlamat.getEmail(i));
            System.out.println("Telepon : " + dataAlamat.getTelepon(i));
            System.out.println("Email   : " + dataAlamat.getEmail(i));

            System.out.println(); // Spasi

            try {
                System.out.print("Hapus data (y/t): ");
                hapusDataDiPilih = br.readLine();

                if (hapusDataDiPilih.equals("y") || hapusDataDiPilih.equals("Y")) {
                    dataAlamat.deleteRecord(Integer.parseInt(recordDiPilih) - 1);
                }

            } catch (IOException e) {
                System.out.println(e);
            }

        } catch (IOException e) {
            System.out.println(e);
        }

    }
}

public class DataAlamat {
    // Dijadikan static supaya ga ilang datanya
    private static String[] nama = new String[100];
    private static String[] alamat = new String[100];
    private static String[] telepon = new String[100];
    private static String[] email = new String[100];

    private static int jumlahRecord = 0;
    private static int nomorRecord;

    // Mutator
    public void setNewRecord(int nomorRecord, String dataNama, String dataAlamat, String dataTelp, String dataEmail) {
        if (nama[nomorRecord] == null) {
            jumlahRecord++;
        }

        // Simpan data baru
        nama[nomorRecord] = dataNama;
        alamat[nomorRecord] = dataAlamat;
        telepon[nomorRecord] = dataTelp;
        email[nomorRecord] = dataEmail;
    }

    public void deleteRecord(int nomorRecord) {

        nama[nomorRecord] = null;
        alamat[nomorRecord] = null;
        telepon[nomorRecord] = null;
        email[nomorRecord] = null;

        for (int i = 0; i < 99; i++) {
            if ((nama[i] == null && nama[i + 1] != null) || nomorRecord == 0) {
                // 1, 2, 3, 4
                // 1, 2, x, 4
                // 1, 2, 4
                nama[i] = nama[i + 1];
                alamat[i] = alamat[i + 1];
                telepon[i] = telepon[i + 1];
                email[i] = email[i + 1];
            }
        }
        
        jumlahRecord--;

        System.out.println("Berhasil menghapus data!");
    }

    // Accessor
    public String getNama(int nomorRecord) {
        // Ambil nama berdasarkan nomor record
        return nama[nomorRecord];
    }

    public String getAlamat(int nomorRecord) {
        // Ambil alamat berdasarkan nomor record
        return alamat[nomorRecord];
    }

    public String getTelepon(int nomorRecord) {
        // Ambil telepon berdasarkan nomor record
        return telepon[nomorRecord];
    }

    public String getEmail(int nomorRecord) {
        // Ambil email berdasarkan nomor record
        return email[nomorRecord];
    }

    public int getTotalRecord() {
        // Ambil total record
        return jumlahRecord;
    }

}
