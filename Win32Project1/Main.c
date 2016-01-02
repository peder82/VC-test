#include <stdio.h>
#include "TemperatureConvertion.h"

main(void)
{
	while (1)
	{
		printf("\n\nType 1 for Fahrenheit and 2 for Kelvin:\n");
		int type = 0;
		scanf("%d", &type);;


		printf("Type in degrees celsius to convert:\n");
		int celsius = 0;
		scanf("%d", &celsius);;

		switch (type)
		{
		case 1: 			
			printf("%d C = %.2f F\n",
			celsius,
			celsiusToFahrenheit(celsius),
			celsiusToKelvin(celsius));
			break;
		case 2:
			printf("%d C = %.2f K\n",
			celsius,
			celsiusToFahrenheit(celsius),
			celsiusToKelvin(celsius));
			break;
		default:
			printf("No convertion selected\n");
			break;
		}

		char str1[2];
		printf("Type Q to quit\n");
		scanf("%s", &str1);
		if (str1[0] == 'Q')
		{
			break;
		}
	}


}
