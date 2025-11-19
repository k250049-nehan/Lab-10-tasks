#include <stdio.h>
#include <string.h>
int main(){
    char students[4][20]={"Alice","Bob","Charlie","Diana"};
    char courses[4][5][30]={
        {"Math","Physics","English"},
        {"Computer","Math"},
        {"Math","Physics","Chemistry","Computer"},
        {"History","Physics","Math"}
    };
    int courseCount[4]={3,2,4,3};
    printf("=== Student Course List ===\n\n");
    for(int i=0;i<4;i++){
        printf("%s is taking: ",students[i]);
        for(int j=0;j<courseCount[i];j++){
            printf("%s",courses[i][j]);
            if(j<courseCount[i]-1) printf(", ");
        }
        printf("\n");
    }
    char searchCourse[30];
    printf("\nEnter course to search for: ");
    scanf("%s",searchCourse);
    printf("\nStudents taking %s:\n",searchCourse);
    int found=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<courseCount[i];j++){
            if(strcmp(courses[i][j],searchCourse)==0){
                printf("- %s\n",students[i]);
                found=1;
                break;
            }
        }
    }
    if(found==0){
        printf("No students found taking this course.\n");
    }
    printf("\n=== Overloaded Students with more than 3 courses===\n");
    int overloadFound=0;
    for(int i=0;i<4;i++){
        if(courseCount[i]>3){
            printf("- %s (%d courses)\n",students[i],courseCount[i]);
            overloadFound=1;
        }
    }
    if(overloadFound==0){
        printf("No overloaded students.\n");
    }
    return 0;
}