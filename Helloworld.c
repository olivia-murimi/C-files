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

#include <stdio.h>
void birthday()
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
}


    
