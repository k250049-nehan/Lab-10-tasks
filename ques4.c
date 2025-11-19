#include <stdio.h>
#include <string.h>
int main() {
    char string[200];
    printf("Enter a message: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")]='\0';
    for(int i=0;string[i]!='\0';i++) {
        char character=string[i];
        if(character>='A' && character<='Z') {
            character=((character-'A'+3)%26)+'A';
        }
        else if(character>='a' && character<='z') {
            character=((character-'a'+3)%26)+'a';
        }
        string[i]=character;
    }
    printf("Encrypted message: %s\n", string);

    for(int i=0;string[i]!='\0';i++) {
        char character=string[i];
        if(character>='A' && character<='Z') {
            character=((character-'A'-3+26)%26)+'A';
        }
        else if(character>='a' && character<='z') {
            character=((character-'a'-3+26)%26)+'a';
        }
        string[i]=character;
    }
    printf("Decrypted message: %s\n", string);
    return 0;
}