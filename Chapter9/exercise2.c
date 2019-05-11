#include <stdio.h>

void find_closest_flight(int desired_time, int* departure_time, int* arrival_time)
{
	/*departure and arrival times as minutes since midnight*/

	int t8_00am = (60 * 8), t10_16am = (10 * 60) + 16,
		t9_43am = (9 * 60) + 43, t11_52am = (11 * 60) + 52,
		t11_19am = (11 * 60) + 19, t1_31pm = (60 * 13) + 31,
		t12_47pm = (12 * 60) + 47, t3_00pm = (15 * 60),
		t2_00pm = (14 * 60), t4_08pm = (60 * 16) + 8,
		t3_45pm = (15 * 60) + 45, t5_55pm = (17 * 60) + 55,
		t7_00pm = (19 * 60), t9_20pm = (21 * 60) + 20,
		t9_45pm = (21 * 60) + 45, t11_58pm = (23 * 60) + 58;


	if (desired_time >= 0 && desired_time < t8_00am)
	{
		*departure_time = t8_00am;
		*arrival_time = t10_16am;
		return;
	}
	else if (desired_time >= t8_00am && desired_time < t9_43am)
	{
		*departure_time = t9_43am;
		*arrival_time = t11_52am;
		return;
	}
	else if (desired_time >= t9_43am && desired_time < t11_19am)
	{
		*departure_time = t11_19am;
		*arrival_time = t1_31pm;
		return;
	}
	else if (desired_time >= t11_19am && desired_time < t12_47pm)
	{
		*departure_time = t12_47pm;
		*arrival_time = t3_00pm;
		return;
	}
	else if (desired_time >= t12_47pm && desired_time < t2_00pm)
	{
		*departure_time = t2_00pm;
		*arrival_time = t4_08pm;
		return;
	}
	else if (desired_time >= t2_00pm && desired_time < t3_45pm)
	{
		*departure_time = t3_45pm;
		*arrival_time = t5_55pm;
		return;
	}
	else if (desired_time >= t3_45pm && desired_time < t7_00pm)
	{
		*departure_time = t7_00pm;
		*arrival_time = t9_20pm;
		return;
	}
	else if (desired_time >= t7_00pm && desired_time < t9_45pm)
	{
		*departure_time = t9_45pm;
		*arrival_time = t11_58pm;
		return;
	}
	
}

int main(void)
{
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

	/*input time as minutes since midnight*/
	desired_time = time_hh * 60 + time_mm;
	if (time_hh > 24 || time_mm > 60)
		printf("Entered invalid time \n\n");

	find_closest_flight(desired_time, &departure_time, &arrival_time);


	dep_hh = departure_time / 60;
	dep_mm = departure_time % 60;
	arr_hh = arrival_time / 60;
	arr_mm = arrival_time % 60;
	
	
	printf("Closest departure time is ");
	printf("%d:.2%d %c.m., arriving at %d:%.2d %c.m.",
		(dep_hh > 12) ? dep_hh - 12 : dep_hh, dep_mm, (dep_hh > 12) ? 'p' : 'a',
		(arr_hh > 12) ? arr_hh - 12 : arr_hh, arr_mm, (arr_hh > 12) ? 'p' : 'a');
	printf("\n\n\n");
	return 0;
