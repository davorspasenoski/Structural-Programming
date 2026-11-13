// Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.

// Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

// Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

// Објаснување на тест примерот:
// Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.




#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string tekovnaRecenica, najdobraRecenica;
    int maxSvrznici = 0;

    while (getline(cin, tekovnaRecenica)) {
        int brSvrznici = 0;
        int dolzinaNaZbor = 0;
        int dolzina = tekovnaRecenica.length();
        for (int i = 0; i <= dolzina; i++) {

            if (i < tekovnaRecenica.length() && isalpha(tekovnaRecenica[i])) {
                dolzinaNaZbor++;
            } else {
                if (dolzinaNaZbor >= 1 && dolzinaNaZbor <= 3) {
                    brSvrznici++;
                }
                dolzinaNaZbor = 0;
            }
        }

        if (brSvrznici > maxSvrznici) {
            maxSvrznici = brSvrznici;
            najdobraRecenica = tekovnaRecenica;
        }
    }

    if (maxSvrznici != -1) {
        cout <<maxSvrznici<<": "<<najdobraRecenica<<endl;
    }
    return 0;
}
