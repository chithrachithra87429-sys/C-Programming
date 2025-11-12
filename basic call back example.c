#include <stdio.h>
#include <stdio.h>
 void sayHello(){
     printf("Hello,student!you just called me back!\n");
 }
 void studentWork(void(*callbackfunc)()){
     printf("Students  is doing homework...\n");
     callbackfunc();
 }
   int main(){
  studentWork(sayHello);
   return 0;
 }








