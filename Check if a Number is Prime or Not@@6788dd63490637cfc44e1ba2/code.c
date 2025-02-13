// Your code here...
#include <stdio.h>
int main(){
    int num, cnd=1;
    scanf("%d",&num);
    for (int i=2; i<num; i++){
        if (num%i == 0) cnd=0;
    }
    if (cnd) printf("Prime");
    else printf("Not Prime");
    return 0;
}