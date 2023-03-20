#include <stdio.h>

int main(){
    char chr;

    printf("Enter a character: ");
    scanf("%c", &chr);
    printf("Character %c have ASCII value %d \n\n",chr, chr);

    printf("Press Any key to continue...\n");
    getch();

    for(int i = 0; i < 128; i++){
        printf("%d is ASCII value of %c\n", i, i);
    }

    return 0;
}
