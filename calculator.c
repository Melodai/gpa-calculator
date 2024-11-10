#include <stdio.h>
#include <stdlib.h>
#define gradeX 13.5

int main()
{
    float gradeA = 0;
    float total = 0;
    float MultiplierA = 2;
    float GPA = 0;
    for(int count = 1 ;count <=1 ;count++ ){
         printf("input your grade(2) : ");
         scanf(" %f",&gradeA);
    }
     total = MultiplierA * gradeA;
     printf("%.2f\n",total);



     float gradeB = 0.0,num1 = 0.0;
     float MultiplierB = 1.5 ;
     for(int count = 1 ;count <=3 ;count++ ){
         printf("input your grade(1.5) : ");
         scanf(" %f",&num1);
         gradeB += num1;
    }
     printf("%.2f\n",gradeB);

     total += gradeB * MultiplierB;
     printf("%.2f\n",total);

     float gradeC = 0.0,num2 = 0.0,MultiplierC = 1.0  ;
     for(int count = 1 ;count <=5 ;count++ ){
         printf("input your grade(1) : ");
         scanf(" %f",&num2);
         gradeC += num2;
    }
     total += gradeC * MultiplierC;
     printf("%.2f\n",total);

     float gradeD = 0,num3 = 0;
     float MultiplierD = 0.5;
     for(int count = 1 ;count <=4 ;count++ ){
         printf("input your grade(0.5) : ");
         scanf(" %f",&num3);
         gradeD += num3;
    }
     total += gradeD * MultiplierD;
     printf("%.2f\n",total);

     GPA += total / gradeX;
     printf("GPA : %.2f\n",GPA);

    return 0;
}
