#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

char firstupper(char str[], int strlen) {
   int i;
   for(i = 0; i<strlen; i++) {
      if (i == 0 && str[i] != ' ' || str[i] != ' ' && str[i-1] == ' ') {
         if(str[i]>= 'a' && str[i]<= 'z') {
          //  str[i] = (char)(('A'-'a') + str[i] );
          str[i] = str[i] - 32;
         }
         else if (str[i]>= 'A' && str[i]<= 'Z') {
         //str[i] = (char)(str[i] - ('A' - 'a'));
         str[i] = str[i] +32;
      }
      }
      /*else if (str[i] >= 'A' && str[i] <= 'Z') {
         str[i] = (char)(str[i] + ('a' - 'A'));
      }*/

   }
   return str;
}

int main() {
  char str[MAX_SIZE];
    printf("Input : ");
    gets(str);
int strlen = sizeof(str)/sizeof(str[0]);
//firstupper(str);
    //strupr(str);
   // strlwr(str);
    printf("Output : %s", str);

    return 0;
}
