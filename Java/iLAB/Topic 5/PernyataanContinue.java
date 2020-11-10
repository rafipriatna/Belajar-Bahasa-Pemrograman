public class PernyataanContinue {
    public static void main ( String args[] ){ 
        for ( int angka = 1; angka <= 15; angka++ ){ 
            if ( angka == 10 ) continue;
            
                System.out.printf( "%d ", angka); 
        } 
        System.out.println( "\nMenggunakan continue untuk melewatkan 10" );
    } 
}
