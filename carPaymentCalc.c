/* Program to calculate monthly car payment and determine the amount needed to borrow
Programmer: Douglas Shirilla
Professor Galvis
Date: 02/09/2016
Class: COP 1220-82278 */

#include <stdio.h>
#include <math.h>

/*prototype the function needed to calculate the monthly payment */
double monthly_pay(double monthly_int_rate,double amount_borrowed, double num_payments);


int
main (void)
{
	double purchase_price, down_payment, annual_int_rate, num_payments, /*inputs*/
	
		    amount_borrowed, monthly_pay, monthly_int_rate; /*outputs*/
		    
		    
		    /*get inputs from user */
		    printf("Enter the purchase price of vehicle> ");
		    scanf("%lf", &purchase_price);
		    
		    printf("Enter the down payment for vehicle> ");
		    scanf("%lf", &down_payment);
		    
		    printf("Enter the annual interest rate> ");
		    scanf("%lf", &annual_int_rate);
		    
		    printf("Enter the number of monthly payments to make> ");
		    scanf("%lf", &num_payments);
		    
		    /* convert annual interest rate to monthly rate  */
		    monthly_int_rate = annual_int_rate / 12;
		    
		    /* calculate amount borrowed after down payment, if downpayment is applicable */
		    amount_borrowed = purchase_price - down_payment ;
		    
		    /* output the results */
		    printf("The amount you need to borrow is $%.2f", amount_borrowed);
		    printf("\nYour monthly payment is going to be $%.2f", monthly_int_rate);
		    printf("The monthly interest rate is %.2lf",monthly_int_rate);
		    
		    getch();
		    return(0);
		    
		    
		    
}
double monthly_pay(double monthly_int_rate,double amount_borrowed, double num_payments)
{

return ((monthly_int_rate)* (amount_borrowed)) / (1 - pow(1 + monthly_int_rate, -num_payments));
}

