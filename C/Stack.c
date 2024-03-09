#include<stdio.h>
#include <process.h>
int s[5], t=-1;
#define ms 4
void push(int);
int pop();
void display(){
int i;
printf("\nStack Content");
for(i=t; i>=0; i--)
printf("\t %d \t", s[i]);
}
void main(){
int op, v, it;
while(100) {
printf("\n Enter 1 to Push \n Enter 2 to Pop \n Enter 3 to Exit \n Enter your choice");
scanf("%d", &op);
switch(op){
case 1:
printf("\n Enter an Item to push :");
scanf("%d", &it);

push(it);
break;
case 2:
v=pop();
if (v>0)
printf("\n\n %d is poped from the stack", v);
break;
case 3:
exit(0);
}
}
}
void push(int x){
if (t==ms)
printf("\n OVERFLOW");
else{
t=t+1;
s[t]=x;

}
display();
}
int pop(){
int v1=-999;
if (t<0)
printf("\n UNDERFLOW");
else{
v1=s[t];
t=t-1;
}
display();
return v1;
}