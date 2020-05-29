#include<stdio.h>
#include<math.h>

void main(){

        int n,a,b,c,d,p,q,y;
	    scanf("%d %d %d %d %d %d %d %d",&n,&a,&b,&c,&d,&p,&q,&y);

	    int pos[n];
	    for(int i=1;i<=n;i++){
	        scanf("%d",&pos[i]);
	    }
	    int walk=(abs(pos[b-1]-pos[a-1]))*p,result;
	    if(abs(pos[c-1]-pos[a-1])*p>y){
	        result=walk;
	    }
	    if(abs(pos[c-1]-pos[a-1])*p<=y){
	        result=y+abs(pos[d-1]-pos[c-1])*q+(abs(pos[d-1]-pos[b-1])*p);
	    }
	    if(result>walk){
	        result=walk;
	    }
	    printf("%d\n",result);


}
