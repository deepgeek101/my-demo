
public class MergeSortJava
{
        public static void merge(int[] A,int s,int e){
        int u=s;
        int k=(s+e)/2;
        int v=k+1;
        int[] temp=new int[e-s+1];
        int st=0;
        while(u<=k && v<=e){
            if(A[u]<A[v])
                temp[st++]=A[u++];
            else
                temp[st++]=A[v++];
        }
        while(u<=k)
            temp[st++]=A[u++];
        while(v<=e)
            temp[st++]=A[v++];
        for(int p=s;p<=e;p++)
            A[p]=temp[p-s];
        return ;
    }
    public static void mergeSort(int[] A,int s,int e){
        if(s>=e)    return ;
        int mid = (s+e)/2;
        mergeSort(A,s,mid);
        mergeSort(A,mid+1,e);
        merge(A,s,e);
        //mistake is :
        // return merge(A,s,e);
        // and java does not use pointers and thus the signature should not contain * 
    }

	public static void main(String[] args) {
		int a[]={12,7,14,2,10,19,23,15};
	//	int n=a.length;
		int n=a.length;
		System.out.println("Unsorted Array:- ");
		for(int i=0;i<n;i++)
		    System.out.print(a[i]+", ");
		System.out.printf("\n");
		mergeSort(a,0,n-1);
		System.out.println("Sorted Array:- ");
		for(int c=0;c<n;c++)
		    System.out.print(a[c]+", ");
		System.out.printf("\n");    
	}   
}
