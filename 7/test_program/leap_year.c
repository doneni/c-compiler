int main(void)
{
    int leap;
	int year;
    year = 2024;
    leap = 0;
	if(year%4==0 && year%100!=0) {leap = 1;}
	else if(year%400==0) {leap = 1;}
	else {leap = 0;}
	printf("%d", leap);
    return 0;
}