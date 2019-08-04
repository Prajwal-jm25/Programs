#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a,b,c,i,j,k,m,t,p,o,d,e,r,f,g,sum=0,csum=0;/**/
char name[20];
system("clear");
printf("***********welcome to game************\n");
printf("press 1 to continue or 0 to exit\n");
scanf("%d",&a);
if(a==0){
return 0;
}
else{
h:
printf("enter the number of overs u want to play(not exceeding 10 overs)\n");
scanf("%d",&o);
if(o>10||o<=0){
printf("It is not possible enter overs within 10\n");
goto h;}
d=o*6;
printf("number of balls is %d\n",d);
printf("TOSS==select\n1:Odd\n2:Even\n");}
n:
printf("enter the choice\n");
scanf("%d",&t);
if(t>2||t<=0){
printf("not possible\n");
goto n;}
else{
printf("enter the number\n");
scanf("%d",&m);
p=rand()%6+1;
printf("computer hits %d\n",p);}
{
switch(t)
{
case 1:
{
if((p+m)%2!=0){
printf("hurrah......you won the toss\n");
printf("what do u like to choose!....\n");
printf("1:Batting\n2:Bowling\n");
printf("enter the choice\n");
scanf("%d",&b);}
else{
printf("oops......you lost the toss\n");
e=rand()%7+1;
if(e==3||e==5||e==7||e==4)
{
printf("computer choose to bat first\n");}
if(e==1||e==2||e==6)
{
printf("computer choose to bowl first\n");}
if(e==3||e==5||e==7||e==4){
goto x;}
else{
goto y;}}
break;}
case 2:{
if((p+m)%2==0){
printf("hurrah......you won the toss\n");
printf("what do u like to choose!....\n");
printf("1:Batting\n2:Bowling\n");
printf("enter the choice\n");
scanf("%d",&b);}
else{
printf("oops......you lost the toss\n");
e=rand()%7+1;
if(e==3||e==5||e==7||e==4)
{
printf("computer choose to bat first\n");}
if(e==1||e==2||e==6)
{
printf("computer choose to bowl first\n");}
if(e==3||e==5||e==7||e==4){
goto x;}
else{
goto y;}}
break;}
}}
{
z:
switch(b)
{
case 1:
y:
{
system("clear");
printf("YOU ARE BATTING FIRST\n");
printf("RULES of the GAME\n");
printf("1:you are not supposed to put 0\n");
printf("2:you are not supposed to put number greater than 6\n");
printf("WARNING:::IF YOU HIT NUMBER MORE THAN 6 THEN YOU ARE OUT OF THE GAME\n");
printf("3:If your number and the computers number is same then you are out\n");
printf("1:for agreeing and abiding by the rules\n 0:for exit\n");
scanf("%d",&a);
if(a==1){
printf("game started\n");
c=1;
while(c<=d)
{
printf("\nEnter the number you want to hit\n");
scanf("%d",&f);
if(f>6||f<=0){
printf("warning!!!!\n");
exit(0);}
c+1;
i=rand()%6+1;
printf("\ncomputer bowls\n%d",i);
d--;
if(i==f)
{
printf("\noops...... you are  out\n");
printf("your score is %d\n",sum);
printf("target for computer is %d\n",sum+1);
goto q;}
else{
sum=sum+f;
continue;
}
}
printf("\n*****your batting is over*****\n");
printf("your score is %d\n",sum);
printf("target for computer is %d\n",sum+1);
q:
printf("now computer is batting---\n");
k=1;
d=o*6;
while(k<=d)
{
u:
printf("\nenter the number you want to bowl\n");
scanf("%d",&g);
if(g>6||g<=0){
printf("you cant bowl that number\n");
goto u;}
k+1;
j=rand()%6+1;
printf("\ncomputer hits\n%d",j);
if(g==j)
{
printf("\ncomputer got out\n");
printf("computer score is %d\n",csum);
printf("congrats you won\n");
exit(0);
}
else{
csum=csum+j;
if(csum>sum){
printf("computer score is %d\n",csum);
printf("\ncomputer won\n");
exit(0);}
}
d--;}
printf("batting is over\n");
printf("computer score is %d\n",csum);
if(csum>sum){
printf("computer score is %d\n",csum);
printf("comp won\n");
exit(0);}
else if(csum==sum){
printf("DRAW\n");
}
else{
printf("computer score is %d\n",csum);
printf("you won\n");
}}
else{
return 1;}
break;}
case 2:
x:
{
system("clear");
printf("YOU ARE BOWLING FIRST\n");
printf("RULES of the GAME\n");
printf("1:you are not supposed to put 0\n");
printf("2:you are not supposed to put number greater than 6\n");
printf("WARNING:::IF YOU HIT NUMBER MORE THAN 6 THEN YOU ARE OUT OF THE GAME\n");
printf("3:If your number and the computers number is same then you are out\n");
printf("1:for agreeing and abiding by the rules \n 0:for exit\n");
scanf("%d",&a);
if(a==1){
printf("game started\n");
c=1;
d=o*6;
while(c<=d){
v:
printf("\nenter the number you want to bowl\n");
scanf("%d",&f);
if(f>6||f<=0){
printf("you cant bowl that number\n");
goto v;}
c+1;
i=rand()%6+1;
printf("\ncomputer hits\n%d",i);
d--;
if(i==f)
{
printf("\noops...... computer is  out\n");
printf("computer  score is %d\n",csum);
printf("target for you is %d\n",csum+1);
goto r;}
else{
csum=csum+i;
continue;
}}
printf("\n*****computer batting is over*****\n");
printf("computer score is %d\n",csum);
printf("target for computer is %d\n",csum+1);
r:
printf("now you are batting---\n");
k=1;
d=o*6;
while(k<=d)
{
printf("\nenter the number you want to hit\n");
scanf("%d",&g);
if(g>6||g<=0){
printf("warning!!!!!!\n");
exit(0);}
k+1;
j=rand()%6+1;
printf("\ncomputer bowls %d\n",j);
if(g==j)
{
printf("\nyou got out\n");
printf("your score is %d\n",sum);
printf("comp won\n");
exit(0);
}
else{
sum=sum+g;
if(sum>csum){
printf("your score is %d\n",sum);
printf("\nyou won\n");
exit(0);}
}
d--;}
printf("batting is over\n");
printf("your score is %d\n",sum);
if(sum>csum){
printf("your score is %d\n",sum);
printf("comp won\n");
exit(0);}
else if(sum==csum){
printf("DRAW\n");
}
else{
printf("your score is %d\n",sum);
printf("you won\n");
}}
else{
return 1;
}
break;
}}}}
