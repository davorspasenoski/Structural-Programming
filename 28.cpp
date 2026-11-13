//  На влез е даден природен број  N (N<=100) и во следните N редови е даден по еден стринг со должина помала од 80 знаци. Вашата програма треба на излез да го отпечати најдолгиот стринг кој е палиндром (стринг кој потполно исто се чита и од лево на десно и од десно на лево).

// Доколку има повеќе такви стрингови, да се отпечати тој што е лексикографски најмал (според редоследот од функцијата  strcmp()). Ако нема ниту еден таков стринг, на екран се печати NEMA.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    string najdolgPalindrom = "";
    bool najdenBaremEden = false;
    for (int k = 0; k < n; k++) {
        string s;
        getline(cin, s);
        
        bool ePalindrom = true;
        int dolzina = s.length();

        for (int i = 0; i < dolzina / 2;i++) {
            if (s[i] != s[dolzina - 1-i]){
                ePalindrom = false;
                break;
            }
        }

        if (ePalindrom ==  true){
            if (!najdenBaremEden){
                najdolgPalindrom=s;
                najdenBaremEden=true;
            }else{
                if (s.length() >najdolgPalindrom.length()){
                    najdolgPalindrom= s;
                }
                else if (s.length() == najdolgPalindrom.length()){
                    if (strcmp(s.c_str(),najdolgPalindrom.c_str()) <0){
                        najdolgPalindrom =s;
                    }
                }
            }
        }
    }
    if (najdenBaremEden) {
        cout<<najdolgPalindrom<<endl;
    } else {
        cout<<"NEMA"<<endl;
    }
    return 0;
}
