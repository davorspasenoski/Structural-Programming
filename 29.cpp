// Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи. 

// Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.

// Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

// Пример 1.

// Влез

// 12 // бројот N на елементи

// 1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата


// Излез

// Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака




// Пример 2.

// Влез

// 12 // бројот N на елементи

// 7 3 4 5 3 8 4 5 5 3 2 6 // елементи на низата


// Излез

// Nitu eden element ne se pojavuva paren broj pati! // овде функцијата par враќа вредност 0, се печати оваа порака 


// #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
// int n;
//     cin>>n;
//     int niza[100];
//     for (int i = 0; i < n; i++){
//         cin>>niza[i];
//     }
//     int prethodennajmalparen = 0;
//     for (int i = 0; i < n; i++){
//         int tekoven = niza[i];
//         int br = 0;
//         for (int k = 0; k < n; k++){
//             if (tekoven == niza[k]){
//                 br++;
//             }

//             }
//             if (br % 2 == 0) {
//                 if (br % 2 == 0) {
//                     if( prethodennajmalparen == 0 || niza[i] < prethodennajmalparen) {
//                     prethodennajmalparen = tekoven;
//                 }
//             }
//         }
//     }
//     if (prethodennajmalparen > 0){
//         cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<prethodennajmalparen<<endl;
//     }else{
//         cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//  int n;
//     cin>>n;
//     int niza[100];
//     for (int i = 0; i < n; i++) {
//         cin>>niza[i];
//     }

//     int min = 0;
//       for (int i = 0; i < n; i++) {
//           int br = 0;
//           for (int j = 0; j < n; j++) {
//               if (niza[i] == niza[j]) {
//                   br++;
//               }
//           }
//           if (br % 2 == 0) {
//               if(min == 0 || niza[i] < min)
//               {
//                   min = niza[i];
//               }
//           }
//       }
//     if (min > 0) {
//         cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<min<<endl;
//     }else {
//         cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
int par(int niza[], int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        int br = 0;
        for (int j = 0; j < n; j++) {
            if (niza[i] == niza[j]) {
                br++;
            }
        }
        if (br % 2 == 0) {
            if(min == 0 || niza[i] < min)
            {
                min = niza[i];
            }
        }
    }
    return min;
}


int main() {
 int n;
    cin>>n;

    int niza[100];
    for (int i = 0; i < n; i++) {
        cin>>niza[i];
    }

    int rez = par(niza,n);

        if (rez) {
            cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<rez<<endl;
        }else {
            cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
        }
    return 0;
}




