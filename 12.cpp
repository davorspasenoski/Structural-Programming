// Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

// Пример:

// Влез:

// 3 6

// 1 2 2 3 4 5

// 1 1 2 2 3 3

// 1 2 3 4 5 6

// Излез:

// 5 1 1



#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,m;
    cin >>n>>m;
    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    int b[100];

    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < m; j++) {
            sum = sum+ a[i][j];
        }
        float prosek = sum / m;
        float najoddalecen = a[i][0];
        
        float max_distanca = abs(a[i][0] - prosek);

        for (int j = 1; j < m; j++) {

            float momentalna_distanca = abs(a[i][j] -prosek);
            if (momentalna_distanca > max_distanca) {
                max_distanca = momentalna_distanca;
                najoddalecen = a[i][j];
            }
        }
        b[i] = najoddalecen;

    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
