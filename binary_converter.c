#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *data = getenv("QUERY_STRING");
    //char data[] = "number=12"; USED FOR DEBUGGING
    const char s[] = "=";
    char *token;

    // number parameter
    token = strtok(data, s);

    // number value
    token = strtok(NULL, s);
    
    int number = atoi(token);
    //printf("%d\n", number); USED FOR DEBUGGING
    
    //Algorithm for converting decimal to binary
    int binary[100];
    int counter = 0;
    while (number!=0) {
        int temp = number/2;
        if ((number%2) == 0) {
            binary[counter] = 0;
        } else {
            binary[counter] = 1;
        }
        number = temp;
        counter++;
    }
    int length = counter-1;
    printf("Content-type: text/html\n\n<html><head><title>binary</title></head><body>");
    for (; length>=0; length--) {
        printf("%d", binary[length]);
    }
    printf("\n");
    printf("</body></html>");

    return 0;
}
