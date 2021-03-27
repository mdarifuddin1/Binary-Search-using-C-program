#include<stdio.h>
int main (){

     int a [] = {2,44,60,67,10};

     int item =67;

     int left,right,middle;
     left= 0;
     right= 4;

    while(left <= right)
    {
         middle = (left + right)/2;
     if(a[middle] == item){

        printf("Ietm found at index at : %d \n",middle);
        return 0;
     }
     else if(a[middle] >item){

        left = middle +1;
     }
     else {
        right = middle -1;
     }
    }
        printf("\n item is not found");

return 0;
}
