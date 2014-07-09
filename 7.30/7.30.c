#include <stdio.h>
#include <math.h>

void circumferenceOfCircle(int a);
void areaOfCircle(int b);
void volumeOfSphere(int c);


float radius;

int main (void)
{
	//Initialize array of 3 pointers to functions that each take an int argument and return void
	void (*f[3])(int) = {circumferenceOfCircle, areaOfCircle,volumeOfSphere};

	size_t choice; //Variable that holds user choice


	puts("Enter a number between 0 and 3:");
	puts("0 = Circumference");
	puts("1 = Area");
	puts("2 = Volume");
	puts("3 = End Program");

	scanf("%lu", &choice);

	while(choice >= 0 && choice < 3)
	{
		//Process user's choice
	(*f[choice])(choice);

	puts("");
	puts("Enter a number between 0 and 3:");
	puts("0 = Circumference");
	puts("1 = Area");
	puts("2 = Volume");
	puts("3 = End Program");
	scanf("%lu", &choice);

	}
	puts("Program finish executing");
}

void circumferenceOfCircle(int a)
{
	puts("You called the function to find the Circumference of a Circle.");
	printf("Please enter a radius: ");
	scanf("%f", &radius);
	printf("The circumference of a circle with radius of %.2f is %.2f\n",radius,2 * radius * M_PI);


}
void areaOfCircle(int b)
{
	puts("You called the function to find the Area of a Circle.");
	puts("Please enter a radius");
	scanf("%f", &radius);
	printf("The area of a circle with radius of %.2f is %.2f\n",radius,2 * M_PI * pow(radius,2));
}
void volumeOfSphere(int c)
{
	puts("You called the function to find the Volume of a Sphere.");
	puts("Please enter a radius");
	scanf("%f", &radius);
	printf("The volume of a sphere with radius of %.2f is %.2f\n",radius , M_PI * (4 / 3) * pow(radius,3));
}







