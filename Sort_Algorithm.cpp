
#include <iostream>
#include <cstdlib>
using namespace std;
void merge(int *A,int s,int e){
    int u=s;
    int k=(s+e)/2;
    int v=k+1;
    int *temp=(int *)calloc(e-s+1,sizeof(int));
    int x=0;
    while(u<=k and v<=e){
        if(A[u]<A[v])
            temp[x++]=A[u++];
        else
            temp[x++]=A[v++];
    }
    while(u<=k)
        temp[x++]=A[u++];
    while(v<=e)
        temp[x++]=A[v++];
    for(int n=s;n<=e;n++)
        A[n]=temp[n-s];
    
}
void mergeSort(int *A,int s,int e){
    if(s>=e)
        return ;
    int mid=(s+e)/2;
    mergeSort(A,s,mid);
    mergeSort(A,mid+1,e);
    return merge(A,s,e);
}
int main()
{
    int a[]={13,2,11,21,25,8,10,12};
    //int n=a.size;
    int n=sizeof(a)/sizeof(int);
//    cout<<n<<endl;
    for(int i=0;i<n;i++)
        cout<< a[i]<<", ";
    cout<<endl<<"Sorted Array: "<<endl;    
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<", ";
    cout<<endl;
    return 0;
}