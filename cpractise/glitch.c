#include <stdio.h>
#include <curses.h>

int main(void)
{
char ch[6];
int unsigned number; //unsigned because age can't be negative
do{
int static count;

printf ("enter the age: ");
ch[count]=getch();


if(ch[count]==13){ //checking if enter is pressed
ch[count]='\0';
break;
};

if((ch<48) || (ch>57)) { //checking if the number is 0 to 9
printf ("error!");
ch[count]='\0';
count-=1;
}

ch[count+1]='\0'; //a string is terminated by a null

gotoxy(1,2);
printf ("%s",ch); //printing the string

count+=1; //increasing the value of count by 1;
}while(1); //no condition is need since pressing enter will do that


number=atoi(ch); //converting the string into integer

gotoxy(1,4);
printf ("Here is the perfect age: %d",number);

getch(); //wait for a ending key press
return 0;
}
