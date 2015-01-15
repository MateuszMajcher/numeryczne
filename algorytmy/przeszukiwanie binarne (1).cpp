#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Tablica 20 elementowa z wyswietleniem
    int tablica[10] = {0, 3, 5, 6, 8, 12, 15, 25, 33, 63};
    cout << "Uporzadkowana tablica 20 elementowa." << endl;
         for(int i = 0; i < 10; i++){
                 cout << setw(3) << i << ". Element tablicy: " << tablica[i] << endl;
         }
    cout << endl;
    int srodek, x, y, lewy = 0, prawy = 10;
    cout << "Podaj poszukiwany element: "; cin >> y;

while(lewy <= prawy){
               srodek = (lewy + prawy)/2;
                             
    if( tablica[srodek] == y){
        cout << "Poszukiwany element znajduje sie na pozycji: " << srodek << endl;
    }
    
    if( tablica[srodek] < y){
        lewy = srodek + 1;
    }
    else{
         prawy = srodek - 1;
    }
}
    cout << endl;          
    system("pause");
    return 0;
}
                    
