#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for (int i=num; i>=1; i--){
        for (int j=1; j<=num; j++){
            printf("%d",j);
        }
    }
    return 0;
}