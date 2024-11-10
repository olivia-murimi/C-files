//#include <stdio.h>
//int main(){
    // This is a comment blah
    /*This is a comment*/
    //printf("I like pizza\n");
    //printf("It's really good\n");
    //printf("1\t2\t3\n4\t5\t6\n7\t8");
    //printf("\"I like pizza\" - Abraham Lincoln probably");
    // variable = allocated space in memory to store a value.
    //int x;// declaration
    //x = 123; //initialization
    //int y = 321; //declaration + initialization
    //int age = 21;
    //float gpa = 2.05; //floating point number containg a decimal %f
    //char grade = 'C';//single character %c
    //char name[] = "Bro";//array of characters %s

    //printf("You are %d years old\n",age);
    //printf("Hello %s\n",name);
    //printf("Your average grade is %c\n",grade);
    //printf("Your gpa is %f\n",gpa);
    //printf("%d\n", j); //int
    //printf("%u\n", k); //unsigned int
    //float item1 = 5.75;
    //float item2 = 10.00;
    //float item3 = 100.99;
    //printf("item 1: $%-8.2f\n", item1);
    //printf("item 2: $%-8.2f\n", item2);
    //printf("item 3: $%-8.2f\n", item3)-
    // const float Pi = 3.14159;
    // printf("%f", Pi);
    //return 0;
//}
//#include <stdio.h>
//int main(){
    //int x = 5;
    //int y = 2;
    //float  z = x/(float)y; 
    //printf("%f", z);
    //int z = x % y;
    //printf("%d", z);
    //x++;
    //y--;
    //int x = 10;
    //x = x+2
    //x+=2;
    //x =x-3;
    //x-=3;
    //x = x*4;
    //x*=4;
    //x = x/ 5;
    //x/5;
    //x = x%2;
    //x%=2;
    //int age;
     //printf("\nHow old are you?");
     //scanf("%d",&age);

     //printf("You are %d years old",age);
    //return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main(){
    //char name[25]; //bytes
    //int age;
    //printf("What's your name?");
    //scanf("%s",&name);
    //fgets(name, 25, stdin);
    //printf("\nHow old are you?");
    //scanf("%d", &age);
    //printf("\nYou are %d years old",age);
    //printf("\nHello %s, how are you", name);
   // double A = sqrt(9);
    //printf("\n%lf",A);
    //double B = pow(2, 4);
    //printf("\n%lf",B);
    //int C = round(3.14);
    //printf("\n%d",C);
    //int D = ceil(3.14);
    //printf("\n%d",D);
    //int E = floor(3.99);
    //printf("\n%d",E);
    //double F = fabs(-100);
    //printf("\nlf");
    //double G = log(3);
    //printf("\nif",G);
    //double H = sin(45);
    //printf("\n%lf",H);
    //double I = cos(45);
    //printf("\n%lf",I);
    //double J = tan(45);
    //printf("\n%lf",J);
    /*#include <stdio.h>
    int main(){
        const double PI = 3.14159;
     double radius;
     double circumference;
     double area;
     printf("\nEnter the radius of a circle:");
     scanf("%lf", &radius);
     circumference = 2 * PI * radius;
     area = PI * radius * radius;
     printf("circumference: %lf", circumference);
     printf("area: %lf", area);

     return 0;
      }*/
    /* #include <stdio.h>
     #include <math.h>

     int main(){
      double A;
      double B;
      double C;

      printf("Enter side A:");
      scanf("%lf", &A);
      printf("Enter side B:");
      scanf("%lf", &B);
      
      C = sqrt(A*A + B*B);
      printf("Side C: %lf",C);
        return 0;
     }*/
    //#include <stdio.h>
    //int main(){
      // int age = 12;
      // if(age >= 18){
        // printf("You are now signed up!");
       //}
       //else if(age == 0){
       //  printf("You have just been born");
       //}
       //else{
         //printf("You are too young to sign up");
       //}



        //return 0;
    //}

 //#include <stdio.h>
 //#include <stdbool.h>

 //int main(){
   
   //logical operators = && (AND)checks if two conditions are true
  // logical operators = (OR) checks if at least one condition is true
  //logical operators = ! (NOT) reverses the state of a condition
 // float temp = -1000;
  //bool sunny = false;
  //if (temp <= 0 || temp >= 30){
    //printf("\nThe weather is good");
  //}
  //else{
    //printf("\nThe weather is bad");
  //}
  // bool sunny = true;
   //if(!sunny){
    // printf("\nIt's sunny outside");
  // }
   //else{
   // printf("\nIt's cloudy outside");
   //}
   //return 0;
 //}   
 //A function is a small section of code that is excuted whenever we call it
 /*#include <stdio.h>
 void birthday()
 {
   printf("\nHappy birthday to you!");
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday dear... YOU!");
  printf("\nHappy birthday to you\n");
 }
 int main()
 {
  birthday();
  birthday();
  birthday();
  return 0;

 }*/
/*#include <stdio.h>
int main(){
  //for loop = repeats a section of code a limited amount of times
  for(int i= 10; i >=10; i--)
  {
    printf("%d\n", i);
  }
   return 0;
}*/

/*#include <stdio.h>
void birthday(char name[], int age)
{
 printf("\nHappy birthday dear %s!",name);
 printf("\nYou are %d years old",age);

}
int main()
{
   char name[] = "Olivia";
   int age = 18;
  birthday(name, age);
  return 0;
}*/

/*#include <stdio.h>
int main (){
  //Array = a data structure that can store many values of the same data type
  double prices[10]= {5.0, 10.0, 15.0, 25.0,  20.0 };
  printf("$%.2lf",prices[0]);

  return 0;
}*/
/*#include <stdio.h>

void printAge(int *pAge)
{
 printf("You are %d years old\n",*pAge);//dereference
}
int main(){
 //pointer = a "variable-like" reference that holds a memory address to another variable, some tasks are performed more easily with pointers
 int age = 21;
 int *pAge = NULL; //good practice to assign NULL if declaring a pointer
 pAge = &age;
 //printf("address of age:%p\n", &age);
 //printf("value of pAge:%p\n", pAge);

 //printf("size of age: %d bytes\n", sizeof(age));
 //printf("size of pAge: %d bytes\n", sizeof(age));
 

 //printf("value of age:%d\n",age);
 //printf("value at stored address: %d/n",*pAge);//deferencing
 printAge(pAge);
  return 0;
}*/
/*#include <stdio.h>
int main(){
  //nested loop = a loop inside of another loop
  int rows;
  int columns;
  char symbol;
  printf("\nEnter # of rows");
  scanf("%d", &rows);
  printf("\nEnter # of columns");
  scanf("%d", &columns);
 
   printf("Enter a symbol to use:");
   scanf("%c",&symbol);
  for(int i=1; i<=rows; i++){
    for(int j=1; j<= columns; j++){
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}*/
/*#include <stdio.h>
int main(){
  int i =0;
  do {
    printf("%d\n",i);
    i++;
  }
  while (i<5);
  return 0;
}*/
/*#include <stdio.h>
#include <string.h>
struct Player
{
   char name[12];
   int score;
};
int main(){
   //struct = collection of related members("variables")
   //they can be of different data
   //listed under one name in a block of 
   //VERY SIMILAR to classes in another language
   struct Player player1;
   struct Player player2;

  return 0;
}*/

/*#include <stdio.h>
struct myStructure{
  int myNum;
  char myLetter;
};
int main(){
  struct myStructure S1;
  S1.myNum = 13;
  S1.myLetter = 'B';

  printf("My number:%d\n",S1.myNum);
  printf("My letter:%c\n",S1.myLetter);
  return 0;
}*/
/*#include <stdio.h>
struct myStructure{
  int myNum;
  char myLetter;
};
int main(){
struct myStructure s1;
struct myStructure s2;

s1.myNum = 13;
s1.myLetter ='B';

s2.myNum = 20;
s2.myLetter ='C';

printf("s1 number:%d\n",s1.myNum);
printf("s1 letter:%c\n",s1.myLetter);
printf("s2 number:%d\n",s2.myNum);
printf("s2 letter:%c\n",s2.myLetter);
}*/
/*#include <stdio.h>
struct myStructure {
  int myNum;
  char myLetter;
  char myString;
};
int main(){
  struct myStructure s1;
  strcpy(s1.myString, "OLIVIA!!");
  printf("%d %c %s",s1.myNum,s1.myLetter,s1.myString);
  return 0;
}*/
/*#include <stdio.h>
#include <string.h>
struct Player
{
  char name [12];
  int score;
}; 
int main(){
  struct Player player1;
  struct Player player2;
  strcpy(player1.name, "Bro");
  player1.score = 4;
  strcpy(player2.name, "Bra");
  player1.score = 5;
 
 printf("%s\n", player1.name);
 printf("%d\n", player1.score);
 
 printf("%s\n", player2.name);
 printf("%d\n", player2.score);

  return 0;
}*/
#include <stdio.h>
#include <string.h>
struct Student
{
  char name[12];
  float gpa;
};

int main (){
   struct Student student1 ={"Spongebob",3.0};
   struct Student student2 ={"Patrick",2.5};
   struct Student student3 ={"Sandy",4.0};
   struct Student student4 ={"Squidward",2.0};

   struct Student students[] ={student1, student2, student3, student4,};
   for(int i=0; 1<sizeof(students)/sizeof(students[0]);i++)
   {
    printf("%s", students[1]);
   }

  return 0;
}

    
