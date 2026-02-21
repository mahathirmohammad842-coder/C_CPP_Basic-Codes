#include<stdio.h>

void Bangladesh(){

printf("Asslamu Alaikum");

};

void Afghanistan(){
printf("Kaifa Haluka");

};


int main(){


printf("Enter a character between A and B :");
char ch;
scanf("%c",&ch);


if(ch=='A'){
    Afghanistan();
} else {
Bangladesh();
}

return 0;

}
