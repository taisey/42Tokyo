void ft_print_comb(void){
unsigned int t=0;
unsigned int m=0;
unsigned int b=0;
int ans;
char ans_s;
int flag=0;
for (t=0;t<10;t++){
	for(m=t+1;m<10;m++){
		for(b=m+1;b<10;b++){
        if(flag==0){
                flag=1;
        }else{
                write(1,",",1);
        }
		ans_s='0'+t;
		write(1,&ans_s,1);
		ans_s='0'+m;
		write(1,&ans_s,1);
		ans_s='0'+b;
		write(1,&ans_s,1);
		}
	}

}

}
