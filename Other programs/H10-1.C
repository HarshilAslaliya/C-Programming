#include<stdio.h>

main()
{
	int a,qty1=0,qty2=0,qty3=0,bill1=0,bill2=0,bill3=0;
	int b,qtyb1=0,qtyb2=0,qtyb3=0,billb1=0,billb2=0,billb3=0;
	int c,qtyc1=0,qtyc2=0,qtyc3=0,billc1=0,billc2=0,billc3=0;
	int d,qtyd1=0,qtyd2=0,qtyd3=0,billd1=0,billd2=0,billd3=0;
	int e;
	
	tmp:
	
	printf("\t\t*WELCOME TO H.A FASTFOOD*\n");
	printf("\t       ***************************\n\n");
	
	printf("\t\t  Press 1 for Pizza\n\n");
	printf("\t\t  Press 2 for Berger\n\n");
	printf("\t\t  Press 3 for Pasta\n\n");
	printf("\t\t  Press 4 for Garlic Bread\n\n");
	
	printf("\t       *****************************\n\n");
	printf("\t\t  Enter your choice = ");
	scanf("%d",&a);
	
	system("cls");
		
		switch(a)
		{
			case 1:
				printf("\n\t\t 1. Margherita Pizza\t Price:-150\n");
				printf("\n\t\t 2. Mexican Pizza\t Price:-200\n");
				printf("\n\t\t 3. Cheezy 7 Pizza\t Price:-250\n");
				
				printf("\n\t\t***************************************\n");
				
				printf("\n\t\t Enter your choice = ");
				scanf("%d",&a);
				
				
				
				switch(a)
				{
					case 1:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qty1);
						
						system("cls");
						
						
						printf("\n\t\t You have ordered %d Margherita Pizza\n\n\n",qty1);
						bill1 += 150 *qty1;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&a);
						
						system("cls");
						
						switch(a)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
						
					case 2:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qty2);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Mexican Pizza\n\n\n",qty2);
						bill2 += 200 *qty2;
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&a);
						
						system("cls");
						
						switch(a)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
					
					case 3:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qty3);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Cheezy 7 Pizza\n\n\n",qty3);
						bill3 += 250 *qty3;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&a);
						
						system("cls");
						
						switch(a)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
							
					default:
						printf("Please enter valid choice....");
						
						switch(a)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
			    }
			    
			    break;
			
			case 2:
				printf("\n\t\t 1. Veg Berger\t\t Price:-50\n");
				printf("\n\t\t 2. Aloo Tikki Berger\t Price:-70\n");
				printf("\n\t\t 3. Veg Cheese Berger\t Price:-100\n");
				
				printf("\n\t\t***************************************\n");
				
				printf("\n\t\t Enter your choice = ");
				scanf("%d",&b);
				
				
				
				switch(b)
				{
					case 1:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyb1);
						system("cls");
						
						printf("\n\t\t You have ordered %d Veg Berger\n\n\n",qtyb1);
						billb1 += 50 *qtyb1;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&b);
						
						system("cls");
						
						switch(b)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
					case 2:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyb2);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Aloo Tikki Berger\n\n\n",qtyb2);
						billb2 += 70 *qtyb2;
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&b);
						
						system("cls");
						
						switch(b)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
					
					case 3:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyb3);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Veg Cheese Berger\n\n\n",qtyb3);
						billb3 += 100 *qtyb3;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&b);
						
						system("cls");
						
						switch(b)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
							
					default:
						printf("Please enter valid choice....");
						
						switch(b)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
						
				}
				
				break;
			
			
			case 3:
				printf("\n\t\t 1. Americano Pasta\t\t Price:-200\n");
				printf("\n\t\t 2. Mexican Pasta\t\t Price:-160\n");
				printf("\n\t\t 3. White Sauce Pasta\t\t Price:-100\n");
				
				printf("\n\t\t***************************************\n");
				
				printf("\n\t\t Enter your choice = ");
				scanf("%d",&c);
				
				
				
				switch(c)
				{
					case 1:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyc1);
						system("cls");
						
						printf("\n\t\t You have ordered %d Americano Pasta\n\n\n",qtyc1);
						billc1 += 200 *qtyc1;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&c);
						
						system("cls");
						
						switch(c)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
					case 2:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyc2);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Mexican Pasta\n\n\n",qtyb2);
						billc2 += 160 *qtyc2;
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&c);
						
						system("cls");
						
						switch(c)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
					
					case 3:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyc3);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d White Sauce Pasta\n\n\n",qtyb3);
						billc3 += 100 *qtyc3;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&c);
						
						system("cls");
						
						switch(c)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
							
					default:
						printf("Please enter valid choice....");
						
						switch(c)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
						
				}
				
				break;
				
			case 4:
				printf("\n\t\t 1. Supreme Garlic Bread\t Price:-120\n");
				printf("\n\t\t 2. Cheezy Garlic Bread\t\t Price:-100\n");
				printf("\n\t\t 3. Garlic Stick\t\t Price:-80\n");
				
				printf("\n\t\t***************************************\n");
				
				printf("\n\t\t Enter your choice = ");
				scanf("%d",&d);
				
				
				
				switch(d)
				{
					case 1:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyd1);
						system("cls");
						
						printf("\n\t\t You have ordered %d Supreme Garlic Bread\n\n\n",qtyd1);
						billd1 += 120 *qtyd1;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&d);
						
						system("cls");
						
						switch(d)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
					case 2:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyd2);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Cheezy Garlic Bread\n\n\n",qtyd2);
						billd2 += 100 *qtyd2;
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&d);
						
						system("cls");
						
						switch(d)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
					
					case 3:
						printf("\n\t\t Enter Quantity : ");
						scanf("%d",&qtyd3);
						
						system("cls");
						
						printf("\n\t\t You have ordered %d Garlic Stick\n\n\n",qtyd3);
						billd3 += 80 *qtyd3;
						
						
						printf("\t\t Press 1 for more order\n");
						printf("\t\t Press 0 for Bill\n\n");
						
						printf("\t\t*****************************\n\n");
						
						printf("\t\t Enter your choice = ");
						scanf("%d",&d);
						
						system("cls");
						
						switch(d)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
							
					default:
						printf("Please enter valid choice....");
						
						switch(d)
						{
							case 1:
								goto tmp;
								break;
							case 2:
								break;
						}
						
						break;
						
						
				}
				
			break;
			
			default:
					
					
					printf("\n\t\t Choose Only For This Menu....\n\n");
					
					goto tmp;
			
			
			
		}
		
	printf("\n\t\t PIZZA\n");
	printf("\n\t\t Rs:%d for %d Margherita Pizza\n",bill1,qty1);
	printf("\t\t Rs:%d for %d Mexican Pizza\n",bill2,qty2);
	printf("\t\t Rs:%d for %d Cheezy 7 Pizza\n",bill3,qty3);
	
	printf("\n\t\t BERGER\n");
	printf("\n\t\t Rs:%d for %d Veg Berger\n",billb1,qtyb1);
	printf("\t\t Rs:%d for %d Aloo Tikki Berger\n",billb2,qtyb2);
	printf("\t\t Rs:%d for %d Veg Cheese Berger\n",billb3,qtyb3);
	
	printf("\n\t\t PASTA\n");
	printf("\n\t\t Rs:%d for %d Americano Pasta\n",billc1,qtyc1);
	printf("\t\t Rs:%d for %d Mexican Pasta\n",billc2,qtyc2);
	printf("\t\t Rs:%d for %d White Sauce Pasta\n",billc3,qtyc3);
	
	printf("\n\t\t GARLIC BREAD\n");
	printf("\n\t\t Rs:%d for %d Supreme Garlic Bread\n",billd1,qtyd1);
	printf("\t\t Rs:%d for %d Cheezy Garlic Bread\n",billd2,qtyd2);
	printf("\t\t Rs:%d for %d Garlic Stick\n",billd3,qtyd3);
	
	printf("\n\t\t------------------------------");
	
	printf("\n\t\t Total Bill = %d",bill1+bill2+bill3+billb1+billb2+billb3+billc1+billc2+billc3+billd1+billd2+billd3);
	
	printf("\n\t\t------------------------------");
	
}
