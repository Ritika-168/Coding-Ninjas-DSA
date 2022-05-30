#include <climits>

void intersection(int *input1, int *input2, int n1, int n2)
{
    //Write your code here
 for ( int i = 0 ; i< n1 ; i++){
      for ( int j = 0; j<n2 ;  j++)
      {
          
          if(input1[i]==input2[j] )
          {
        	cout<<input1[i]<<" " ;
              input2[j] = INT_MIN;
				break;
       
          }   
      
    }
    
    }
}
    
   
