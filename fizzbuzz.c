#include <stdio.h>

int main()
{
    for(int i=1;i<=100; i++){
        if(i%3==0 && i%5==0){
            printf("fizzbuzz\n");
            continue;
        }
        
        if(i%3==0){
            printf("fizz\n");
            continue;
        }
        
        if(i%5==0){
            printf("buzz\n");
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }

    return 0;
}