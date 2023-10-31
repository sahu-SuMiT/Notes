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

//code
  #include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    
    }pokemon;
    pokemon arr[3];//arr[0] ,arr[1]
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"Charizard");

    arr[1].attack=150;
    arr[1].hp=100;
    arr[1].speed=130;
    arr[1].tier='S';
    strcpy(arr[1].name,"Mewtwo");

    arr[2].attack=50;
    arr[2].hp=30;
    arr[2].speed=80;
    arr[2].tier='B';
    strcpy(arr[2].name,"Pikachu");

    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);printf("%d\n",arr[i].speed);printf("%c\n",arr[i].tier);
        printf("%s\n",arr[i].name);
        printf("\n");
          }
}return 0;
}//code ends here


