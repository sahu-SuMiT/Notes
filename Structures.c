//structures are user defined datatypes
//c c++ java are case sensitive;#include <stdio.h>
#include<string.h>
int main(){
  typedef float realNumber;
  realNumber x=5.4;
  printf("%f",x);
 


  typedef struct Book{
    char name[50];
    int noOfPages;
    float price;
  }PW;

  PW  a;
  PW  b;
  PW  c;
  
  strcpy(a.name,"Physics"); //user defined datatype and input using dot operator
  strcpy(b.name,"Chem");
  strcpy(c.name,"Maths");
  a.noOfPages=100;
  

  printf("\n%s\n",a.name);    //attributes are accessed using dot operator
  printf("%s",b.name);
  printf("\n%d\n",a.noOfPages);

  //nesting of structures in class and objects
   struct pokemon{
       int hp;
       int attack;
       int speed;
   }
   struct legendaryPokemon{
       int specialattack;
       struct pokemon x;


  //pointerProbelm
  int x=5,y=7;
  int * x,y;
  //according to computer int *x and int y;
 // but there is an alternative to treat so
  typedef int * pointer;
  pointer a=&x , b=&y;

//array of structures
  pokemon arr[];
  




  
  return 0;

}

