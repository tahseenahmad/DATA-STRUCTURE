#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
#include <assert.h>
void display_arr(int *ptr,int size){
int i=0 ;
for( ;i<size;i++)
printf("%4d",ptr[i]);
}
int arr_sum(int *ptr,int size)
{
    int i=0 ,sum=0;
    for(i=0;i<size;i++)
    sum += ptr[i];
    return sum;
}
int arr_mul(int *ptr ,int size)
{
    int mul=1,i,n;
    for(i=0;i<size;i++)
    mul= mul*ptr[i];
    return mul;
}

bool linear_search(int *ptr, int size, int x){

    bool number_found = false;
    int i;
    for(i=0;i<size;i++)
    {
        if(ptr[i]==x){
        number_found = true;
        break;
        }

    }
    return number_found;
}
bool binary_search(int *ptr,int size,int x){
    int low=0,high=size-1,mid=(low+high)/2;
    bool number_found= false;
    while(low<=high&&ptr[mid]!=x)
    {
        if(ptr[mid]>x)
        high=mid-1;
        else
        low=mid+1;
        mid=(low+high)/2;
    }
    if(ptr[mid]==x)
    {
        number_found = true;
    return number_found;
    }
    return number_found;
}
void main(void){
    int arr[]={1,2,3,4,5};
    int x=4;
    int size = sizeof arr/sizeof arr[0];
    display_arr(arr ,size);
    assert(arr_sum(arr,size)==15);
    assert(arr_mul(arr,size)==120);
    if(linear_search(arr,size,x)){
    printf("\n number %d found \n",x);}
    else
    printf("number %d not found\n",x);
    if(binary_search(arr,size,x))
    printf("number %d is found\n",x);
    else
    printf("number %d is not found\n",x);
}



