int duplicateNumber(int *arr, int size)
{  
    int sumOfNaturalNumbers=((size-2)*(size-1))/2;
    int sumOfElements=0;
    for(int i=0;i<size;i++){
        sumOfElements+=arr[i];
    
        
    }
    
    return sumOfElements-sumOfNaturalNumbers;
    
}