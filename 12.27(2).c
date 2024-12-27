/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long long N;
    
    scanf("%lld", &N);
    
    if(N==1){
        printf("1\n");
        return 0;
    }
    
    int i = 0;
    
    while (1) {
        // 벌집의 i층의 마지막 방 번호 계산
        if (N <= 3*i* i - 3 * i + 1) {
            printf("%d\n", i);
            break;
        }
        i++;
    }
    
    return 0;
}