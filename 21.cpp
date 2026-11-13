// Се внесуваат низи од значи од стандарден влез. Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.

// Пример:

// IO is short for Input Output
// medioio medIo song
// #
// Излез:

// io
// ou
// io
// oi
// io
// io
// 6


#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char niza[100];
    int br = 0;
    while (cin.getline(niza,100)) {
        int dolzina = strlen(niza);
        for (int i = 0; i < dolzina; i++) {
            char c = tolower(niza[i]);
            char c2 = tolower(niza[i + 1]);
            if ((c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u') &&
                (c2 == 'a' || c2 == 'e' || c2 =='i' || c2 == 'o' || c2 == 'u')) {
                cout<<c<<c2<<endl;
                br++;
            }
        }
    }
    cout<<br<<endl;
    return 0;
}
