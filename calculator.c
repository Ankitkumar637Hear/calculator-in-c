#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define note "DO NOT PLAY with program,enter the valid operator"
void addition();
void subtraction();
void multiplication();
void division();
void power();
void table();
void square();
void cube();
void powerupto10();
void root();
void main ()
{
printf("\t\tWelcome to the Scientific calculator!!\n\n");
int choice;
printf("\n**** press 0 to QUIT the program ****\n");
printf("enter 1 for addition\n");
printf("enter 2 for subtraction\n");
printf("enter 3 for multiplication\n");
printf("enter 4 for dividion\n");
printf("enter 5 for table\n");
printf("enter 6 for power\n");
printf("enter 7 for square\n");
printf("enter 8 for cube\n");
printf("enter 9 for powerupto10\n");
printf("enter 10 for root\n");
printf("enter 11 for exit\n");

while(1){
printf("\n\nEnter the operation you want to do:\n");
scanf("%d",&choice);
switch(choice)
{ case 1:
addition();
break;
case 2:
subtraction();
break;
case 3:
multiplication();
break;
case 4:
division();
break;
case 5:
table();
break;
case 6:
power();
break;
case 7:
square();
break;
case 8:
cube();
case 9:
powerupto10();
break;
case 10:
root();
break;
case 11:
exit(0);
default:
printf("\n****%s****\n",note);
return ;
}
}
}
void addition(){
printf("enter an element\n");
int a,b;
scanf("%d%d",&a,&b);
int sum=a+b;
printf("sum of %d + %d = %d ",a,b,sum);
}
void subtraction(){
printf("enter an element:\n");
int a,b;
scanf("%d%d",&a,&b);

int sub=a-b;
printf("sub of %d ",sub);
}
void multiplication(){
printf("enter an element\n");
float a,b;
scanf("%f%f",&a,&b);

float multi=a*b;
printf("multiplication is a and b is:%f ",multi);
}
void division() {
printf("enter an element\n");
float a,b;
scanf("%f%f",&a,&b);
if(b==0){
    printf("not allow\n");
}
int div=a/b;
printf("div is %f of %f by %f",div,a,b);
}
void table(){
    int a,b;
    printf("Enter the number to print the table of:\n");
    scanf("%d",&a);
    for( int b=1;b<=10;b++){
        printf("%d*%d=%d\n",a,b,a*b);
    }
}
void power(){
    int a,b,c;
    printf("Enter the elements\n");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("%d power %d =%d",a,b,c);
}
void square(){
    int a,b;
    printf("Enter your number\n");
    scanf("%d",&a);
    b=pow(a,2);
    printf("square of %d is%d",a,b);
}
void cube(){
    int a,b;
    printf("Enter your number\n");
    scanf("%d",&a);
    b=pow(a,3);
    printf("cube of %d is %d",a,b);
}
void powerupto10(){
    int a,b,c;
    printf("Enter you number\n");
    scanf("%d",&a);
    for(int b=1;b<=10;b++){
        c=pow(a,b);
    printf("%d power of %d is %d\n",a,b,c);
   }
}
void root(){
    float a,b;
    printf("Enter your number\n");
    scanf("%f",&a);
    b=sqrt(a);
    printf("root of %f is %f",a,b );
}


 