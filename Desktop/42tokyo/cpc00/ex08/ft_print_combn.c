/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <‘~/.norminette/norminette.rb     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:17:36 by taichika          #+#    #+#             */
/*   Updated: 2021/02/19 14:20:05 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb) {
int digit_n=1;
int digit=10;
char c;
while((nb / digit)!=0){

digit_n+=1;
digit*=10;
}



for (int i =0;i<digit_n;i++){
	digit/=10;
	c='0'+ nb / digit;
	nb=nb % digit;
	write(1,&c,1);
}



}

char c[10];
int flag=0;
void recursive(int st,int digit,int n){
	int i;
	if(digit== n-1){
		i=st;
		while(i<10){
		c[digit]='0'+i;
		write(1,&c,n);
		if(flag==0){
		write(1,", ",1);
		}
		i++;
		}
	}else{
		i=st;
		while(i<10){
			if(c[0]=='0'+(10-n)){
				flag=1;
			}
			c[digit]='0'+i;
			recursive(i+1,digit+1,n);
			i++;
		}
	}	
}

void ft_print_combn(int n){
recursive(0,0,n);
}


