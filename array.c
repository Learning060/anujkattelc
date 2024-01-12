// check the question in array note file

#include<stdio.h>
#include<string.h>
int main()
{
    int i , n, del, count=0, random=0, j=1;
int arr[100];
printf("Enter the size of the array: ");
scanf("%d", &n);


for ( i = 0; i < n; i++)
{
    printf("\nEnter the array element arr[%d]: ", i);
    scanf("%d", &arr[i]);
}
printf("\nEnter the value to delete: ");
scanf("%d", &del);

for ( i = 0; i < n; i++)
{
    if (arr[i]==del)
    {
        count=i;
        break;
    }
    
}
for ( i = 0; i < n; i++) // this is one method using continue
{
    if (arr[i]<del)
    {
        printf(" %d ", arr[i]);
    }
    // this is another method 
    // else if (arr[i]==del)
    // {
    //     continue;
    // }
    // else{
    //     printf(" %d", arr[i]);
    // }
    
}

random = count;
for ( count; count < n-1; count++)
{
    arr[count]=arr[count+j];


    printf(" %d ", arr[count]);

 
   

   
}

return 0;
}