#include <stdio.h>
#include<math.h>

int main()
{

   for(float i = 0; i<=2; i=i+0.2){

   if(i != (int)i && i )  {
        printf("I=%.1f J=%.1f\n",i, 1.0+i);
        printf("I=%.1f J=%.1f\n",i, 2.0+i);
        printf("I=%.1f J=%.1f\n",i, 3.0+i);}
    else {

        printf("I=%d J=%d\n",(int)i, 1+(int)(i));
        printf("I=%d J=%d\n",(int)i, 2+(int)(i));
        printf("I=%d J=%d\n",(int)i, 3+(int)(i));  }

   }
        printf("I=%d J=%d\n",(int)2, 3);
        printf("I=%d J=%d\n",(int)2, 4);
        printf("I=%d J=%d\n",(int)3, 5);
        }


