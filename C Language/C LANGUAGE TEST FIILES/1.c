// MAXIMUM OF USER INPUT INTEGERS...................................................................
// ARRAY IS THE MAIN FUNCTION TO BE USED HERE.......................................................

# include<stdio.h>
int main(){
    
    int array[100], maximum, size, c, location = 1;

    printf("no.of elements : ");
    scanf("%d",&size);
    
    printf("enter %d integers :", size);

    for (c = 0; c < size; c++)
    scanf("%d",&array[c]);
    maximum = array[0];
    

    for (c = 1; c < size; c++)
    {
        if (array[c]>maximum)
        {
            maximum = array[c];
            location = c+1;
        }
        
    }
    printf("location : %d\n value : %d", location, maximum);
    
    
    return 0;
}