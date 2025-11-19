#include <stdio.h>
#include <string.h>
int main(){
    char names[5][50];
    int marks[5];
    int i;
    printf("Enter the names and marks of 5 students:\n");
    for(i=0;i<5;i++){
        printf("\nEnter name of student %d: ",i+1);
        scanf("%s",names[i]);
        printf("Enter marks of %s: ",names[i]);
        scanf("%d",&marks[i]);
    }
    printf("\n-------------------------------------------\n");
    printf("           Student Marks Table              \n");
    printf("-------------------------------------------\n");
    printf("%-15s | %s\n","Name","Marks");
    printf("-------------------------------------------\n");
    for(i=0;i<5;i++){
        printf("%-15s | %d\n",names[i],marks[i]);
    }
    printf("-------------------------------------------\n");
    int topIndex=0;
    for(i=1;i<5;i++){
        if(marks[i]>marks[topIndex]){
            topIndex=i;
        }
    }
    float total=0;
    for(i=0;i<5;i++){
        total+=marks[i];
    }
    float average=total/5;
    printf("\nTop Student: %s with %d marks\n",names[topIndex],marks[topIndex]);
    printf("Class Average: %.2f\n",average);
    return 0;
}