#include <stdio.h>
#include <math.h>
#define pi 3.14
float edist( int x1,int x2,int y1,int y2 )
{
        return sqrt((int)(x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));    
}


int main()
{
        float x1,x2,y1,y2;
        printf("enter the value of x1 point:");
        scanf("%f",&x1);
        printf("enter the value of y1 point:");
        scanf("%f",&y1);
        printf("enter the value of x2 point:");
        scanf("%f",&x2);
        printf("enter the value of y2 point:");
        scanf("%f",&y2);
        printf("the Euclidean distance comes %.2f\n",edist(x1,x2,y1,y2));
        return 0 ;
}
