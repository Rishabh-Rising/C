#include <stdio.h>
#include<stdlib.h>
int arr[100];
void display(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf(" %d ", arr[i]);
  }
}
void creation(int n)
{
  printf("Enter Elements Of The array");
   for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  

}
void insertion(int n,int pos, int num)
  {
    for (int i=n; i>=pos-1;i--)
    {
      arr[i+1] = arr[i];//'=' works from right to left
    }
    
    arr[pos-1] = num;
    // pos = pos-1;
     n+=1;
     
    display(n);
  }

 int main()
  {
    int n,num,pos;
    printf("Enter The Size Of the Array\n");
        scanf("%d", &n);
    creation(n);
    display(n);
    printf("insertion");
    printf("Enter position and value");
    scanf("%d%d",&pos,&num);
    insertion(n,pos,num);
  }