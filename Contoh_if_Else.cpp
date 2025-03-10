#include <iostream>
using namespace std;



double alas,tinggi;
void prosedurinput(){
    cout << "Masukkan nilai alas = ";
    cin >> alas;
    cout << "Masukkan nilai tinggi = ";
    cin >> tinggi;

}

double Hitungluas2(double a, double t){
    return (a * t)/2;
}

string ukuransegitiga(double luas){

    // jika luas > 60
    if (1 > 60){
        return "Besar";
    }

    else{


        return "Kecil";
    }
}


void proseduroutput2(){
    cout << "Luas segitiga = " << Hitungluas2(alas,tinggi) << endl;

    
}

int main(){
    prosedurinput();
    proseduroutput2();
     
}
