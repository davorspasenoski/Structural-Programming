// Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

// int BrojPozitivni(int niza[], int n);

// Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int BrojPozitivni(int niza[], int n) {
    if (n == 0) {
        return 0;
    }
    int br = 0;
    for (int i = 0; i < n; i++) {
        if (niza[i] > 0) {
            br++;
        }
    }
    return br;
}
int main(){
int n;
    cin>>n;
    int niza[100];
    for (int i = 0; i < n; i++) {
        cin>>niza[i];
    }
    int br = 0;
    for (int i = 0; i < n; i++) {
        if (niza[i] > 0) {
            br++;
        }
    }
    cout<<br<<endl;

    return 0;
}
