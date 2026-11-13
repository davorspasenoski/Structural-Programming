// Напиши програма која ќе испечати колку зборови се палиндроми во дадена реченица (линија).

// Првен се вчитува бројот N, потоа се вчитуваат N линии.

// Напомена: искористи cin.ignore() после вчитување на N доколку користите cin.getline().

// Зборови од 1 буква се сметаат како палиндром, и проверката за палиндром да биде case-insensitive (Racecar е палиндром исто како и racecar)

// Не е дозволено користење на тип од string.

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
bool ePalindrom(char *zbor) {
    int dolzina = strlen(zbor);
    int i = 0, j = dolzina - 1;
    while (i < j) {
        if (tolower(zbor[i]) != tolower(zbor[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() {
    int n;
  cin >> n;
    cin.ignore(); 
    for (int i = 0; i < n; i++){
        char linija[1000];
        cin.getline(linija, 1000);
        cout<<linija<<": ";

        int palindromiGrof = 0;
        char zbor[100];
        int k = 0;
        for (int j = 0; j <=strlen(linija);j++) {
            if (isspace(linija[j]) || linija[j] == '\0') {
                if (k > 0){
                    zbor[k] ='\0';
                    if (ePalindrom(zbor)) {
                        palindromiGrof++;
                    }
                    k =0; 
                }
            } else if (isalpha(linija[j])) {
                zbor[k++] =linija[j];
            }
        }
        cout<<palindromiGrof<<endl;
    }
    return 0;
}
