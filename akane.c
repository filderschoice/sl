#include <curses.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include "sl.h"
#include "akane.h"

/* default */
int num = 99;

/* Akane Chan AA Select */
int add_AKANE(int x, int flg)
{
	int ret = 0;

	/* Select AA */
	if(num == 99)
	{
		if(flg == 0)
		{
			/* seed */
			srand((unsigned)time(NULL));
			num = rand() % 5;
		}
		else
		{
			num = 0;
		}
	}
	switch(num)
	{
		case 0:
			ret = AA_BIG(x);
			break;
		case 1:
			ret = AA_LTL_01(x);
			break;
		case 2:
			ret = AA_LTL_02(x);
			break;
		case 3:
			ret = AA_LTL_03(x);
			break;
		case 4:
			ret = AA_LTL_04(x);
			break;
		default:
			ret = AA_BIG(x);
			break;
	}

    return ret;
}

/* Big Akane Chan AA */
int AA_BIG(int x)
{
    static char *bigAKANE[AKNHIGHT_BIG + 1]
        = {  AKNSTR001, AKNSTR002, AKNSTR003, AKNSTR004, AKNSTR005,
             AKNSTR006, AKNSTR007, AKNSTR008, AKNSTR009, AKNSTR010,
             AKNSTR011, AKNSTR012, AKNSTR013, AKNSTR014, AKNSTR015,
             AKNSTR016, AKNSTR017, AKNSTR018, AKNSTR019, AKNSTR020,
             AKNSTR021, AKNSTR022, AKNSTR023, AKNSTR024, AKNSTR025,
             AKNSTR026, AKNSTR027, AKNSTR028, AKNSTR029, AKNSTR030,
             AKNSTR031, AKNSTR032, AKNSTR033, AKNSTR034, AKNSTR035,
             AKNSTR036, AKNSTR037, AKNSTR038, AKNSTR039, AKNSTR040,
             AKNSTR041, AKNSTR042, AKNSTR043, AKNSTR044, AKNSTR045,
             AKNSTR046, AKNSTR047, AKNSTR048, AKNSTR049, AKNDEL001 };

    int y, i;

    if (x < - AKNLENGTH_BIG)  return ERR;
    y = LINES / 2 - 30;

    for (i = 0; i <= AKNHIGHT_BIG; ++i) {
        my_mvaddstr(y + i, x, bigAKANE[i]);
    }
    return OK;
}

/* Little Akane Chan AA 01 */
int AA_LTL_01(int x)
{
    static char *ltlAKANE[AKNHIGHT_LTL01 + 1]
        = {  AKNSTRL01_001, AKNSTRL01_002, AKNSTRL01_003, AKNSTRL01_004, AKNSTRL01_005,
             AKNSTRL01_006, AKNSTRL01_007, AKNSTRL01_008, AKNSTRL01_009, AKNSTRL01_010,
             AKNSTRL01_011, AKNSTRL01_012, AKNSTRL01_013, AKNSTRL01_014, AKNSTRL01_015,
             AKNSTRL01_016, AKNSTRL01_017, AKNSTRL01_018, AKNSTRL01_019, AKNSTRL01_020,
             AKNSTRL01_021, AKNSTRL01_022, AKNSTRL01_023, AKNSTRL01_024, AKNSTRL01_025,
             AKNSTRL01_026, AKNSTRL01_027, AKNSTRL01_028, AKNSTRL01_029, AKNSTRL01_030,
             AKNSTRL01_031, AKNSTRL01_032, AKNSTRL01_033, AKNSTRL01_034, AKNSTRL01_035,
             AKNSTRL01_036, AKNSTRL01_037, AKNSTRL01_038, AKN_DEL01_STR };

    int y, i;

    if (x < - AKNLENGTH_LTL01)  return ERR;
    y = LINES / 2 - 20;

    for (i = 0; i <= AKNHIGHT_LTL01; ++i) {
        my_mvaddstr(y + i, x, ltlAKANE[i]);
    }
    return OK;
}

/* Little Akane Chan AA 02 */
int AA_LTL_02(int x)
{
    static char *ltlAKANE[AKNHIGHT_LTL02 + 1]
        = {  AKNSTRL02_001, AKNSTRL02_002, AKNSTRL02_003, AKNSTRL02_004, AKNSTRL02_005,
             AKNSTRL02_006, AKNSTRL02_007, AKNSTRL02_008, AKNSTRL02_009, AKNSTRL02_010,
             AKNSTRL02_011, AKNSTRL02_012, AKNSTRL02_013, AKNSTRL02_014, AKNSTRL02_015,
             AKNSTRL02_016, AKNSTRL02_017, AKNSTRL02_018, AKNSTRL02_019, AKNSTRL02_020,
             AKNSTRL02_021, AKNSTRL02_022, AKNSTRL02_023, AKNSTRL02_024, AKNSTRL02_025,
             AKNSTRL02_026, AKNSTRL02_027, AKNSTRL02_028, AKNSTRL02_029, AKNSTRL02_030,
             AKNSTRL02_031, AKNSTRL02_032, AKNSTRL02_033, AKNSTRL02_034, AKNSTRL02_035,
             AKNSTRL02_036, AKNSTRL02_037, AKNSTRL02_038, AKN_DEL02_STR };

    int y, i;

    if (x < - AKNLENGTH_LTL02)  return ERR;
    y = LINES / 2 - 20;

    for (i = 0; i <= AKNHIGHT_LTL02; ++i) {
        my_mvaddstr(y + i, x, ltlAKANE[i]);
    }
    return OK;
}

/* Little Akane Chan AA 03 */
int AA_LTL_03(int x)
{
    static char *ltlAKANE[AKNHIGHT_LTL03 + 1]
        = {  AKNSTRL03_001, AKNSTRL03_002, AKNSTRL03_003, AKNSTRL03_004, AKNSTRL03_005,
             AKNSTRL03_006, AKNSTRL03_007, AKNSTRL03_008, AKNSTRL03_009, AKNSTRL03_010,
             AKNSTRL03_011, AKNSTRL03_012, AKNSTRL03_013, AKNSTRL03_014, AKNSTRL03_015,
             AKNSTRL03_016, AKNSTRL03_017, AKNSTRL03_018, AKNSTRL03_019, AKNSTRL03_020,
             AKNSTRL03_021, AKNSTRL03_022, AKNSTRL03_023, AKNSTRL03_024, AKNSTRL03_025,
             AKNSTRL03_026, AKNSTRL03_027, AKNSTRL03_028, AKNSTRL03_029, AKNSTRL03_030,
             AKNSTRL03_031, AKNSTRL03_032, AKNSTRL03_033, AKNSTRL03_034, AKNSTRL03_035,
             AKNSTRL03_036, AKNSTRL03_037, AKNSTRL03_038, AKNSTRL03_039, AKNSTRL03_040,
             AKNSTRL03_041, AKN_DEL03_STR };

    int y, i;

    if (x < - AKNLENGTH_LTL03)  return ERR;
    y = LINES / 2 - 20;

    for (i = 0; i <= AKNHIGHT_LTL03; ++i) {
        my_mvaddstr(y + i, x, ltlAKANE[i]);
    }
    return OK;
}

/* Little Akane Chan AA 04 */
int AA_LTL_04(int x)
{
    static char *ltlAKANE[AKNHIGHT_LTL04 + 1]
        = {  AKNSTRL04_001, AKNSTRL04_002, AKNSTRL04_003, AKNSTRL04_004, AKNSTRL04_005,
             AKNSTRL04_006, AKNSTRL04_007, AKNSTRL04_008, AKNSTRL04_009, AKNSTRL04_010,
             AKNSTRL04_011, AKNSTRL04_012, AKNSTRL04_013, AKNSTRL04_014, AKNSTRL04_015,
             AKNSTRL04_016, AKNSTRL04_017, AKNSTRL04_018, AKNSTRL04_019, AKNSTRL04_020,
             AKNSTRL04_021, AKNSTRL04_022, AKNSTRL04_023, AKNSTRL04_024, AKNSTRL04_025,
             AKNSTRL04_026, AKNSTRL04_027, AKNSTRL04_028, AKNSTRL04_029, AKNSTRL04_030,
             AKNSTRL04_031, AKNSTRL04_032, AKNSTRL04_033, AKNSTRL04_034, AKNSTRL04_035,
             AKNSTRL04_036, AKNSTRL04_037, AKNSTRL04_038, AKN_DEL04_STR };

    int y, i;

    if (x < - AKNLENGTH_LTL04)  return ERR;
    y = LINES / 2 - 20;

    for (i = 0; i <= AKNHIGHT_LTL04; ++i) {
        my_mvaddstr(y + i, x, ltlAKANE[i]);
    }
    return OK;
}
