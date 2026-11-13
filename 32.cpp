// Од стандарден влез се вчитуваат 2 броја M и N, кои ја означуваат димензијата на матрицата, MxN и потоа се внесуваат елементите во матрицата. Вашате задача е последниот елемент во секој од редовите на матрицата,
//   да го замените со максималниот елемент од таа редица. На крај испечатете ја изменетата матрица и во нов ред среданта свредност на изменетата матицата.

#include <iostream>
using namespace std;
int main() {
int n,m;
    cin>>n>>m;
    int mat[100][100];
    for (int i  =0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>mat[i][j];
        }
    }

    for (int i  =0; i < n; i++) {
        int max = mat[i][0];
        for (int j = 0; j < m; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
        mat[i][m - 1] = max;
    }

    double br = 0, suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            suma = suma + mat[i][j];
            br++;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    float srednavrednost = suma / br;
    cout<<srednavrednost<<endl;



    return 0;
}
