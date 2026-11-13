// Од стандарден влез се читаат соодветно низа со M елементи и низа со N елементи, ваша задача е да ги споите двете низи во трета сортирана низа во опаѓачки редослед. 

// Објаснување: Се внесува најпрвин должината на првата низа М, па потоа се чита првата низа, потоа се внесува должината на втората низа N, па втората низа.

// Напомена: Елементите во двете низи кои се внесуваат се сортирани во растечки редослед. Максималната должина на низите е 100. Не смеете да користите алгоритам за сортирање!


#include <iostream>
#include <cstring>
using namespace std;
int main(){
int n;
    cin>>n;
    int nizan[100];
    for(int i=0;i<n;i++) {
        cin>>nizan[i];
    }

    int m;
    cin>>m;
    int nizam[100];
    for(int j=0;j<m;j++) {
        cin>>nizam[j];
    }

    int pomosna[100];

       for(int i=0;i<n;i++) {
           pomosna[i]=nizan[i];
       }

            for(int j=0;j<m;j++) {
                pomosna[n + j] = nizam[j];

            }
    for (int i = 0; i < n + m; i++) {
        for (int k = 0; k < n + m  - 1; k++) {
            if (pomosna[k] < pomosna[k + 1]) {
                int temp = pomosna[k];
                pomosna[k] = pomosna[k + 1];
                pomosna[k + 1] = temp;
            }
        }
    }
    for(int i=0;i<n + m;i++) {
        cout<<pomosna[i]<<" ";
    }



    return 0;
    
    
    
    // #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
// int n;
//     cin>>n;
//     int nizan[100];
//     for(int i=0;i<n;i++) {
//         cin>>nizan[i];
//     }
//
//     int m;
//     cin>>m;
//     int nizam[100];
//     for(int j=0;j<m;j++) {
//         cin>>nizam[j];
//     }
//
//     int pomosna[100];
//
//        for(int i=0;i<n;i++) {
//            pomosna[i]=nizan[i];
//        }
//             for(int j=0;j<m;j++) {
//                 pomosna[n + j] = nizam[j];
//             }
//
//     int i = n - 1;// od kraj
//     int j = m - 1;// od kraj
//     int k = 0;// 0
//
//     while (i >= 0 && j >= 0) {
//         if (nizan[i] > nizam[j]) {
//             pomosna[k] = nizan[i];
//             i--;
//         }else {
//             pomosna[k] = nizam[j];
//             j--;
//         }
//         k++;// za na sledno
//     }
//     for(int i=0;i<n + m;i++) {
//         cout<<pomosna[i]<<" ";
//     }
//     return 0;
// }
}
