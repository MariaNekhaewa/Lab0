#include <locale.h>

#include <stdio.h>
void name()
	{
		setlocale(LC_ALL, "RUS");
		puts("* * * * * * * * * * * * * * * * * * * * * *");
		puts("* тема: Разработка консольного приложения *");
		puts("* Выполнила Нехаева М.Д. бИД-242          *");
		puts("* * * * * * * * * * * * * * * * * * * * * *");
		
	}

void date()
{
	setlocale(LC_ALL, "RUS");
	puts(" _  _    _        _  ");
	puts("  | _|  | | |_|  | | |_|");
	puts(" /_ _|. |_|   |. |_|   |");
	
}
	void main()
	{
		 name();
		 date();
}

