#include <stdio.h>
#include <string.h>

int main(){
    /* -- variable declarations --*/
    char name[50];
    

    /* -- Get Lecturer's Name --*/
    printf("Enter Lecturer Name (e.g Mr Samuel): ");
    gets(name);
    
    /* Output */
    printf("Hello World %s\n", name);
    

    return 0;
}