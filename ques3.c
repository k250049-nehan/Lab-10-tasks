#include <stdio.h>
#include <string.h>
int main(){
    char string[200];
    int vowCount=0, consCount=0, digCount=0, spaceCount=0;
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")]=0; 
    for (int i=0;string[i]!=0;i++) {
        char character = string[i];
        if (character=='A' || character=='E' || character=='I' || character=='O' || character=='U' || 
            character=='a' || character=='e' || character=='i' || character=='o' || character=='u') {
            vowCount++;
        }
        else if (character>='0' && character<='9') {
            digCount++;
        }
        else if (character==' ') {
            spaceCount++;
        }
        else if ((character>='A' && character<='Z') || (character>='a' && character<='z')) {
            consCount++;
        }
    }
    printf("Vowels: %d\n", vowCount);
    printf("Consonants: %d\n", consCount);
    printf("Digits: %d\n", digCount);
    printf("Spaces: %d\n", spaceCount);
    return 0;
}