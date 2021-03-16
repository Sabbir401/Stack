#include<bits/stdc++.h>
using namespace std;

char *data[5];int max_size=4;
int top=-1;

void push(char *x)
{
	if(top==max_size){
		printf("Overflow\n");
	}
	else
	{
		printf("%s is pushed\n",x);
		top=top+1;
		data[top]=x;		
	}
}
void pop()
{
	if(top==-1){
		printf("Underflow\n");
	}
	else{
		printf("%s is poped\n",data[top]);
		top =top-1;
	}
}
void display()
{
    for(int i=0;i<=top;i++){
   	printf("%s ",data[i]);
   }
}
int main()
{
	push("Sabbir");
	push("Sudiptya");
	pop();
	pop();	
	pop();
    display();
}
