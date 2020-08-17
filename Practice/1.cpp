#include<stdio.h>
int main ()
{
	float miles ,  	// input- distance in miles 
	kms;			// output- distance in kilometers
	
	//Get the distance in miles 
	printf("Enter distance in miles:");
	scanf("%f",&miles);
	
	//convert the distance to kilometres
	kms= KMS_PER_MILE * miles;
	
	//Display the distance in kilomiters
	printf("That equals %f km \n",kms);
	
	return 0;
	
	
}
