/*#include <stdio.h>
int main(){
   const PI = 3.14159;
   printf("Enter the radius of the circle");
   scanf("%f", &radius);
   area = PI * radius * radius;
   printf("area: %.2f\n", area);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    //while loop = repeats a section of code possibly unlimited
    //while some condition remains true 
    //a while loop may not execute all
    char name[25];
    printf("/nWhat's your name?:");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    while(strlen(name) == 0)
    {
      printf("\nYou did not enter your name");
      printf("/nWhat's your name?:");
      fgets(name, 25, stdin);
      name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s", name);

    return 0;
}*/
/*#include <stdio.h>
int main(){
char grade;
printf("\nEnter a grade");
scanf("%c",grade);
switch(grade){
  case 'A';
  printf("Perfect!\n");
  break;
  case 'B';
  printf("You did good!\n");
  break;
  case 'C';
  printf("You did okay!\n");
  break;
  case 'D';
  printf("Atleast it's not an E!\n");
  break;
  case 'E';
  printf("FAILED!\n");
  break;
  default;
  printf("Please enter only valid grades");
}

  return 0;
}*/
/*#include <stdio.h>
int main(){
  const PI = 3.141569
  printf("Enter a value for your radius");
  scanf("%f", radius);
  Area = PI * radius * radius;
  printf("area: %.2f\n", area);

  return 0;
}*/
/*#include <stdio.h>
int main(){
  const PI=3.1459;
  printf("Enter a value for your radius");
  scanf("%f",&radius);
  area = PI * radius * radius;
  printf("area:%.2lf/n",area);
  return 0;
}*/
/*#include <stdio.h>
int main (){
  struct Student student1 = {"Spongebob",3.0};
  struct Student student2 = {"Patrick",2.5};
  struct Student student3 = {"Sandy",4.0};
  struct Student student4 = {"Squidward",2.0};
  struct Student students[] = {student1, student2, student3, student4};
   for(int i=0; i< sizeof(students)/sizeof(students[0]); i++)
   {
    printf("%-12s/t", students[i].name);
    printf("%f/n", students[i].gpa);
   }
   
  return 0;
}*/
/*# include <stdio.h>
int main(){
  int length =5;
  int width = 4;
  int area;
  area= length * width;
  printf("length is: %d\n",length);
  printf("width is: %d\n",width);
  printf("area of a rectangle is: %d",area);

  return 0;
}*/
#include <stdio.h>
int main(){
FILE *pF= fopen("test.txt" ,"a");

fprintf(pF, "\nSpongebob Square");

fclose(pF);

  return 0;
}
