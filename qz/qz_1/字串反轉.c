#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    int len = strlen(a);    //取字元數 若abc = 3
    for (int i = len-1; i>=0; i--) {    //i=2 to 0, 做3次
        printf("%c", a[i]); 
    }
    printf("\n");
    return 0 ;
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
   char str[50];
   int len;

   strcpy(str, "This is runoob.com");

   len = strlen(str);
   printf("|%s| 的长度是 |%d|\n", str, len);
   
   return(0);
}
*/
