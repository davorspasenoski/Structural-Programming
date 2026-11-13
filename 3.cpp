// Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
// Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
// Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број,
// во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
// Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)




#include <iostream>
using namespace std;

int main() {
int n,m;
    cin>>n>>m;
    if (n <= 0 || m <=0) {
        cout<<"Invalid input"<<endl;
    }else {
        if (n > m) {
            int pos = 1;
            while (n > 0) {
                if (pos % 2 == 0) {
                    int cifra = m % 10;
                    if (cifra == n % 10) {
                        n = n/10;
                        m = m / 10;
                        pos++;
                    }else {
                        cout<<"NE";
                        break;
                    }
                }else {
                    n = n / 10;
                    pos++;
                }
            }if (n == 0 && m == 0) {
                cout<<"PAREN"<<endl;
            }
        }else {
            int pos = 1;
            while (m > 0) {
                if (pos % 2 == 0) {
                    int cifra = n % 10;
                    if (cifra == m % 10) {
                        m = m/10;
                        n = n / 10;
                        pos++;
                    }else {
                        cout<<"NE";
                        break;
                    }
                }else {
                    m = m / 10;
                    pos++;
                }
            }if (n == 0 && m == 0) {
                cout<<"PAREN"<<endl;
            }

        }
    }


    return 0;
}
