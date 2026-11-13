// За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2) и елементите на матрицата (реални броеви). Нека X e збирот од елементите под главната дијагонала во матрицата А. Нека Y е збирот од елементите под споредната дијагонала во матрицата А. Да се креира нова матрица B на следниот начин:

// сите елементи од главната дијагонала во матрицата B треба да имаат вредност X

// сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y

// ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y

// сите останати елементи во матрицата B имаат вредност 0

// Новата матрица B да се испечати на стандарден излез.


// Input

// 3
// 101 202 303
// 11 22 33
// 1 2 3


//   Output
//   14 0 38
// 0 52 0
// 38 0 14



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     double a[100][100];
//     double y =0;
//     double x = 0;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>a[i][j];
//             if (i > j) {

//                 x = x + a[i][j];
//             }

//              if (i + j > n -1) {
//                 y = y + a[i][j];
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){

//             int glavna = (i == j);
//             int sporedna = (i + j == n - 1);

//             if (glavna && sporedna) {
//                 cout<<x + y<<" ";
//             }else if (glavna ){
//                 cout<<x<<" ";
//             }else if (sporedna){
//                 cout<<y<<" ";
//             }else {
//                 cout<<0<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
    int  n;
    cin>>n;
    float mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    float x = 0;
    float y = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
            x = x + mat[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                y = y + mat[i][j];
            }
        }
    }



    float matb[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j){
                matb[i][j] = x;
            }
            if (i + j == n - 1){
                matb[i][j] = y;
            }
            if (i == j && i + j == n - 1) {
                matb[i][j] = x + y;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<matb[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     float mata[100][100];
//     float matb[100][100];
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>mata[i][j];
//         }
//     }
//     float suma1 = 0, suma2 = 0;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++){
//             if (i > j) {
//                 suma1 = suma1 + mata[i][j];
//             }
//             if (i + j  > n - 1){
//                 suma2 = suma2 + mata[i][j];
//             }
//         }
//     }
//
//     for (int i =0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j && i + j == n - 1) {
//                 matb[i][j] = suma1 + suma2;
//             }else  if (i == j) {
//                 matb[i][j] = suma1;
//             }else if (i + j == n -1) {
//                 matb[i][j] = suma2;
//             }else {
//                 matb[i][j] = 0;
//             }
//         }
//     }
//
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<matb[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//
//     return 0;
// }


