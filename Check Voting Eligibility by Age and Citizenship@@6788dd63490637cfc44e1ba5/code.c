// Your code here...
#include <stdio.h>
int main(){
    int age, n;
    scanf("%d",&age);
    scanf("%d",&n);
    if (n==1 && age>=18) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}