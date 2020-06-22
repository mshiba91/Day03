#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c){

	write(1, &c, 1);
	return(0);

}

void ft_putstr(char *str)
{
	int goodday;
	if(str)

	str = goodday;

	{
		while (*str !='\0')
		{
			ft_putchar(*str);
			++str;
		}
	}
}

int main(){
	char i[] = "goodday";
	char *a;
	a = i;

	ft_putstr(i);
	
		return(0);
}

