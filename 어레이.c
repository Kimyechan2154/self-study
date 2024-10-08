/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _crt_secure_no_warnings
#include <stdio.h>

int main(){
    
    int lap[5];
    int i;
    
    for(i=0; i<5; i++){
        scanf("%d", &lap[i]);
    }
    
    int j,k;
    k = 0;
    scanf("%d", &j);
    
    for(i=0; i<5; i++){
      if(lap[i] == j)
      
    
    {k = k+1;}
        
    }
    
    printf ("%d", k);
    
    return 0;
}



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


// int main(){
    
//     int i;
    
//     printf("hi \n");
    
//     goto end;
    
//     printf("bye \n");

//     printf("hello \n");
// end:
//     printf("!!end!! \n");

    
//     return 0;
// }

// int main(){
    
//     int i;
    
//     for(i=0; i<10; i++){
//         if(i%2 ==0){
//             continue;
//         }
//         printf("Hello World %d\n", i);
//     }
//     return 0;
// }

// int main(){
    
//     int i;
    
//     srand(time(NULL));    
    
//   while(1){
//         int rnd = rand()%1000+1;
//   printf("%d\n" ,rnd);
//   if(rnd==555){
//       break;
//   }
//   }
//     return 0;
// }

// int main(){
   
//   int i;

//   int j;
   
//   for(i=0; i<10; i++){
//       for(j=0; j<10; j++){
//           printf("%d %d\n", i, j);
//       }
//   }
   
//     return 0;
// }

// int main(){
   
//   int i = 0;
   
//   while(i<10)
// {
//      printf("Hello wrold %d\n" , i);
//      i++;
// }}


// int main(){
   
//   int i;
   
//   for(i=-5; i<1; i++){
//  printf("Hello wrold %d\n" , i);
//   }
//   return 0;
// }





//   char a[10] ={"hello"};
   
   
   
//   printf("당신이 제일 좋아하는 숫자는 무엇입니까");
   
//   scanf("%f", &box);
   
//   printf("\n 당신의 키는 %.2f 입니다", box);