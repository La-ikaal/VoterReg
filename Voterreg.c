#include <stdio.h>
#include <stdbool.h>
typedef enum {Yes, No} boolean;
int main(){
        bool doyouhaveaNationalID = Yes;
	int age;
	int id;
	char First_name[10];
	char Second_name[10];
	int ccode;
        char cname [10];
	char Cname [10];
	char state [10];
	printf("PLEASE LOG IN BELOW\n\n");
	printf("ENTER YOUR NATIONAL ID NUMBER:\n\n ");
	scanf("%d", &id);
	printf("PLEASE ENTER YOUR AGE:\n\n ");
	scanf("%d", &age);

	if (age>= 18 ){
		printf("ENTER YOUR DETAILS BELOW TO REGISTER\n\n");
		
		printf("Enter Your first name:\n");
		scanf ("%s",  First_name);
		printf("Enter Your second name:\n");
		 scanf("%s", Second_name);
		printf("Enter your County name:\n\n");
		 scanf("%s", cname);
		 printf("Enter your Country name:\n\n");
		scanf ("%s", Cname);
	        printf("Enter your state or Region:\n\n");
	        scanf ("%s", state);
		printf ("Enter county code:\n\n");
		scanf("%d",  &ccode);

		printf("thank you for registering %s \n\n", First_name);
	}
	else {
		printf("You are not of voting age!");
	}
	return 1;
}
