// Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

// Пример:

//  111100110011
 
// 1 ред + 1 колона = 2


  #include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>mat[i][j];
        }
    }

    int br_kol = 0;
    int br_red = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 2; j++) {
            if (mat[i][j] == 1 && mat[i][j + 1] == 1 && mat[i][j + 2] == 1) {
                br_red++;
                break;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 2; i++) {
            if (mat[i][j] == 1 && mat[i + 1][j] == 1 && mat[i + 2][j] == 1) {
                br_kol++;
                break;
            }
        }
    }
    cout<<br_kol + br_red<<endl;



    return 0;

}
