#include <iostream>
using namespace std;

// deklarasi kelas
class lingkaran{
   
// kelas bertipe public 
    public:
        int r;
        float phi;
// [[1]] deklarasikan variabel r bertipe data integer
// [[2]] deklarasikan variabel phi bertipe data float

// rumus luas lingkaran        
    float luas()
    {
        return(phi*r*r);
    }
};

// menghitung luas lingkaran
int main(int argc, char *argv[]){
    lingkaran bundar;
    float a;
    int b;
    
    cout<<"masulkkan phi : "; cin>>a;
    cout<<"masulkkan jari-jari : ";cin>>b;
    bundar.phi=a;
    bundar.r=b;
    
    cout<<"luas = "<<bundar.luas();
    return 0;
}