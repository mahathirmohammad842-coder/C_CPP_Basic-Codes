#include<stdio.h>

int main()
{
char colour;

printf("Enter your colour : ");
scanf("%c", &colour);

   switch(colour) {
   case 'R':
  printf("RED");
  break;
  case 'r':
  printf("RED");
  break;
  case 'g':
  printf("GREEN");
  break;
  case 'B':
  printf("BLUE");
  break;
  case 'b':
  printf("BLUE");
  break;

  default:
    printf("BLACK");
    break;

    return 0;

}
}
