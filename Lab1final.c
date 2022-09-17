
#include<stdio.h>
#include <stdlib.h>
int arr[100];
void creation(int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
void insertpos(int n, int pos1, int val1)
{
    for (int i = n - 1; i >= pos1 - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    // arr[pos1 - 1] = val1;
    // arr[n]=arr[pos1-1];
    // arr[pos1-1]=val1;
    // n++;
}
void insetvalue(int n, int pos2, int val2)
{ // val2 is the new value and pos2 is the old valueint temp
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == pos2)
        {

            temp = i;

            for (int j = n - 1; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[temp]=val2;
            i++;
        }
    }
    
}
void deletepos(int n, int pos3)
{ // pos3 is the position to delete
    for (int i = pos3; i <= n ; i++)
    {
        arr[i - 1] = arr[i];
    }
    
}
void deletevalue(int n, int val4)
{
    // val is the value we need to compare
    int pos;
    for (int i = 0; i<n; i++)
        if (arr[i] == val4)
        {
            pos=i;
            for(int j=i;j<=n-1;j++){
                arr[j]=arr[j+1];
            }
            i+=1;
        }
}
void serch(int n, int val5)
{;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==val5)
        {   
            printf(" %d is at position %d",val5,i+1);
        }
        i+=1;
    }
    
}
int main()
{
    int n;
    printf("Enter The Size of Array and Then elements of array\n");
    scanf("%d", &n);
    creation(n);
    printf("Provided Array is \n");
    display(n);
    while (1)
    {
        printf("\nChoose from the following options:-   \n1.)Insert by position.   \n2.)Insert by value.   \n3.)Delete by positioin.   \n4.)Delete by value.   \n5.)Search an element.   \n6.)Update Array   \n7.)Display Array   \n8.)Exit.");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int pos1, val1;
            printf("\nEnter the position and value:");
            scanf("%d%d", &pos1, &val1);
            insertpos(n, pos1, val1);
            n += 1;
            display(n);
            break;
        }
        case 2:
        {
            int pos2, val2;
            printf("\nEnter The value and new value");
            scanf("%d%d", &pos2, &val2);
            insetvalue(n, pos2, val2);
            n += 1;
            display(n);
            break;
        }
        case 3:
        {
            int pos3;
            printf("\nEnter The position you want to delete");
            scanf("%d", &pos3);
            deletepos(n, pos3);
            n-=1;
            display(n);
            break;
        }
        case 4:
        {
            int val4;
            printf("\nEnter the Value to delete");
            scanf("%d", &val4);
            deletevalue(n, val4);
            n-=1;
            display(n);
            break;
        }
        case 5:
        {
            int val5;
            printf("\nEnter The element You want to serch");
            scanf("%d", &val5);
            serch(n, val5);
            break;
        }
        case 6:
        {
            printf("Enter The new size of array");
            scanf("%d", &n);
            creation(n);
            display(n);
            break;
        }
        case 7:
        {
            display(n);
            break;
        }
        case 8:
        {
            printf("\nBYeeeeee");
            exit(0);
        }
        }
    }
}