// Your code here...
#include <stdio.h>
int main(){
    int num,b;
    scanf("%d",&num);
    scanf("%d",&b);
    printf("%d",(num>>b)&1);
    return 0;
}