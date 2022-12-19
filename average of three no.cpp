// a program print the three no of average 
#include <stdio.h>
int main() {
    int x,y,z,a=0;
    printf("1st no:\n");
    scanf("%d",&x);
    printf("2nd no:\n");
    scanf("%d",&y);
    printf("3ed no:\n");
    scanf("%d",&z);
    a=((x+y+z)/3);
    printf("the average is:%d",a);

    return 0;
}
