//Pro 25

#include<stdio.h>

int isInArray(int a[],int m){
	static int i = -1;
	int ans;
	i++;
	if(a[i]==m){
		ans = i;
	}
	else if(a[i]!='\0'){
		ans = isInArray(a,m);
	}
	else{
		ans = -1;
	}
	return ans;
}

int main(){
	int n;
	printf("Enter a  : ");
	scanf("%d",&n);
	int a[n];
	int i , ans , m;
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter a number to search : ");
	scanf("%d",&m);
	ans = isInArray(a,m);
	printf("ans = %d",ans);
}
