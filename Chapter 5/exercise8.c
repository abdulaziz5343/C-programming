#include <stdio.h>
int main(void) {

	int t8_00am = (60 * 8), t10_16am = (10 * 60) + 16,
		t9_43am = (9 * 60) + 43, t11_52am = (11 * 60) + 52,
		t11_19am = (11 * 60) + 19, t1_31pm = (60 * 13) + 31,
		t12_47pm = (12 * 60) + 47, t3_00pm = (15 * 60),
		t2_00pm = (14 * 60), t4_08pm = (60 * 16) + 8,
		t3_45pm = (15 * 60) + 45, t5_55pm = (17 * 60) + 55,
		t7_00pm = (19 * 60), t9_20pm = (21 * 60) + 20,
		t9_45pm = (21 * 60) + 45, t11_58pm = (23 * 60) + 58;

	int desired_time, departure_time, arrival_time;
	int time_hh, time_mm, dep_hh, dep_mm, arr_hh, arr_mm;
	printf("Departure time            Arriaval time\n");
	printf("  8:00 a.m                  10:16 a.m\n");
	printf("  9:43 a.m                  11:52 a.m\n");
	printf("  11:19a.m                  1:31  p.m\n");
	printf("  12:47a.m                  3:00  p.m\n");
	printf("  2:00 p.m                  4:08  p.m\n");
	printf("  3:45 p.m                  5:55  p.m\n");
	printf("  7:00 p.m                  9:20  p.m\n");
	printf("  9:45 p.m                  11:58 p.m\n\n");

	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &time_hh, &time_mm);

	desired_time = time_hh * 60 + time_mm;
	if (time_hh > 24 || time_mm > 60)
		printf("Entered invalid time \n\n");

	if (desired_time >= 0 && desired_time < t8_00am)
	{
		printf("8:00 a.m., arriving at 10:16 a.m.");
	}
	else if (desired_time >= t8_00am && desired_time < t9_43am)
	{
		printf("9:43 a.m., arriving at 11:52 a.m.");
	}
	else if (desired_time >= t9_43am && desired_time < t11_19am)
	{
		 printf("11:19 a.m., arriving at 1:31 p.m.");
	}
	else if (desired_time >= t11_19am && desired_time < t12_47pm)
	{
		 printf("12:47 p.m., arriving at 3:00 p.m.");
	}
	else if (desired_time >= t12_47pm && desired_time < t2_00pm)
	{
		printf("2:00 p.m., arriving at 4:08 p.m.");
	}
	else if (desired_time >= t2_00pm && desired_time < t3_45pm)
	{
		printf("3:45 p.m., arriving at 5:55 p.m.");
	}
	else if (desired_time >= t3_45pm && desired_time < t7_00pm)
	{
		printf("7:00 p.m., arriving at 9:20 p.m.");
	}
	else if (desired_time >= t7_00pm && desired_time < t9_45pm)
	{
		 printf("9:45 p.m., arriving at 11:58 p.m.");
	}
	printf("\n\n");
	return 0;
}
