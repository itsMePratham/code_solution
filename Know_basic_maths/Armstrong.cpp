bool checkArmstrong(int x){


    int num =  log10(x)+1;
   
            int answer = 0 ;
       int temp = x;
       
       while(temp>0)
       {
         
         
             int digit = temp %10;
             
             
                answer = answer +pow(digit , num);
                
                temp = temp/10;
         
         
         
         
       }
   
   
   
         if(answer == x ){
           
           return true;
         }
         
         else {
           return false ;
         }
}