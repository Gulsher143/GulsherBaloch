#include<iostream>
using namespace std;
void Quick_sort(int a[],int l,int r);
int partition(int a[],int l,int r);
void print(int a[],int s);
int main(){
	int a[]={3,6,29,78,12,49,57,22,13,8};
	cout<<"Before Sort: "<<endl;
	print(a,10);
	Quick_sort(a,0,9);
	cout<<"\nAfter sort: "<<endl;
	print(a,10);
}

void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int partition(int a[],int l,int r){
	int pivot=a[r];
	int i=l;
	for (int j=l;j<r;j++){
		if (a[j]<pivot){
     		swap(a[i],a[j]);
			i++;
        }
    }
    swap(a[i],a[r]);  
    return i;	
}
void print(int a[],int s){
	for(int i=0;i<s;i++){
		
		cout<<a[i]<<"  ";
	}
	cout<<"\n";
}
void Quick_sort(int a[],int l,int r){
	    if (l<r){
        int i=partition(a,l,r);
		Quick_sort(a,l,i-1);
        Quick_sort(a,i+1,r);
    }}

