#include <iostream>
#include <string>

using namespace std;

class hitung{
    private:
        int a, b, c;

    public:
        void assign(int d, int e, int f){
            a = d;
            b = e;
            c = f;
        }

        int tambah(){
            return a + b + c;
        }
};

int main(){
    hitung obj;
    obj.assign(2, 8, 5);
    cout << obj.tambah() << endl;
    return 0;
}