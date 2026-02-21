#include <stdio.h>

int main() {
    char colour;
    scanf("%c",&colour);

    switch(colour){
    case 'r' : case 'R' :
        printf("RED\n");
        break;

         case 'g' : case 'G' :
        printf("GREEN\n");
        break;


         case 'b' : case 'B' :
        printf("BLUE\n");
        break;


         default:
         printf("BLACK\n");
         break;




    }

    return 0;
}
