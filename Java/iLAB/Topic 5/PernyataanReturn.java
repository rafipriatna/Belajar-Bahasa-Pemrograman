public class PernyataanReturn {
    public static void main(String[] args) {
        String jenisHewan = "Kucing";
        int kandang1 = 10;
        int kandang2 = 20;

        System.out.println("Jenis Hewan: " + jenisHewan);
        System.out.println("Jumlahnya: " + hitung(kandang1, kandang2));

    }

    public static String hitung(int a, int b){
        return a + b + " Ekor";
    }
}
