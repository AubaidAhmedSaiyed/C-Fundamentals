#include <stdio.h>


int sayName(int age, char name[]){
  // printf("Hello, World!\n");
  // //   //here %s is a place holder which will hold the variable name
  //   printf("heelo my name and age is %s and %d\n", name ,age);
    
    return age; 
}


//This is main function

void main()
{
  
  
  char name[]="AUBAID";
  int age=17;
  //   printf("Hello, World!\n");
  //   //here %s is a place holder which will hold the variable name
  //   printf("heelo my name and age is %s and %d\n", name ,age);
  
    int meriAge = sayName(age, name);
    printf("%d", meriAge);
    
    
}