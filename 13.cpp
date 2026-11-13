// Од стандарден влез се читаат непознат број на редови додека не се прочита 0. Да се најде најдолгиот ред во кој има барем 2 цифри. Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

// Пример.

// Влез: 
// dat.txt:
//     aaa123aa222aa2aaa23aaaaa22
//     aaaaaaaaaaaa 23aaaa
//     123 aaa aaa aaa aaa 12345 aaa aaa 2a
//     0
// Излез:
//     123 aaa aaa aaa aaa 12345 aaa aaa 2

#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char niza[100];
    char najdobra[100];
    int prva = 0;
    int posledna = 0;
    najdobra[0] = '\0';
    while (cin.getline(niza,100) && niza[0] != '0') {
        int dolzina = strlen(niza);
        int br = 0;
        for (int i = 0; i < dolzina; i++) {
            if (isdigit(niza[i])) {
                br++;
            }
        }
        if (br >= 2) {
            if (strlen(najdobra) <= strlen(niza)) {
                strcpy(najdobra,niza);
            }
        }

    }
    if (strlen(najdobra) == 0) {
        return 0;
    }
    for (int i = 0; i < strlen(najdobra); i++) {
        if (isdigit(najdobra[i])) {
            prva = i;
            break;
        }
    }
    for (int i = strlen(najdobra) - 1; i >= 0; i--) {
        if (isdigit(najdobra[i])) {
            posledna = i;
            break;
        }
    }
    if (prva != -1 && posledna != -1) {
        for (int i = prva; i <=posledna; i++){
            cout<<najdobra[i];
        }
        cout<<endl;
    }
    return 0;
}
