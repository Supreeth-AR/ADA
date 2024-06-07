#include <stdio.h>
#include <stdlib.h>
void Merge(int A[],int l,int mid,int h){
    int i,j,k;
    int B[100];
    i=l;
    j=mid+1;
    k=l;

    while(i<=mid &&j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }else{
            B[k++]=A[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++]=A[i];
    }
    for(;j<=h;j++){
        B[k++]=A[j];
    }
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}
void MergeSort(int A[],int n){
    int p,i,l,mid,h;
    for(p=2;p<=n;p*=2){
        for(i=0;i+p-1<n;i+=p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n){
        Merge(A,0,(p/2)-1,n-1);
    }
}
int main(){
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n=10,i;
    for(i=0;i<10;i++){
        printf("%d ",A[i]);
        }
        printf("\n");
    MergeSort(A,n);
    for(i=0;i<10;i++){
        printf("%d ",A[i]);
        }
        return 0;
}