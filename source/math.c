#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

const int M_PI = 3.142;
int main()
{
    char math;
    printf("welcome to maths   \n 1.Measurements \n 2.money ");
    printf("\n Enter your choice: ");
    scanf(" %c", &math);
    switch (math)
    {
        case '1':
        {
            char measurement;
            printf("Dealing with measurement\n  \n Choose your option \n A.Volume \n B.Perimeter \n C .Area ");
            printf("\n Enter your choice: ");
            scanf(" %c", &measurement);
            switch (measurement)
            {
            // volume
            case 'A':
            {
                char volume;
                printf("When calculating volume there are different types of shapes choose one \n a. cube \n b. cuboid \n c. cylinder \n d. sphere \n e.pyramid ");
                printf("\n Enter your choice: ");
                scanf(" %c", &volume);
                switch (volume)
                {
                // volume of a cube
                case 'a':
                {
                    printf("\n Calculating the volume of a cube");
                    int vlm;int length;int width;int height;
                    printf("\n Enter the length width and the height in this format [ l w h]: ");
                    scanf("%d  %d %d", &length, &width, &height);
                    vlm = length * width * height;
                    printf("The volume of the cube is :  %d\n", vlm);
                    break;
                }
                // volume of a cuboid
                case 'b':
                {
                    printf("\n Calculating the volume of a cuboid");
                    int vlm;int length;int width;int height;
                    printf("\n Enter the length width and the height in this format [ l w h]: ");
                    scanf("%d  %d %d", &length, &width, &height);

                    vlm = length * width * height;

                    printf("The volume of the cuboid is :  %d\n", vlm);
                    break;
                }
                // volume of a cylinder
                case 'c':
                {
                    printf("\n Calculating the volume of a cylinder");
                    float vlm;int radius;int height;
                    printf("\n Enter the radius  the height in this format [ r h]: ");
                    scanf("%d  %d", &radius, &height);

                    vlm = (radius * radius) * M_PI * height;

                    printf("The volume of the cube is :  %.4f\n", vlm);
                    break;
                }
                // volume of a sphere
                case 'd':
                {
                    printf("\n Calculating the volume of a sphere");
                    float vlm;int radius;
                    printf("Enter the radius of the sphere: ");
                    scanf("%d ", &radius);

                    vlm = 4 / 3 * M_PI * radius;

                    printf("The volume of the sphere is:  %.4f\n", vlm);
                    break;
                }
                default:
                    printf("Invalid Input !");
                    break;
                }
                break;
            }
            // perimeter and circumfirence
            case 'B':
            {
                char perimeter;
                printf("\n When calculating perimeter and circumfirence there are different types of shapes choose one \n a. rectangle \n b. square \n c. semi circle \n d. circle");
                printf("\n Enter your choice: ");
                scanf(" %c", &perimeter);
                switch (perimeter)
                {
                // perimeter of the rectangle
                case 'a':
                {
                    printf("\n Calculating the perimeter of rectangle");
                    int prm;int length;int width;
                    printf("\n Enter the length width  in this format [ l w ]: ");
                    scanf("%d , %d", &length, &width);

                    prm = (length + width) * 2;

                    printf("The perimeter of the rectangle is :  %d\n", prm);
                    break;
                }
                // perimeter of the square
                case 'b':
                {
                    printf("\n Calculating the perimer of square");
                    int prm;int side;
                    printf("\n Enter the length width and the height in this format [s s ]: ");
                    scanf("%d , %d ", &side, &side);

                    prm = (side + side) * 2;

                    printf("The perimeter of the square is  :  %d\n", prm);
                    break;
                }
                // perimeter of the semi circle
                case 'c':
                {
                    printf("\n Calculating the perimeter of semi circle ");
                    int prm;int radius;
                    printf("\n Enter the radius: ");
                    scanf("%d ", &radius);

                    prm = ((radius + radius) * M_PI) + radius;

                    printf("The perimeter of the  semi circle is :  %d\n", prm);
                    break;
                }
                // perimeter of a circle 
                case 'd':
                {
                    printf("\n Calculating the perimeter of a circle ");
                    int prm; int radius;
                    printf("\n Enter the radius :  ");
                    scanf("%d", &radius);

                    prm = (radius + radius ) * M_PI;

                    printf("\n The perimeter of the circle is :  %d ", prm);
                    break;
                }
                default:
                    printf("Invalid Input !");
                    break;
                }
                break;
            }

            // Area  and surface area
            case 'C':
            {
                char area;
                printf("When calculating area there are different types of shapes choose one \n a. rectangle \n b. square \n c. semi circle \n d. circle \n e. rhobus \n f. trapizium ");
                printf("\n Enter your choice: ");
                scanf(" %c", &area);
                switch (area)
                {
                // area of the rectangle
                case 'a':
                {
                    printf("\n Calculating the area of rectangle");
                    int area;int length;int width;
                    printf("\n Enter the length width  in this format [ l w ]: ");
                    scanf("%d , %d", &length, &width);

                    area = (length * width);

                    printf("The area of the rectangle is :  %d\n", area);
                    break;
                }
                // area of the square
                case 'b':
                {
                    printf("\n Calculating the area of square");
                    int area;int side;
                    printf("\n Enter the two sides in this format [s s ]: ");
                    scanf("%d , %d ", &side, &side);

                    area = (side * side);

                    printf("The area of the square is  :  %d\n", area);
                    break;
                }

                // area  of the semi circle
                case 'c':
                {
                    printf("\n Calculating the area  semi circle ");
                    float area;int radius;
                    printf("Enter the radius: ");
                    scanf("%d ", &radius);

                    area = ((radius * radius) * M_PI) * 1 / 2;

                    printf("The area of the semi circle is :  %.4f\n", area);
                    break;
                }
                // area  of a circle
                case 'd':
                {
                    printf("\n Calculating the area  circle ");
                    float area;int radius;
                    printf("\n Enter the radius: ");
                    scanf("%d ", &radius);

                    area = (radius * radius) * M_PI;

                    printf("The area of  the circle is :  %.4f\n", area);
                    break;
                }
                // area  of a rhobus
                case 'e':
                {
                    printf("\n Calculating the area  of a rhobus ");
                    int area;int daio;
                    printf("\n Enter the two diagonals : ");
                    scanf("%d %d", &daio, &daio);

                    area = (daio * daio) * 1 / 2;

                    printf("The area of the rhobus is :  %d\n", area);
                    break;
                }
                // area  of the trapizium
                case 'f':
                {
                    printf("\n Calculating the area  of a trapizium  ");
                    int area;int long_side;int short_side;int height;
                    printf("\n Enter the Long length: ");
                    scanf("%d ", &long_side);
                    printf("Enter the Short length : ");
                    scanf("%d ", &short_side);
                    printf("Enter the height: ");
                    scanf("%d ", &height);

                    area = (long_side + short_side) * 1 / 2 * height;

                    printf("The area of the trapizium  is :  %d\n", area);
                    break;
                }
                default:
                    printf("Invalid Input !");
                    break;
                }
                break;
            }
            default:
                printf("Invalid Input ! ");
                break;
            }
            break;
        }
        case '2':
        {
            char money;
            printf("Dealing with money in maths\n  \n Choose your option \n a.Commission and Percentage commission \n b. Simple interest  \n c. Hire purchase  \n d. Discount Percentage discount \n e. Profit Percentage profit \n f.Losses and Percentage lose  ");
            printf("\n Enter your choice: ");
            scanf(" %c", &money);
            switch (money)
            {
            // Commission and percentage commission
            case 'a':
            {
                printf("Calculate Commission amd Percentage commission \n ");

                int PC;int basic_salary;int value_of_goods_above;int sales;int rate;int principal;int commission;int value_of_goods;
                printf("\nBasic salary: ");
                scanf("%d", &basic_salary);
                printf("Enter the sales on the month: ");
                scanf("%d ", &sales);
                printf("Enter the value of goods sold: ");
                scanf("%d", &value_of_goods);
                printf("Enter  the sales of that month : ");
                scanf("%d", &value_of_goods_above);

                printf("Enter rate: ");
                scanf("%d", &rate);

                commission = (rate / 100.0) * sales;
                printf("The commission is: %d \n", commission);
                break;

                printf("\n The percentage commission ");

                PC = (commission / sales) * 100;

                printf("\n The percentage commission is : %d ", PC);

                break;
            }

            // Simple interest
            case 'b':
            {
                int simple_interest;int principal;int time;int rate;int months;char month, year;
                printf("Calculating Simple interest \n");

                printf("\nEnter the principle: ");
                scanf("%d", &principal);
                printf("Enter the rate: ");
                scanf("%d", &rate);
                printf(" months or years[m / y]: ");
                scanf(" %c", &month);
                if (month == 'm')
                {
                    printf("period: ");
                    scanf("%d", &months);
                }

                else
                    (month == 'y');
                {
                    printf("Period: ");
                    scanf("%d", &time);
                    months = 12 * time;
                }

                simple_interest = (principal * rate * months) / 100;

                printf("The simple interest is: %d\n", simple_interest);
                break;
            }
            case 'c':
            {
                // hire purchase
                printf("Calculating Hire purchase \n");

                int deposit;int HP;int months;int total_monthly_instalments;int monthly_instalments;int cash_price;int marked_price;
                printf("Enter the deposit:");
                scanf("%d", &deposit);
                printf("Enter the monthly instalment and number of months :  ");
                scanf("%d %d", &months, &monthly_instalments);

                total_monthly_instalments = monthly_instalments * months;

                HP = deposit + total_monthly_instalments;

                printf("The hire purchase of the product is : %d ", HP);
                break;
            }
            case 'd':
            {
                // Discount and Percentage discount
                printf("Calculating Discount and percentage discount\n");

                int marked_price;int cash_price;int discount;int PD;
                printf("Enter the marked  price: ");
                scanf("%d", &marked_price);
                printf("Enter the cash price of the goods");
                scanf("%d", &cash_price);

                discount = marked_price - cash_price;

                PD = (discount / marked_price) * 100;

                printf("\n The discount is :  %d ", discount);
                printf("\nThe percentage discout is :  %d", PD);
                break;
            }
            case 'e':
            {
                // Profits and percentage profits
                printf("Calculating profits and percentage profits\n ");

                int profit;int PP;int current_price;int original_price;
                printf("Enter the current price: ");
                scanf("%d", &current_price);
                printf("Enter original price: ");
                scanf("%d ", &original_price);

                profit = current_price - original_price;

                PP = (profit / original_price) * 100;

                printf("\nThe profit is : %d ", profit);
                printf("\nThe percentage profit is :  %d ", PP);
                break;
            }
            case 'f':
            {
                // Losses and percentage loss
                printf("Calculating losses and percentage lose\n ");

                int loses;int PL;int original_price;int current_price;
                printf("Enter the current price:  ");
                scanf("%d", &current_price);
                printf("Enter the original price: ");
                scanf("%d", &original_price);

                loses = original_price - current_price;

                PL = (loses / original_price) * 100;

                printf("The loses are : %d", loses);
                printf("\n The percentage lose is :  %d", PL);
                break;
            }
            default:
                printf("Error!");
                break;
            }
            break;
        }
    }
    return 0;
}