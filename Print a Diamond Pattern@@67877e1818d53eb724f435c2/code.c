#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=num; i>=0; i--){
        for (int j=1; j<=num; j++){
            if (j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
    }
    return 0;
}