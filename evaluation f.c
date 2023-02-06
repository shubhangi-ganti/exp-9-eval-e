#include<stdio.h>

int main(){
    //to find whether the given number is a prime number or not
    
    int n,i,j,count=0;
    printf("enter the number : \n");
    scanf("%d",&n);
    
      for(i=1;i<n;i++){
      count=0;
         for(j=2;j<i;j++){
             if(i%j==0){
             count++;
               }
           
             }
             if(count==0)
             {
               printf("%d\n",i);
             }
             }
             
 return 0;
 }   