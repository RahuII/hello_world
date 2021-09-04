#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a, b, c;
	printf("Enter 3 numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
    if(a==b){
		if (b == c){
			printf("all number are equal\n");
		}
		else if (b>c){
			printf("value of a and b are equal and smaller no is %d\n ",c);
		}
		else{
			printf("value of a and b are equal and smaller no is %d\n ",c);
		}
		exit(1);
	}
	if(b==c){
		if (b>a){
			printf("value of b and c are equal and smaller no is %d\n ",a);
		}
		else{
			printf("value of b and c are equal and smaller no is %d\n ",a);
		}	
		exit(2);
	}
    if(a>b){
		if(a>c){
			if(b<c){
				printf("The largest and smaller of three numbers are : %d %d\n",a,b);
			}
			else{
				printf("The largest and smaller of three numbers are : %d %d\n",a,c);
			}
		}
		else {
			printf("The largest and smaller of three numbers are : %d %d\n",c,b);
		}
		
	}
	else if(b>c){
		if(c<a){
			printf("The largest and smaller of three numbers are : %d %d\n",b,c);
		}
		else{
			printf("The largest and smaller of three numbers are : %d %d\n",b,a);
		}
		
	}
	else{
		if(b<a){
			printf("The greater and smaller of three numbers are : %d %d\n",c,b);
		}
		else{
			printf("The greater and smaller of three numbers are : %d %d\n",c,a);
		}
	}
}