#include <stdio.h>

int main(){

    /* -- input --*/
    int N;
    printf("Enter N (number): ");
    scanf("%d", &N);
  
    /* -- output --*/
    for (int i = 0; i < N; i++){
        printf("%d\n", i + 1);
    }
    
    return 0;
}