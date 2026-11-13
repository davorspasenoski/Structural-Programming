// Од стандарден влез прво се читаат два знака z1 и z2 , а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).

// Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

// Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char z1;
    char z2;
    cin>>z1;
    cin>>z2;
    char znaci[81];
    cin.ignore();
    while (cin.getline(znaci,81) && znaci[0] != '#') {
        int dolzina = strlen(znaci);
        int pos1,pos2;
        for (int i = 0; i < dolzina; i++) {
            if (znaci[i] == z1) {
                pos1 = i;
            }
            if (znaci[i] == z2) {
                pos2 = i;
            }
        }
        for (int i = pos1 + 1; i < pos2;i++) {
            cout<<znaci[i];
        }
        cout<<endl;
    }

    return 0;

}
