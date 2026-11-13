// На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во истиот ред.
//   Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита бројот 0.

#include <iostream>
using namespace std;
int main(){
int n;
    while (cin>>n && n != 0) {
        int maxb = 0;
        int maxcifra = 0;
        for (int i =0; i < n; i++) {
            int momentalen;
            cin>>momentalen;
            int tmp = momentalen;
            while (tmp >= 10) {
                tmp = tmp / 10;
            }
            int najgolema = tmp;
            if (najgolema > maxcifra) {
                maxcifra = najgolema;
                maxb = momentalen;
            }
        }
        cout<<maxb<<endl;
    }
    return 0;
}
