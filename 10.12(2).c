/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _crt_secure_no_warnings
#include <stdio.h>

// int main(){
    
//     int n, x;
    
//     scanf("%d %d", &n, &x);
    
//     int a[n] = {0};
    
// }




// int main(){
    
//     int i, a[10000] = {0}, b[10000] = {0};
    
    
//     for(i=0; i<10000; i++){
//     scanf("%d %d", &a[i], &b[i]);
    
//     if(a[i]+b[i] == 0){
//         break;
        
//     } 
    
    
//     }
//     for(int j=0; j<i; j++){
//     printf("%d\n", a[j]+b[j]);
        
//     }    
    
//     return 0;

// }

// int main(){
    
//     int n, i, j, k;
    
//     scanf("%d", &n);
    
    
//     for(i=1; i<n+1; i++){
        
//     for(k = n - i; k>0; k--){
//         printf(" ");
//     }
        
//     for(j=1; j<i+1; j++){
       
//         printf("*");
//     }
//     printf("\n");

//     }
        
    
//     return 0;
// }


int main(){
    int i, n, j;
    
    scanf("%d", &i);
    
    int a[i], b[i], c[i];
    
    for(n=0; n<i; n++){
        scanf("%d %d", &a[n], &b[n]);
        
        c[n] = a[n] + b[n];
        
        
    }
    
     for(j=0; j<i; j++){
        printf("Case #%d: %d + %d = %d\n",j+1, a[j], b[j], a[j]+b[j]);
     }
}



// int main(){
    
//     int n, i, p;
    
//     scanf("%d", &n);
    
//     p = n/4;
    
//     for(i=1; i<p+1; i++){
//         printf("long "); 
//     }
//     printf("int");
    
//     return 0;
// }




// int main(){
//     int i, n, j;
    
//     scanf("%d", &i);
    
//     int a[i], b[i], c[i];
    
//     for(n=0; n<i; n++){
//         scanf("%d %d", &a[n], &b[n]);
        
//         c[n] = a[n] + b[n];
        
        
//     }
    
//      for(j=0; j<i; j++){
//         printf("%d\n", a[j]+b[j]);
//      }
//      return 0;
// }



// int main(){
    
//     int h, m, t;
    
//     scanf("%d %d %d", &h, &m, &t);
    
//     if(m + t < 60){
//         printf("%d %d", h, m+t);
//     }
    
//     else{
//         h += (m+t)/60;
        
//         if(h<24){
//             printf("%d %d", h, (m+t)%60);
//         }
        
//         else{
//             printf("%d %d", h%24, (m+t)%60);
//         }
        
//     }
    
//     return 0;
// }








// int main(){
    
//     int h, m;
    
//     scanf("%d %d", &h, &m);
    
//     if(m>44){
//         printf("%d %d", h, m-45);
//     }
    
//     else if (h>0 && m<45){
//         printf("%d %d", h-1, m+15);
//     }
    
//     else{
//         printf("23 %d", m+15);
//     }
    
//     return 0;
// }


// int main(){
    
//     int a, b;
    
//     scanf("%d %d", &a, &b);
    
//     if(a>0 && b>0) {
//         printf("1");
//     }
    
//     else if(a<0 && b>0) {
//         printf("2");
//     }
//     else if(a<0 && b<0) {
//         printf("3");
//     }
//     else if(a>0 && b<0) {
//         printf("4");
//     }
    
//     return 0;
// }


// int main()
// {
//  int year;
 
//  scanf("%d", &year);
 
 
//  if(year % 400 == 0){
//      printf("1");  
//      }
 
//  else if(year % 100 == 0){
//      printf("0");
//  } 
//  else if(year % 4 == 0){
//      printf("1");  
//      }
//     else{
//         printf("0");
//     } 
     
//  return 0;
// }


// #include <stdio.h>

// int main()
// {
    
//  int a, b, c;
 
//  scanf("%d", &a);
 
//  scanf("%d", &b);
 
 
 
//  printf("%d\n", a*(b%10));
//  printf("%d\n", (a*(b%100-b%10))/10);
//  printf("%d\n", (a*(b%1000-b%100))/100);
//  printf("%d", a*b);
 
 
 
//     return 0;
// }


// int main()
// {
    
//  char a[50];
 
//  scanf("%s", &a);
 
//  printf("%s??!", a);
 
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
    
//   double a, b;
//   scanf("%lf %lf", &a, &b);
   
   
//   printf("%0.9lf", a/b);
   
//     return 0;
// }