#include <stdio.h>
#include <stdbool.h>
typedef enum {Yes, No} boolean;
int main(){
        bool doyouhaveaNationalID = Yes;
	int age;
	int id;
	char First_name [10];
	char Second_name [10];
	int ccode;
        char cname [10];
	char Cname [10];
	char state [10];
	
	printf("Please enter your ID number: ");
	scanf("%d", &id);
	printf("Please enter your age: ");
	scanf("%d", &age);

	if (age>= 18 ){
		
		printf("Enter Your first name:\n\n");
		fgets (First_name,10, stdin);
	        printf("Enter your second name:\n\n");
		fgets (Second_name,10,stdin);
		 printf("Enter your County name:\n\n");
		fgets (cname,10,stdin);
		 printf("Enter your Country name:\n\n");
		fgets (Cname,10,stdin);
	        printf("Enter your sate or Region:\n\n");
	        fgets (state,10,stdin);
		printf ("Enter county code:\n\n");
		scanf("%d",  &ccode);

		printf("thank you for registering %s", Second_name);
	}
	else {
		printf("You are not of voting age!");
	}
	return 1;
}
