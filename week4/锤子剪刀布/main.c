#include <stdio.h>
 
struct jy{
	int c,j,b;
};
 
int main(){
    int n,p=0;
    char a,b;
    static struct jy j,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	getchar();
    	scanf("%c %c",&a,&b);
    	if(a==b){
    		p++;
		}else if(a=='C'&&b=='J'||a=='J'&&b=='B'||a=='B'&&b=='C'){
			if(a=='C'){
				j.c++;
			}else if(a=='J'){
				j.j++;
			}else{
				j.b++; 
			}
		}else{
			if(b=='C'){
				y.c++;
			}else if(b=='J'){
				y.j++;
			}else{
				y.b++; 
			}
		}
	}
	printf("%d %d %d\n",j.b+j.c+j.j,p,n-p-(j.b+j.c+j.j));
	printf("%d %d %d\n",y.b+y.c+y.j,p,n-p-(y.b+y.c+y.j));	
	a='C',b='C';
	if(j.c<j.j){
		a='J';
		if(j.j<=j.b)a='B';
	}else if(j.c<=j.b){
		a='B';
	}
	if(y.c<y.j){
		b='J';
		if(y.j<=y.b)b='B';
	}else if(y.c<=y.b){
		b='B';
    }
    printf("%c %c",a,b);
    return 0;
}