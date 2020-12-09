#include<stdio.h>
int zifushu ();
int dancishu ();
int main (int argc, char* argv[])
{	
	if (argc==1)
	{
		dancishu();		
	}
	else
	{
		zifushu();
	}
	return 0;
}
int zifushu ()
{
	FILE * fp;
	char ch;
	int count = 0;
	if ((fp = fopen("test.txt", "r") )== NULL)
	{
        printf("Cannot open file\n");
    }
    else
	{
        ch = fgetc(fp);
        while (ch != EOF)
		{
            putchar(ch);
            ch = fgetc(fp);
			count++;
        }
		printf("\n%d\n",count);
    }
    fclose(fp);
	return 0;
}
int dancishu ()
{
	FILE * fp;
	char ch;
	int word;
	word = 1;
	if ((fp = fopen("test.txt", "r") )== NULL)
	{
        printf("Cannot open file\n");
    }
    else
	{

		ch = fgetc(fp);
		while (ch != EOF)
		{
			putchar(ch);
			ch = fgetc(fp);
            if(ch == ' ')
			{
				word++;
			}
			if(ch == ',')
			{
				word++;
			}
			if(ch == '\n')
			{
				word++;
			}
        }
		printf("\n%d\n",word);
    }
	fclose(fp);
	return 0;
}
