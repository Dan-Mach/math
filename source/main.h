#ifndef SOURCE_H

#define SOURCE_H

#include <stdlib.h>

typedef struct{  

    int length;
    int width;
    int height;
    int vol;
    int perimeter;
    int area;

}measure;

typedef struct {

    int basic_Salary;

    int cash_price;
    int commission;
    int current_price;

    int deposit;
    int discount;

    int HP;

    int loses;

    int marked_price;
    int MI; /* monthly instalment*/
    int month;
    int months;

    int original_price;

    int PC;
    int PD; /*percentage discount*/
    int PL; /*percentage lose*/
    int percentage_profit;
    int principal;
    int profit;
    
    int rate;

    int sales;
    int simple_interest;

    int time;
    int TMI; /*total monthly instalments*/

    int Val_goods;
    
    int year;
    
    
    

}money;

#endif