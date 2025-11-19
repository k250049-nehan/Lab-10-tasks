#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    char names[n][50];
    int marks[n];
    for(int i=0;i<n;i++){
        printf("\nEnter name of student %d: ",i+1);
        scanf("%s",names[i]);
        printf("Enter marks of %s: ",names[i]);
        scanf("%d",&marks[i]);
    }
    int index=0;
    for(int i=1;i<n;i++){
        if(marks[i]>marks[index]){
            index=i;
        }
    }
    printf("\nHighest Scorer:\n");
    printf("Name  : %s\n",names[index]);
    printf("Marks : %d\n",marks[index]);
    return 0;
}
