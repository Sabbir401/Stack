#include<bits/stdc++.h>
using namespace std;
int arr[5],max_size=4;
int top = -1;

void push(int x)
{
	if(arr[top]<x){
		top=top+1;
		arr[top]=x;
	}
}

void display()
{
    for(int i=0;i<=top;i++){
   	printf("%d\n",arr[i]);
   }
}
int main()
{
	arr[0]=5;
	top=0;
	push(4);
	push(8);
	push(10);
	push(5);
	display();

}
