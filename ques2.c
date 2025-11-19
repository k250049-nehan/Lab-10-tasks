#include <stdio.h>
#include <string.h>
int main(){
    char userEmail[100];
    int posAtIndex=-1;
    printf("Enter your email: ");
    fgets(userEmail, sizeof(userEmail), stdin);
    userEmail[strcspn(userEmail, "\n")]=0;
    for(int i=0;userEmail[i]!=0;i++){
        if(userEmail[i]=='@'){
            posAtIndex=i;
            break;
        }
    }
    if (posAtIndex==-1){
        printf("Invalid email!\n");
        return 0;
    }
    printf("Domain: %s\n", userEmail+posAtIndex+1);

    return 0;
}