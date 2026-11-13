// Од стандарден влез се вчитува квадратна матрица со n редици и колони. Прво се вчитува бројот n, па потоа и n x n елементите на матрицата.

// Вашата задача е да напишете програма во C++ која ќе определува дали дадената матрица е "магичен квадрат".

// Магичен квадрат е квадратна матрица каде што збирот на елементите во секој ред и колона е ист.

// Доколку матрицата е "Магичен квадрат", да се испечати "True" и да се променат елементите од главната и споредната дијагонала со збирот од елементите што е ист за секоја редица и колона.

// Во спротивно да се испечати "false".



#include <iostream>
using namespace std;
int main(){
int n;
    cin>>n;
    int mat[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }

   int  starasuma = 0;

        for(int j=0;j<n;j++) {
            starasuma += mat[0][j];
        }
    int flag = 0;
            for(int k=1;k<n;k++) {
                int sum1 = 0;
                for(int l=0;l<n;l++) {
                    sum1 += mat[k][l];
                }
                if (sum1 != starasuma) {
                    flag = 1;
                    break;
                }
            }


for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        if(i==j ||i + j == n - 1) {
            mat[i][j] = starasuma;
        }
    }
}
    if (flag == 1) {
        cout<<"False"<<endl;
        return 0;
    }
    if (flag == 0) {
        cout<<"True"<<endl;
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
