#include <stdio.h>
#include <string.h>
int main(){
    char categories[3][20]={"Appetizers","Main Course","Desserts"};
    char items[3][3][30]={
        {"Spring Rolls","Garlic Bread","Dynamite Prawn"},
        {"Chicken Roast","Fetuccini Pasta","Beef Burger"},
        {"Cheese Cake","Ice Cream","Pudding"}
    };
    float prices[3][3]={
        {5.50,4.75,6.00},
        {12.00,11.50,9.50},
        {6.50,3.75,3.00}
    };
    printf("======= Welcome to Our Restaurant =======\n\n");
    for(int i=0;i<3;i++){
        printf("---- %s ----\n",categories[i]);
        for(int j=0;j<3;j++){
            printf("%-20s $%.2f\n",items[i][j],prices[i][j]);
        }
        printf("\n");
    }
    printf("=== Budget-Friendly Items ===\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(prices[i][j]<10.0){
                printf("%-20s (%s) $%.2f\n",items[i][j],categories[i],prices[i][j]);
            }
        }
    }
    return 0;
}