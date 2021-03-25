#include <iostream>
#include <string.h>
using namespace std;

void swap(char *x,char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void hoanvi(char *a,int l,int r)
{
if(l==r){
	cout << a << endl;
}else{
	for(int i=l;i<=r;i++){
		swap((a+l),(a+i));
		hoanvi(a,l+1,r);
		swap((a+l),(a+i));
	}
}
}

int main()
{
	char str[100];
	cin >> str;
	int n = strlen(str);
	hoanvi(str,0,n-1);
}

