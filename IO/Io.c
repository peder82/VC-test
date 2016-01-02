#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
	printf("%d and %#I64x\n", 123, 32132132121);

	printf("pre %-10.2fpost\n", 123.456);
	printf("pre %-10.2fpost\n", 13.46);

	char *message = "Hello on you!\n";
	printf("%s", message);
	int size = 5;
	printf("%.*s\n", size, message);




	char *font = "Myriad Pro";
	int fSize = 32;
	char buffer[500];

	sprintf(buffer,
		"<html><body><p style='font-family:%s;font-size:%dpx'>%s</p></body></html>",
		font,
		fSize,
		message);

	sprintf_s(buffer,
		sizeof(buffer),
		"<html><body><p style='font-family:%s;font-size:%dpx'>%s</p></body></html>",
		font,
		fSize,
		message);

	printf("%s\n", buffer);

	//int a, b, c;
	//scanf("%d %d %d", &a, &b, &c);
	//printf("%d %d %d\n", a, b, c);

	//FILE *f = stdout; // like standard printf
	FILE *f = 0;

	errno_t result = fopen_s(&f, "C:\\temp2\\message.txt", "w");

	if (result != 0)
	{
		char fBuffer[100];
		strerror_s(buffer, sizeof(buffer), result);

		printf("%s (%d)\n", buffer, result);
	}
	else
	{
		fprintf_s(f, "Hello file again...\n");
		fclose(f);
	}

	for (char *p = message; *p; ++p)
	{
		printf("%c\t", *p);

		if (isalnum(*p))
		{
			printf("isalnum ");
		}
		if (isalpha(*p))
		{
			printf("isalpha ");
		}
		if (islower(*p))
		{
			printf("islower ");
		}
		if (isupper(*p))
		{
			printf("isupper ");
		}
		if (isdigit(*p))
		{
			printf("isdigit ");
		}
		if (isxdigit(*p))
		{
			printf("isxdigit ");
		}
		if (iscntrl(*p))
		{
			printf("iscntrl ");
		}
		if (isgraph(*p))
		{
			printf("isgraph ");
		}
		if (isspace(*p))
		{
			printf("isspace ");
		}
		if (isblank(*p))
		{
			printf("isblank ");
		}
		if (isprint(*p))
		{
			printf("isprint ");
		}
		if (ispunct(*p))
		{
			printf("ispunct ");
		}

		printf("\r\n");
	}


	char *msgTest = "Hello World";
	for (char *p = msgTest; *p; ++p)
	{
		if (islower(*p))
		{
			
			printf("%c islower \n", *p);
			*p = (char) toupper(*p);
		}
	}

	printf(msgTest);

	char input[100];
	scanf("%s", input);

	return 0;
}