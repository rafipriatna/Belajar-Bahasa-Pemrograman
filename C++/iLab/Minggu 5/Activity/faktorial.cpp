#include <iostream>

using namespace std;

long int faktorial(int N);

int main(){
    int N;
    cout << "Berapa Faktorial ?";
    cin >> N;

    cout << "Faktorial dari " << N << faktorial(N);
}

long int faktorial(int N){
    if (N == 0){
        return (1);
    }else{
        return (N * faktorial(N-1));
    }
}