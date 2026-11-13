// Од стандарден влез се чита еден природен број n.
// Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
// Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxZbir = 0;
    int brojMaxZbir = 0;

    for (int i = 1; i < n; i++) { 
        int zbir = 0;
        for (int j = 1; j <= i/2; j++) { 
            if (i % j == 0) {
                zbir += j;
            }
        }

        if (zbir > maxZbir) { 
            maxZbir = zbir;
            brojMaxZbir = i;
        }
    }

    cout << brojMaxZbir << endl;

    return 0;
}

