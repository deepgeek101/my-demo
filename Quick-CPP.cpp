//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Sol{
    public:    
    void swap(int *a,int *b){
        int c=*a;
        *a=*b;
        *b=c;
    }
    int partition(int *a,int p,int r){
        int i=p-1,j=0;
        int x=a[r];
        for(j=p;j<=r-1;j++){
            if(a[j]<=x){
                i++;
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[i+1],&a[r]);
        return i+1;
    }
    void quicksort(int *a,int p,int r){
        if(p<r){
            int q=partition(a,p,r);
            quicksort(a,p,q-1);
            quicksort(a,q+1,r);
        }
    }
};

int main()
{
    /*
    //emplace_back
    vector<int> a(4,10);
    //a.emplace_back(20);
    for(int k:a)
        cout<<k<<", ";
    */
    /*
    
    */
    int A[]={12,32,9,10,21,24,23};
    int n=sizeof(A)/sizeof(int);
    cout<<"Original Array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<", ";
    cout<<endl<<"Sorted Array:"<<endl;
    Sol ref;
    ref.quicksort(A,0,n-1);
    for(int i=0;i<n;i++)
        cout<<A[i]<<", ";
    cout<<endl;
    return 0;
}