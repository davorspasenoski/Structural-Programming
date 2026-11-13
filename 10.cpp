// Од стандарден влез се чита ливче во спортска обложувалница.
// Во првиот ред е запишана сумата на уплата (цел број).
// Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:
// ab12 1 1.25
// Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2)
// додека третиот број е коефициентот (реален број).
// Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент,
// да се испечати првиот.
// Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.



#include <iostream>
#include <string>
using namespace std;
int main() {
    int uplata;
    cin>>uplata;

    string sifra, maxSifra;
    int tip, maxTip;
    double koef, maxKoef= 0;
    double vkupnaDobivka = uplata;
    while (cin>>sifra && sifra!="#") {
        cin >>tip>>koef; 

        vkupnaDobivka = vkupnaDobivka * koef;


        if (koef >maxKoef){
            maxKoef =koef;
            maxSifra= sifra;
            maxTip =tip;
        }
    }

    cout <<maxSifra<< " " <<maxTip<< " " <<maxKoef <<endl;
    cout<<vkupnaDobivka <<endl;
    return 0;
}
