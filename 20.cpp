// Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.

// Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред.

// Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.

// Забелешка: ЗАБРАНЕТО е користење на глобални променливи.


#include <iostream>
using namespace std;

int maksimalna_Cifra_od_Eden_br(int n) {
    while(cin>>n) {
        int tmp = n;
        int prethodenpogolem = 0;
        while (tmp > 0) {
            int brtekoven = tmp % 10;
            if (brtekoven > prethodenpogolem) {
                prethodenpogolem = brtekoven;
            }
            tmp = tmp / 10;
        }
        cout<< prethodenpogolem<<endl;
    }
}

int main() {
int n;
    maksimalna_Cifra_od_Eden_br(n);
    return 0;
}
