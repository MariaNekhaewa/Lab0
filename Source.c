#include <locale.h>

#include <stdio.h>
void name()
	{
		setlocale(LC_ALL, "RUS");
		puts("* * * * * * * * * * * * * * * * * * * * * *");
		puts("* ����: ���������� ����������� ���������� *");
		puts("* ��������� ������� �.�. ���-242          *");
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

