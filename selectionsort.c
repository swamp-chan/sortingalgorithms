#include <stdio.h>
#include <conio.h>

int main(){
	int arr[4] = {4,0,1,3};
	int n = 4;
	int mindex;
	for(int i = 0; i<n; i++){
		mindex = i;
		for(int j = i+1; j<n-1; j++){
			if(arr[mindex]>arr[j]){
				mindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[mindex];
		arr[mindex] = temp;

	   
	        for(int i = 0 ; i<n; i++){
		        printf("%d ",arr[i]);
	         }    
	         printf("\n");
	}  
	getch();
	return 0;
}
