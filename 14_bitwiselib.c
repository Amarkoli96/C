/*
Title: bitwise_lib.c
Date:10-7-2018
Author : vasanthi
Description:This program performs functions like 1)get n_bits
 */

#include <stdio.h>
void bitwise1()								//call to function bitwise1
{
	int k,i,num,temp,n_bits,values;
	printf("enter the number and its n_bits u want\n");
	scanf("%d%d",&num,&n_bits);
	temp = num;
	k = ( 1 << n_bits ) -1;						//creating mask to get n_bits
	num = num & k;							//getting n_bits
	printf("%d bits of %d is %d\n",n_bits,temp,num);
}
void bitwise2()								//call to function bitwise2
{
	int k,i,num,temp,n_bits,value;
	printf("enter the number and it n_bits u want\n "); 
	scanf("%d%d",&num,&n_bits);
	printf("enter the value\n");
	scanf("%d",&value);
	temp = num;     						
	i = value;
	k = ~ ( ( 1 << n_bits ) -1 );					//creating mask to replace n_bits
	num = num & k;
	num = num | value;						//replacing n_bits
	printf("After replacing %d bits of %d with %d is %d\n",n_bits,temp,i,num);
}
void bitwise3()								//call to function bitwise3
{
	int k,lsb,pos,num,temp,n_bits;
	printf("enter the number and its n_bits u want\n");
	scanf("%d%d",&num,&n_bits);
	printf("enter position\n");
	scanf("%d",&pos);
	temp = num;
	lsb = pos - n_bits +1;
	k = ( ( 1 << n_bits ) -1) << lsb;				//creating mask to get n_bits from position
	num = num & k;
	num >>= lsb;							//getting n_bits from position
	printf("%d bits of %d from %d position is %d\n",n_bits,temp,pos,num);
}
void bitwise4()								//call to function bitwise4
{
	int k,i,num,temp,n_bits,value,pos;
	printf("enter the number and it n_bits u want\n "); 
	scanf("%d%d",&num,&n_bits);
	printf("enter the value\n");
	scanf("%d",&value);
	temp = num;
	i = value;
	printf("enter position\n");
	scanf("%d",&pos);
	k = ~ ( ( ( 1 << n_bits ) -1 ) << pos );			//creating mask to replace n_bits position
	num = num & k;
	value = value << pos;
	num = num | value;						//replacing n_bits from position
	printf("After replacing %d bits of %d with %d from %d position is %d\n",n_bits,temp,i,pos,num);
}
void bitwise5() 							//call to function bitwise5
{
	int k,lsb,num,temp,temp1,n_bits,pos,value;
	printf("enter the number and its n_bits u want\n");
	scanf("%d%d",&num,&n_bits);
	printf("enter te positin\n");
	scanf("%d",&pos);
	temp1= num;
	temp=num;
	lsb=pos - n_bits+1;
	k = ( (1 << n_bits ) -1) << lsb;
	num =num & k;
	num >>= lsb;
	value = ( ~num ) & ( ( 1 << n_bits) -1);			//creating mask to toggle
	temp = temp & (~k);
	value = value << lsb;
	temp = temp |value;						//toggling n_bits

	printf("After toggling %d bits of %d from %d position is %d \n",n_bits,temp1,pos,temp);
}
int main()  
{
	int option;
	char choice;
	do
	{
		printf("enter your choice of bitwise operation from list below\n");
		printf("1.get n bits\n2.replace n bits\n3.get n bits from position\n4.replace n bits from position\n5.toggle bits frrom position\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : bitwise1();			//bitwise1 function call
				 break;
			case 2 : bitwise2();			//bitwise2 function call
				 break;
			case 3 : bitwise3();			//bitwise3 function call
				 break;
			case 4 : bitwise4();			//bitwise4 function call
				 break;
			case 5 : bitwise5();			//bitwise5 fuunction call
				 break;
			default : printf("Invalid statement\n");
		}
		printf("Do u want to continue...?\n");
		scanf("\n%c",&choice);
	}
	while( choice == 'y' );
}        
