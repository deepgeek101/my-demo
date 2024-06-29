#include <iostream>
using namespace std;
int main()
{
    int a[]={19,10,21,13,14};    
    int n=sizeof(a)/sizeof(int);
    int inv_count=0;
    for(int i=0;i<n;i++){
        int curr = a[i];
        int k=i+1;
        while(k<n){
            if(curr > a[k])
                inv_count++;
            k++;
        }
    }
    cout << "Number of inversions = "<<inv_count<<endl;
    return 0;
}