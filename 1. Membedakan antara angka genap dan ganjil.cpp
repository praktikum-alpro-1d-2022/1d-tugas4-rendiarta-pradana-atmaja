#include <iostream>
using namespace std;

int main(){
    int bilangan;
    cout << "Silahkan masukkan bilangan: ";
    cin >> bilangan;

    if(bilangan % 2 == 0){
        cout << "Angka tersebut merupakan angka genap";
    }else{
        cout << "Angka tersebut merupakan angka ganjil";
    }

    return 0;

}
