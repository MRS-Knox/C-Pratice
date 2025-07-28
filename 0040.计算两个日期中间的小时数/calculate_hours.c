
/*!
	@brief 		 Calculate the number of hours between two times.
	@param[in]	 pstart_time:Point to start time.	Year(From 2000) Month Day Hour
				 pstop_time:Point to stop time.		Year(From 2000) Month Day Hour
	@param[out]	 none
	@retval		 The number of hours.
*/
#define JUDGE_LEAPYEAR(year)	(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
unsigned int CALHour_BetweenTwoTime(unsigned char *pstart_time,unsigned char *pstop_time){
	unsigned int total_days = 0;
	unsigned int total_hours = 0;
	unsigned char year_type = 0;
	const unsigned char month_day[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},	//Nonleap year
											{0,31,29,31,30,31,30,31,31,30,31,30,31}};	//Leap year
    /* 年是关于2000年的偏移量 */
	unsigned short start_year = 2000 + pstart_time[0];
	unsigned short stop_year  = 2000 + pstop_time[0];
	/* 判断中间是否有整年 */
	for(unsigned short i = start_year+1;i < stop_year;i++){
		if(JUDGE_LEAPYEAR(i))
			total_days += 366;
		else
			total_days += 365;
	}
	/* 判断是否为同一年 */
	if(start_year == stop_year){
        /* 计算间隔的天数 */
		year_type = JUDGE_LEAPYEAR(start_year) ? 1 : 0;
		for(unsigned char i = pstart_time[1];i <= pstop_time[1];i++){
			total_days += month_day[year_type][i];
		}
	}
	else if(start_year < stop_year){
        /* 计算间隔的天数 */
		year_type = JUDGE_LEAPYEAR(start_year) ? 1 : 0;
		for(unsigned short i = pstart_time[1];i <= 12;i++){
			total_days += month_day[year_type][i];
		}
		year_type = JUDGE_LEAPYEAR(stop_year) ? 1 : 0;
		for(unsigned short i = 1;i <= pstop_time[1];i++){
			total_days += month_day[year_type][i];
		}
	}
    /* 起始日期小于终止日期，则报错 */
	else if(start_year > stop_year)
		return 0;
    /* 减去包含多的天数，比如1号到起始日期 */
	year_type = JUDGE_LEAPYEAR(stop_year) ? 1 : 0;
	total_days -= ((pstart_time[2]-1) + (month_day[year_type][pstop_time[1]]-pstop_time[2]));
    /* 转变为小时数，并减去包含多的小时数 */
	total_hours = (total_days*24) - pstart_time[3] - (24-pstop_time[3]);
	return total_hours;
}
