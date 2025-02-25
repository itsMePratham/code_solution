#include<bits/stdc++.h>
using namespace std;


  int countDigit(int num){

        if( num>0   &&   num<10){
            return 1;

            }


         int temp = num;
              int count = 0 ;
       
   while(temp>0)
{
   
     count++;

      
   temp = temp/10;
               
}


   return count;



   }
int main()
{


     int n;
    cin>>n;

   cout<<countDigit(n);

   









    return 0;


}