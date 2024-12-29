#include<stdio.h>
#include<string.h>
int main(){
	char string[]= "cuong le";
	int size=sizeof(string)/sizeof(string[0]);
	for(int i=0;i<size;i++){
		printf("%c",string[i]);
		printf(" ");
	}
	return 0;
}
