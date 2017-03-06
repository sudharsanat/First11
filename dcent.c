#include<stdio.h>
int E();
int E1();
int T();
int T1();
int F();
char w[10];
int i=0;
void main()
{
int e=0;
printf("enter the string for parsing");
gets("%S",w);
e=E();
if(e==1)
{
 
 if(w[i]=='$')
{
printf("string parsed");
}
else
printf("string not parsed");
}
else
printf("string not parsed");
}
int E()
{
int t=0,e1=0;
t=T();
if(t==1)
{
e1=E1();
if(e1==1)
{
return 1;
}
}
else 
return 0;
}
int E1()
{
int e1=0,t=0;
if(w[i]=='+')
{
i++;
e1=T();
if(e1==1)
{
t=E1();
if(t==1)
{
return 1;
}
}
}
else
{
return 1;
}
}
int T()
{
int t1=0,f=0;
f=F();
if(f==1)
{
t1=T1();
if(t1==1)
{
return 1;
}
}
else
 return 0;
}
int T1()
{
int f=0,t1=0;
if(w[i]=='*')
{
i++;
f=F();
if(f==1)
{
t1==T1();
if(t1==1)
{
return 1;
}
}
}
else
return 1;
}
int F()
{
int f1=0;
if(w[i]=='(')
{
i++;
f1=E();
if(f1==1)
{
if(w[i]==')')
{
i++;
return 1;
}
}
}
else if(w[i]=='d')
{
i++;
return 1;

}
else
return 0;
}
