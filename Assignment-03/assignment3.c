#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void){

    // allocate memory for inputs based on user input
    int str_size = 20;

    char* first_name = (char*) malloc(str_size * sizeof(char));
    char* last_name = (char*) malloc(str_size * sizeof(char));
//    printf("%c\n", strings);

    // get user input
    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);

    //output
    printf("Hello %s %s\n", first_name, last_name);

    //free memory
    free(first_name);
    free(last_name);
    
    return 0;

}
