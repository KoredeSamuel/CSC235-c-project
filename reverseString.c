#include <stdio.h>
#include <string.h>

int main(){
    char text[50];
    // --- Get the string to be reversed ---
    printf("Enter String to be reversed: ");
    gets(text);

    // --- use for loop to reverse the string ---
    int length  = strlen(text);
    printf("\nReversed String: ");

    for (int i = length-1; i >=0; i--){
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;

}