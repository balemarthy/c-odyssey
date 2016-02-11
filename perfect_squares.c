 #include <stdio.h>
  
 int mysqrt(int);
 int main(void)
 {
     int small_num,large_num,count,i;
     count = 0;
  
     scanf("%d %d",&small_num,&large_num);
  
     while((small_num < 0 || large_num < 0)||
           (small_num > 100000 || large_num > 100000)){
         printf("Please enter positive integers below 100000\n");
         scanf("%d %d",&small_num,&large_num);
     }
     for(i = small_num; i <= large_num; i++){
         if(mysqrt(i)){
            count++;
         }
     }
     
     printf("%d",count);
     return 0;
 }

 
 int mysqrt(int num)
 {
     int i;
     for(i = 0; i<=num; i++) {
       if((i*i) == num){
           break;
       } else {
           continue;
       }
     }
     if((i*i) == num) {
        return 1;
     } else {
        return 0;
     }
 }
     
