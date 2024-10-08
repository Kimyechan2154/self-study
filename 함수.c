/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _crt_secure_no_warnings
#include <stdio.h>


// (리턴타입) (함수의 이름)(인자/variable) 12:51

// void star(int type){
    
//     if(type == 1){
//     printf("**********\n");
//     }
//     else if(type ==2){
//         printf("@@@@@@@@@@@@\n");
//     }
//     else{
//         printf("error\n");
//     }
    
//     return;
// }

// void at(){
//     printf("@@@@@@@@@\n");
// }
int star(int type){
    
    if(type == 1){
    printf("**********\n");
    return 11;
    }
    else if(type ==2){
    
       printf("@@@@@@@@@@@@\n");
       return 22;
    }
    else{
        printf("error\n");
       
    }
    
     return 33;
}


int main(){
    
    int msg;
    
   printf("안녕..\n");
   msg = star(1);
   printf("반가워..\n");
   msg = star(2);
   printf("오늘은 힘드네..\n");
   msg = star(1);
    
    printf("%d\n %d\n %d", msg, msg, msg);
    
    return 0;
}

// int main(){
    
//     int lap[5];
//     int i, j, k;
    
//     printf("5학생의 성적을 입력하시오\n");
    
//     for(i=0; i<5; i++){
//         scanf("%d", &lap[i]);
//     }
    
//     j = lap[0];
    
//     for(k=0; k<5; k++){
//     if(lap[k] > j){
//         j = lap[k];
//     }
//     }
    
    
//     float avg;
//     avg = 0;
    
//     for(i=0; i<5; i++){
//         avg += lap[i];
//     }
    
//     avg /= 5;
    
    
//     printf("학생 점수의 평균 값은 %.2f점 이고 최대값은 %d점이다..", avg, j);
    
    
    
//     return 0;
// }



// int main(){
    
//     int lap[5];
//     int i, j, k;
    
//     printf("5학생의 성적을 입력하시오\n");
    
//     for(i=0; i<5; i++){
//         scanf("%d", &lap[i]);
//     }
    
//     j = lap[0];
    
//     for(k=0; k<5; k++){
//     if(lap[k] > j){
//         j = lap[k];
//     }
//     }
    
    
//     int avg;
//     avg = 0;
    
//     for(i=0; i<5; i++){
//         avg += lap[i];
//     }
    
//     avg /= 5;
    
    
//     printf("학생 점수의 평균 값은 %d점 이고 최대값은 %d점이다..", avg, j);
    
    
    
//     return 0;
// }


// int main(){
    
//     int lap[5];
//     int i;
    
//     for(i=0; i<5; i++){
//         scanf("%d", &lap[i]);
//     }
    
//     int j,k;
//     k = 0;
//     scanf("%d", &j);
    
//     for(i=0; i<5; i++){
//       if(lap[i] == j)
      
    
//     {k = k+1;}
        
//     }
    
//     printf ("%d", k);
    
//     return 0;
// }


// int main(){
    
//     int a[5];
    
//     int i;
    
//     for(i=0; i<5; i++){
//       scanf("%d", &a[i]); 
//     }
    
//     int b;
    
//     scanf("%d", &b);
    
//     b -= 1;
    
//     printf("%d", a[b]);
    
//     return 0;
// }
// int main(){
    
//     int a[5];
    
//     int i;
    
//     for(i=0; i<5; i++){
//       scanf("%d", &a[i]); 
//     }
    
//     for(i=4; i>-1; i--){
//     printf("%d\n", a[i]);}
    
    
//     return 0;
// }
// int main()
// {

//     int a [2][2];
//     char a[6] = {'c', 'h', 'a', 'n', 'i', '\0'};
//     char b[6] = "chani";
//     char c[] = "chani";
    
    
//     printf("%d", sizeof(a));
//     printf("\n%d", sizeof(b));
//     printf("\n%d", sizeof(c));
    
//     return 0;
// }


// int main()
// {
//     int a[10] = {4,6,35,24,6,4,75,235,87};
    
//     float avg;
    
//     int i;
    
//     printf("%d", a[5]);
    
//     avg = 0;
    
//     for(i=0; i<10; i++){
//         avg += a[i];
       
//     }
    
//     avg /= 10;
    
//     printf("%f\n", avg);
    
//     return 0;
// }
// #include <stdio.h>

