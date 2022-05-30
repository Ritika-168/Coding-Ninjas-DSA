int tripletSum(int *input, int n, int x)
{
	//Write your code here
 int count=0;
    for(int i=0;i<n-1;i++){
        
        for(int j=i+1;j<n;j++){
            for ( int k = i+2; k<n ;k++){
                int s= x - input[i];
                 if (input[j]+ input[k]== s){
            count ++;
        }
    
        }
        }
    }
    return count;
    
}
