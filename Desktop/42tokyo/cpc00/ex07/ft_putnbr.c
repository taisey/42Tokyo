
void ft_putnbr(int nb){
int digit_n=1;
int digit=10;

char c;
if(nb==-2147483648){
	char *c_min;
	c_min="-2147483648";
	write(1,c_min,11);
}

