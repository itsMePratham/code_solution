// Code to reverse a number 


#include<bits/stdc++.h>
using namespace std;


  int reverseNumber(int num){


            int temp = num;
               
                int answer = 0 ;

              while(temp!=0){

                       int digit = temp%10;
          

                         if(answer>INT_MAX/10   ||(answer==INT_MAX && digit>7)){
                              
                                          answer = 0 ;
                                             return answer;

                                  }

                             if((answer<INT_MIN/10)||(answer==INT_MIN/10 && digit<-8)){
                                         
                                                answer = 0;
                                                    return answer;

                                        }


                                    answer = answer*10 + digit;
                                         temp = temp/10;


                   }

                         return answer;



      }



 int main(){

         int n ;
           cin>>n;
         cout<<reverseNumber(n);
      

return 0;


}