// Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5, а другата е поголема или еднаква на 5.
// На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
// a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
// Пр.  508294, 2638, 81
// Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.


#include "iostream"
using namespace std;
int main(){
    int broj;

    while (cin>>broj){
        if (broj < 10){
            continue;
        }
        bool flag = true;
        int temp = broj;
        int poslednaCifra = temp %10;
        temp/=10;
        while (temp > 0){
            int momentalnaCifra = temp % 10;
            if (momentalnaCifra < 5 && poslednaCifra < 5 || (momentalnaCifra >=5 && poslednaCifra >= 5)){
                flag = false;
                break;
            }
            poslednaCifra = momentalnaCifra;
            temp/=10;
        }
        if (flag){
            cout<<broj<<endl;
        }
    }
    return  0;
}
