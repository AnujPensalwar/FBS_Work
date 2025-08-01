#include<stdio.h>
void main(){
	for(int start=1;start<=10000;start++){
		int num=start;
		int temp=num;
		int count=0;
		while(temp>0){//gives count of digit
			temp=temp/10;
			count++;
		}
		temp=num;
		int sum=0;
		while(temp>0){
			int rem=temp%10;
			int pow=1;
			for(int i=1;i<=count;i++){
				pow=pow*rem;
			}
			sum=sum+pow;
			temp=temp/10;
		}
		if(num==sum) printf("%d\n",start);
	}
	
}