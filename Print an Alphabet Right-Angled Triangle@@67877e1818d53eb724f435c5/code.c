#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int j=65; j<=64+i; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}