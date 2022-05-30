void arrange(int *arr, int n)
{
    //Write your code here
    
    int i = 0, j =n-1 , value = 1;
    while ( i<=j){
            
     if( value%2==0)
     {
         arr[j]=value;
         j--;
         value++;
     }
     else 
     {
         arr[i]= value;
         i++;
         value++;
     }
    }
}