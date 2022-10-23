#include <stdio.h>
#include <string.h>

int main() {
    char input[200];
    char output[200][200];
    int k = 0;

    fgets(input, sizeof input, stdin);

    for(int i = 0, j = 0; i < strlen(input); i++, j++){
        if (input[i] == ' ' && input[i + 1] != ' '){
            k++;
            j = -1;
        } else{
            (output[k][j] = input[i]);
        }
    }
    puts(output[2]);
}
