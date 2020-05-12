#include <iostream>
#include <string>

using namespace std;

class ModelPonsel{
    private:
        string model, series;
        int Tipe;

    public:
        ModelPonsel(string model, string series, int Tipe){
            ModelPonsel::model  = model  ;
            ModelPonsel::series = series;
            ModelPonsel::Tipe   = Tipe;   
        }

        void perolehInfo(){
            cout << "Model     : " << model << endl; 
            cout << "Series    : " << series << endl; 
            cout << "Tipe      : " << Tipe << endl; 
        }
};

int main(){
    ModelPonsel Pabrikan_X(
        "MGT-25",
        "MG",
        25
    );

    ModelPonsel Pabrikan_Y(
        "SRP-23",
        "SR",
        23
    );

    Pabrikan_X.perolehInfo();
    cout << endl;
    Pabrikan_Y.perolehInfo();

    return 0;
}