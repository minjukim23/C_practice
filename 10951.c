#include <stdio.h>

int main(void) {

    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF) {
        printf("%d\n",a+b);
    }
    return 0;
}

// 출력초과가 나왔던 이유는 while문의 끝을 정해놓지 않았기 때문
// EOF는 End Of File의 약자로 파일의 끝을 표현하기 위해 -1로 정의된 상수