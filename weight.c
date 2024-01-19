#include<stdio.h>
//WAP to read the weight of 7 students and count number os students having weight in between 50 to 60 kg using function.
int wm(int[]);
int main(){
	int a[7],i;
	printf("Enter the weight of students.");
	for (i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	printf("Number is %d.",wm(a));
}
int wm(int a[]){
	int i,count=0;
	for(i=0;i<7;i++){
		if(a[i]>=50 && a[i]<=60){
			count++;
		}
	}
	return count;
}
