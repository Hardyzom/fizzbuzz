#include <stdio.h>

int main() {

    int szam;
    for(szam = 1; szam <= 100; szam++){

        if(szam%3 == 0 && szam%5 == 0){
            printf("fizzbuzz\n");
        }
        else if(szam%3 == 0){
            printf("fizz\n");
        }
        else if(szam%5 == 0){
            printf(("buzz\n"));
        }   
        else{
            printf("%d\n", szam);
        }
    }

    return 0;
}