#include"CDateTime.h"

void main() {
	int days = 0;
	CDateTime dt(2020, 1, 23);
	CDateTime dt1(2019, 11, 13);
	//cout << dt << endl;
	//dt.DateTimeShow();
	//dt = dt.GetCurDateTime();
	//cout << dt << endl;
	//dt.NextDateTime(100);
	//dt.DateTimeCalender();
	//cout << dt.GetWeekByYMD(2020, 6, 2) << endl;
	//CDateTime dt1 = dt.NextDateTime(100);
	//cout << dt1 << endl;

	//CDateTime dt2 = dt.PrevDateTime(100);
	//days = dt - dt1;
	//cout << days << endl;
	CDateTime dt2;
	dt2.DateTimeCalender(2020, 4);
}