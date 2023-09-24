/*#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int a,x;
    double b,y;
    char s1[100] = "Rulpi ";
    char s2[100];

    printf("Enter sentence: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    printf("\nEnter first number(int): ");
    scanf("%d", &a);

    printf("\nEnter second number(double): ");
    scanf("%lf", &b);
     x = a + b;
    y = b + b;
    strcat(s1,s2);

    printf("\n%d\n",x);
    printf("\n%lf\n",y);
    printf("\n%s\n", s1);


    return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int j;
    double e;
    char s2[100];

    scanf("%d", & j);
    scanf("%lf", & e);
    scanf("%*[\n]%[^\n]", s2);

    printf("%d",i+j);
    printf("\n%.1lf",d+e);
    printf("\n%s%s",s,s2);

    return 0;

}

