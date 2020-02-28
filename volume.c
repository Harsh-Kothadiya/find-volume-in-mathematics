//volume
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void Cone();
void Cube();
void Cylinder();
void main()
{
	int choice;
	printf("\n\n\t CHOOSE ANY ONE CHOICE AND THIS CHOICE FIND VOLUME");
	printf("\n\n\tENTER-1 : CONE");
	printf("\n\n\tENTER-2 : CUBE");
	printf("\n\n\tENTER-3 : CYLINDER");
	
	printf("\n\n\tENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :
			Cone();
			break;
		case 2 :
			Cube();
			break;
		case 3 :
			Cylinder();
			break;
		default :
			printf("\n\n\t IN_VALIED CHOICE...");
			break;
	}
	getch();
}

void Cone()
{
	int radius,height;
	float ans;
	printf("\n\t ENTER A REDIUS : ");
	scanf("%d",&radius);
	printf("\n\t ENTER A HEIGHT : ");
	scanf("%d",&height);
	ans=PI*radius*radius*height/3;
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t VOLUME OF CONE : %.2f",ans);
}

void Cube()
{
	int side;
	printf("\n\n\t ENTER A SIDE : ");
	scanf("%d",&side);
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t VOLUME OF CUBE : %d",side*side*side);
}

void Cylinder()
{
	int radius,height;
	float ans;
	printf("\n\t ENTER A REDIUS : ");
	scanf("%d",&radius);
	printf("\n\t ENTER A HEIGHT : ");
	scanf("%d",&height);
	ans=PI*radius*radius*height;
	printf("\n-----OUTPUT--------\n");
	printf("\n\n\t VOLUME OF CYLINDER : %.2f",ans);
}
