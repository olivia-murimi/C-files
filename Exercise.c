/*#include <stdio.h>
int main(){
   const PI = 3.14159;
   printf("Enter the radius of the circle");
   scanf("%f", &radius);
   area = PI * radius * radius;
   printf("area: %.2f\n", area);
    return 0;
}*/
#include <stdio.h>
int main(){
    //while loop = repeats a section of code possibly unlimited
    //while some condition remains true 
    //a while loop may not execute all
    char name[25];
    printf("/nWhat's your name?:");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    return 0;
}