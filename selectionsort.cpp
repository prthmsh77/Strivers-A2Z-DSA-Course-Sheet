#include<iostream>

using namespace std;
void selectionsort(int a[],int n){
    int mini;
    for (int i = 0; i < n-1; i++)
    {
        mini = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[mini])
            {
                mini = j;
            }
           
        } 
         int temp = a[mini];
            a[mini] = a[i];
            a[i] = temp;     
    }
     for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
    
}
int main(){
    int a[5] = {4,6,3,1,3};
    selectionsort(a,5);
}