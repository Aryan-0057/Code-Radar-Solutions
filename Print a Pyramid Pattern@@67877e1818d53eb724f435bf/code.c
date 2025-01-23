#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<n;i++){
        for (int j=1;j<n-i;j++){
            printf(" ");
        }
        for (int a=0;a<num;a++){
            printf("*");
        }
        num += 2;
        printf("\n");
    }
    return 0;
}