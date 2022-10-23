#include <stdio.h>
#include <string.h>

int main() {
    char UserInput[200];
    char twoDimArray[200][200];
    int twoDimArrayFirstIndex = 0;

    fgets(UserInput, sizeof UserInput, stdin);

    for(int i = 0, twoDimArraySecIndex = 0; i < strlen(UserInput); i++, twoDimArraySecIndex++){
        if (UserInput[i] == ' ' && UserInput[i + 1] != ' '){
            twoDimArrayFirstIndex++;
            twoDimArraySecIndex = -1;
        } else{
            (twoDimArray[twoDimArrayFirstIndex][twoDimArraySecIndex] = UserInput[i]);
        }
    }
    puts(twoDimArray[2]);
}
