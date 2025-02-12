// Your code here...
#include <stdio.h>
int main(){
    int num, sm=0;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        sm += i;
    }
    printf("%d",sm);
    return 0;
}