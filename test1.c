#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
  int i = 0;
  char bar[102];
 const  char * lable = "|/-\\";
 memset(bar,0,sizeof(bar));
 while(i<=100)
 {
   printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
   fflush(stdout);
   usleep(100000);
   bar[i++] = '#';
 }
 printf("\n");
 return 0;
}
