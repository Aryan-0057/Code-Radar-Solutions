#include <stdio.h>

int main() {
    int num;
    int n=0;
    scanf("%d",&num);
    for (int i=0; i<num; i++){
        for (int j=1; j<=num-i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}