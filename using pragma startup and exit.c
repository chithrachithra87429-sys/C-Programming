#include <stdio.h>
#include <stdlib.h>
void start();
void end();
#pragma startup start
#pragma exit end
void start() {
printf("Program is starting.\n");
}
void end() {
printf("Program is ending.\n");
}
int main() {
printf("Inside main function.\n");
return 0;
}
