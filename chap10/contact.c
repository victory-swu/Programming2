










#include "contact.h"

Contact kim = (0);

int main()
{
	Contact lee = { "LEE", "010-1234-5678", 1};

	Contact lee2 = (0);

	lee2 = lee;

	// lee2 = { "LEE2", "010-9876-5432", 2 }; // Error
	strcpy(lee2.name, "LEE2");
	strcpy(lee2.phone, "010-9876-5432");

	return 0;
}