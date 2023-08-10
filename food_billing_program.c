#include<stdio.h>
int main() {
	//Menu of avaulable items
	int food,food2,quantity,amount=0,p_price=180,b_price=100,d_price=120,i_price=50,amount1=0,grand_total;
	char y,n;

	printf("------Menu------\n");
	printf("1.pizza\t\tprice = 180rs pcs\n");
	printf("2.Burger\tprice = 100rs pcs\n");
	printf("3.Dosa\t\tprice = 120rs pcs\n");
	printf("4.Idli\t\tprice = 50rs pcs\n");

	//option of user
	printf("\nplease Enter your choose :");
	scanf("%d",&food);



	//select
	switch(food) {
		case 1:
			printf("\n\nyou have selected Pizza");
			printf("\nEnter the Quantity");
			scanf("%d",&quantity);
			amount=quantity*p_price;
			printf("amount is :%d",amount);
			printf("\nTotal amount :%d",amount);
			break;
		case 2:
			printf("\n\nyou have selected Burger");
			printf("\nEnter the Quantity");
			scanf("%d",&quantity);
			amount=quantity*b_price;
			printf("amount is :%d",amount);
			printf("\nTotal amount :%d",amount);
			break;
		case 3:
			printf("\n\nyou have selected Dosa");
			printf("\nEnter the Quantity");
			scanf("%d",&quantity);
			amount=quantity*d_price;
			printf("amount is :%d",amount);
			printf("\nTotal amount :%d",amount);
			break;
		case 4:
			printf("\n\nyou have selected Idli");
			printf("\nEnter the Quantity");
			scanf("%d",&quantity);
			amount=quantity*i_price;
			printf("amount is :%d",amount);
			printf("\nTotal amount :%d",amount);
			break;
		default:
			printf("\n\nplease Enter valid Number");
			break;
	}
	printf("\nDO you want place more orders ?y or n");
	scanf("%c %c",&y,&n);

	switch(y,n)
	 {
	   	case 'y':
			printf("------Menu------\n");
			printf("1.pizza\t\tprice = 180rs pcs\n");
			printf("2.Burger\tprice = 100rs pcs\n");
			printf("3.Dosa\t\tprice = 120rs pcs\n");
			printf("4.Idli\t\tprice = 50rs pcs\n");

			//option of user
			printf("\nplease Enter your choose :");
			scanf("%d",&food);
			switch(food) {
				case 1:
					printf("\n\nyou have selected Pizza");
					printf("\nEnter the Quantity");
					scanf("%d",&quantity);
					amount1=quantity*p_price;
					printf("amount is :%d",amount1);
					printf("\nTotal amount :%d",amount1);
					break;

				case 2:
					printf("\n\nyou have selected Burger");
					printf("\nEnter the Quantity");
					scanf("%d",&quantity);
					amount1=quantity*b_price;
					printf("amount is :%d",amount1);
					printf("\nTotal amount :%d",amount1);
					break;
				case 3:
					printf("\n\nyou have selected Dosa");
					printf("\nEnter the Quantity");
					scanf("%d",&quantity);
					amount1=quantity*d_price;
					printf("amount is :%d",amount1);
					printf("\nTotal amount :%d",amount1);
					break;
				case 4:
					printf("\n\nyou have selected Idli");
					printf("\nEnter the Quantity");
					scanf("%d",&quantity);
					amount1=quantity*i_price;
					printf("amount is :%d",amount1);

					printf("\nTotal amount :%d",amount1);
					break;

				default:
					printf("\n\nplease Enter valid Number");
			}
			break;

		case 'n':
			printf("thank you for visit\n");
			break;

	}
	grand_total=amount+amount1;
	printf("\n\ngrand total is %d",grand_total);

}



