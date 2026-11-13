// Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :,
// па самите цифри подредени според ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.


#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char znaci[81];
    char pomosna[81];
    while (cin.getline(znaci,81) && znaci[0] != '#') {
        int dolzina = strlen(znaci);
        int brcifri = 0;
        for (int i = 0; i  < dolzina ; i++) {
            if (isdigit(znaci[i])) {
                strcpy(pomosna,znaci);
                brcifri++;
            }
        }
        cout<<brcifri<<":";
        sort(pomosna,pomosna+dolzina);
        for (int i = 0; i  < dolzina ; i++) {
            if (isdigit(pomosna[i])) {
                cout<<pomosna[i];
            }
        }
        cout<<endl;
    }
    return 0;

}
