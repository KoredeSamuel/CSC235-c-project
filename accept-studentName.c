#include <stdio.h>


int main(){
    /* create a 2 dimensional array (string array) to store students name */
    char student[10][20];

    /* -- use loop to get names of 10 students and store in the string array -- */
    for (int i = 0; i < 10; i++){
        printf("Enter Student %d: ", i+1);
        gets(student[i]);
    }

    /* -- Fancy Design -- */
    for (int i = 0; i < 30; i++)
    {
        printf("-");
    }
    printf("\n STUDENT LIST \n");

    for (int i = 0; i < 30; i++)
    {
        printf("-");
    }
    printf("\n");
    /* -- end design --*/
    
    /* -- print student list */
    for (int i = 0; i < 10; i++) {
        printf("student %d: %s\n", i+1, student[i]);
    }
    
}