/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N, M;
    
    scanf("%d %d", &N, &M);
    
    int Sum[N], Multiple=0, result=0;
    
    for(int i=0; i<N; i++){
        scanf("%d", &Sum[i]);
    }
    
    for(int j=0; j<N-2; j++){ //3중 루프를 통해 N개중 3개를 뽑아 더하는 모든 경우의 수
    for(int p=j+1; p<N-1; p++){    
    for(int i=p+1; i<N; i++){
        Multiple = Sum[j] + Sum[p] + Sum[i];
        if(Multiple<=M && Multiple>result){ //Multiple이 M보단 작지만 가장 큰것으로 결정
            result = Multiple;
        }
    }}}
    
    
    
    printf("%d\n", result);
    
    return 0;
}