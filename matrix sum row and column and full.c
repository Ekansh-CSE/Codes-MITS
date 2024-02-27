#include<stdio.h>
int main(){
int a[3][3];
int b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0;
for(b=0;b<3;b++){
	for(c=0;c<3;c++){
		printf("enter the %d element of %d row ",c+1,b+1);
	scanf("%d",&a[c][b]);
	}
}
//sum of matrix
for(d=0;d<3;d++){
	for(e=0;e<3;e++){
		f+=a[e][d];
	}
}
printf("the sum of whole matrix is %d\n",f);
//sum of rows
for(g=0;g<3;g++){
	for(h=0;h<3;h++){
	i+=a[g][h];
	}
	printf("the sum of %d row is %d\n",g+1,i);
	i=0;
}
//sum of columns
for(j=0;j<3;j++){
	for(k=0;k<3;k++){
	l+=a[k][j];
	}
	printf("the sum of %d column  is %d\n",j+1,l);
	l=0;
}
return 0;
}