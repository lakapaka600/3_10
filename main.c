#include <stdio.h>

int main(void) {
    float  biglietto;
    int eta;
    printf("int eta:");
    scanf("%d", &eta);
    if (eta <= 5) {
        biglietto = 0;
    }
    else if (eta <= 10) {
        biglietto = 1;
    }
    else if (eta<=17) {

        biglietto = 1.50;
    }
    else if(eta<=26) {
        biglietto = 2;
    }
   else if(eta>27) {
       biglietto = 3;
   }
    printf("il biglietto costerà : %d", biglietto);
    return 0;
}
