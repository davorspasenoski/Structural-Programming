// Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што ќе ги претворите самогласките во големи букви, а согласките во мали букви.

// Вашата програма треба да дефинира функција void transform (char* text) .

// Користете ја библиотеката <cctype> 

#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char niza[101];
        cin.getline(niza,100);
    int dolzina = strlen(niza);
    for(int i=0;i<dolzina;i++) {
        char c = niza[i];
        if (isalpha(c)) {
            char mala = tolower(c);
            if (mala == 'a' || mala == 'e' || mala == 'i' || mala == 'o' || mala == 'u') {
                char golema  = toupper(c);
                cout<<golema;
            }else {
                mala = tolower(c);
                cout<<mala;
            }
        }else {
            cout<<c;
        }
    }
return 0;
}
