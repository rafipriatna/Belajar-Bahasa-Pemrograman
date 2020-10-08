class NilaiTerbesar {
    public static void main(String[] args) {
        int number1 = 67;
        int number2 = 56;
        int number3 = 95;

        int cekDuaAngka = (number1 < number2) ? number2 : number1;
        int nilaiTerbesar = (cekDuaAngka < number3) ? number3 : cekDuaAngka;
        System.out.println("Number 1 = " + number1);
        System.out.println("Number 2 = " + number2);
        System.out.println("Number 3 = " + number3);
        System.out.println("Nilai tertingginya adalah angka = " + nilaiTerbesar);
    }
}
