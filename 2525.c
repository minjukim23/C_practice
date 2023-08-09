#include <stdio.h>

int main(void) {

    int a,b,c;
    scanf("%d %d\n",&a,&b);
    scanf("%d",&c);

    a = a + c/60;
    b = b + c%60;

    if ( b >= 60 ) {
        a = a+ 1;
        b = b-60;
    }

    if ( a >= 24) {
        a = a-24;
    }

    printf("%d %d",a,b);
    return 0;
}