void ft_print_comb2(void){
unsigned int al=0;
unsigned int ar=0;
unsigned int bl=0;
unsigned int br=0;
unsigned int a;
unsigned int b;
int ans;
char ans_s;
int flag=0;
for(a=0;a<100;a++){
		for(b=a;b<100;b++){	
					if(a!=b){
					if(flag==1){
					write(1,", ",2);
					}else{
					flag=1;
					}
					al=a / 10;
					ar=a % 10;
					bl=b / 10;
					br=b % 10;
					ans_s='0'+al;
					write(1,&ans_s,1);
					ans_s='0'+ar;
					write(1,&ans_s,1);
					write(1," ",1);
					ans_s='0'+bl;
					write(1,&ans_s,1);
					ans_s='0'+br;
					write(1,&ans_s,1);
					
}
}
}
}

