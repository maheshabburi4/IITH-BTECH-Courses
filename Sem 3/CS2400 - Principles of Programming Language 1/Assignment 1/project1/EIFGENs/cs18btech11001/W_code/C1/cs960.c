/*
 * Code for class CS18BTECH11001
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F960_7209(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7210(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7211(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7212(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7213(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7214(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7215(EIF_REFERENCE);
extern void F960_7216(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7217(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F960_7218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7220(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F960_7221(EIF_REFERENCE);
extern EIF_TYPED_VALUE F960_7222(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F960_7223(EIF_REFERENCE, int);
extern void EIF_Minit960(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CS18BTECH11001}.i_file */
EIF_TYPED_VALUE F960_7209 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4999,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.o_file */
EIF_TYPED_VALUE F960_7210 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5000,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.size */
EIF_TYPED_VALUE F960_7211 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5001,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.num */
EIF_TYPED_VALUE F960_7212 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5002,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.rem */
EIF_TYPED_VALUE F960_7213 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5003,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.res */
EIF_TYPED_VALUE F960_7214 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5004,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.i */
EIF_TYPED_VALUE F960_7215 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005,Dtype(Current)));
	return r;
}


/* {CS18BTECH11001}.make */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F960_7216 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_INTEGER_32  EIF_VOLATILE ti4_4;
	EIF_INTEGER_32  EIF_VOLATILE ti4_5;
	EIF_INTEGER_32  EIF_VOLATILE ti4_6;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLXL;
	
	RTEAA(l_feature_name, 959, Current, 0, 0, 13518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13518);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4999, 0xF80000B7, 0); /* i_file */
	tr1 = RTLNSMART(RTWCT(4999, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("input.txt",9,1323334516);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3633, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4999, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5000, 0xF80000B7, 0); /* o_file */
	tr1 = RTLNSMART(RTWCT(5000, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("output.txt",10,894654068);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3634, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5000, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3590, "read_integer", tr1))(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5001, 0x10000000, 1); /* size */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(3536, "last_integer", tr1));
	*(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5002, 0xF8000255, 0); /* num */
	tr1 = RTLNSMART(RTWCT(5002, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
	ui4_3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(5,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5002, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5003, 0xF8000255, 0); /* rem */
	tr1 = RTLNSMART(RTWCT(5003, dtype, Dftype(Current)).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
	ui4_3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(6,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5003, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(8);
		RTCT("size>0", EX_LINV);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_LOOP) {
		RTHOOK(9);
		RTCT("size-i+1", EX_VAR);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(10);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ti4_4)) break;
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3590, "read_integer", tr1))(tr1);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(12,1);
		ti4_5 = *(EIF_INTEGER_32 *)(tr2 + RTVA(3536, "last_integer", tr2));
		ui4_1 = ti4_5;
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_2 = ti4_6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3590, "read_integer", tr1))(tr1);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(14,1);
		ti4_5 = *(EIF_INTEGER_32 *)(tr2 + RTVA(3536, "last_integer", tr2));
		ui4_1 = ti4_5;
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_2 = ti4_6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(15);
		RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)))++;
		if (RTAL & CK_LOOP) {
			RTHOOK(8);
			RTCT("size>0", EX_LINV);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(9);
			RTCT("size-i+1", EX_VAR);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(16);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(16,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3559, "close", tr1))(tr1);
	RTHOOK(17);
	RTDBGAA(Current, dtype, 5004, 0x10000000, 1); /* res */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5008, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(5004, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(18);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(18,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5004, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3568, "put_integer", tr1))(tr1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(19);
	RTDBGAA(Current, dtype, 5000, 0xF80000B7, 0); /* o_file */
	tr1 = RTLNSMART(RTWCT(5000, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("output.txt",10,894654068);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3634, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(19,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5000, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(20);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5000, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	tr2 = RTMS_EX_H("INVALID",7,1484479556);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3562, "put_string", tr1))(tr1, ur1x);
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(2);
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {CS18BTECH11001}.inv */
EIF_TYPED_VALUE F960_7217 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "inv";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 959, Current, 7, 2, 13519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13519);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("m1/=1", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	loc7 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc6 <= ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / loc7);
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) loc7;
		RTHOOK(10);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % loc7);
		RTHOOK(11);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) loc2;
		RTHOOK(12);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) loc4;
		RTHOOK(13);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - (EIF_INTEGER_32) (loc3 * loc4));
		RTHOOK(14);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) loc2;
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(16);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 += loc1;
	}
	RTHOOK(17);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {CS18BTECH11001}.minx */
EIF_TYPED_VALUE F960_7218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minx";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 959, Current, 3, 0, 13520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13520);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pairwise_coprime=TRUE and rem_gt_num=TRUE", EX_PRE);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5009, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5011, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN) 1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCT("size>0", EX_LINV);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_LOOP) {
		RTHOOK(6);
		RTCT("size-i+1", EX_VAR);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(7);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ti4_4)) break;
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_1 = ti4_5;
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
		loc1 *= ti4_5;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)))++;
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCT("size>0", EX_LINV);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(6);
			RTCT("size-i+1", EX_VAR);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(11);
		RTCT("size>0", EX_LINV);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_5 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_LOOP) {
		RTHOOK(12);
		RTCT("size-i+1", EX_VAR);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_5 - ti4_6) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(13);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_5 > ti4_6)) break;
		RTHOOK(14);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_1 = ti4_7;
		ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ti4_7);
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_1 = ti4_7;
		ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
		ui4_1 = loc3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_2 = ti4_8;
		ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_2x)).it_i4);
		ui4_2 = ti4_8;
		ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5007, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
		loc2 += (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_7 * ti4_8) * loc3);
		RTHOOK(16);
		RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)))++;
		if (RTAL & CK_LOOP) {
			RTHOOK(11);
			RTCT("size>0", EX_LINV);
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_5 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(12);
			RTCT("size-i+1", EX_VAR);
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_5 - ti4_6) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(17);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 % loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("valid_output(Result)=TRUE", EX_POST);
		ui4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5012, dtype))(Current, ui4_1x)).it_b);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {CS18BTECH11001}.pairwise_coprime */
EIF_TYPED_VALUE F960_7219 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pairwise_coprime";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	
	RTEAA(l_feature_name, 959, Current, 2, 0, 13521);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13521);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("size>0", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(4);
		RTCT("size>0", EX_LINV);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCT("size-i+1", EX_VAR);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(6);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 >= ti4_4)) break;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L));
		if (RTAL & CK_LOOP) {
			RTHOOK(8);
			RTCT("size>0", EX_LINV);
			ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_7 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(9);
			RTCT("size-j+1", EX_VAR);
			ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_7 - loc1) + ((EIF_INTEGER_32) 1L));
			if (ti4_6 >= 0) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(10);
			ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (loc1 > ti4_7)) break;
			RTHOOK(11);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ui4_1 = ti4_8;
			ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
			ui4_1 = ti4_8;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_2 = loc1;
			ti4_9 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_2x)).it_i4);
			ui4_2 = ti4_9;
			ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5010, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
			if ((EIF_BOOLEAN)(ti4_8 != ((EIF_INTEGER_32) 1L))) {
				tb1 = (EIF_BOOLEAN)(loc2 == (EIF_BOOLEAN) 1);
			}
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			if (RTAL & CK_LOOP) {
				RTHOOK(8);
				RTCT("size>0", EX_LINV);
				ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
				if ((EIF_BOOLEAN) (ti4_7 > ((EIF_INTEGER_32) 0L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			if (RTAL & CK_LOOP) {
				RTHOOK(9);
				RTCT("size-j+1", EX_VAR);
				ti4_7 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
				ti4_5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_7 - loc1) + ((EIF_INTEGER_32) 1L));
				if ((ti4_6 > ti4_5) && ti4_5 >= 0) {
					RTCK;
					ti4_6 = ti4_5;
				} else {
					RTCF;
				}
			}
		}
		RTHOOK(14);
		RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)))++;
		if (RTAL & CK_LOOP) {
			RTHOOK(4);
			RTCT("size>0", EX_LINV);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCT("size-i+1", EX_VAR);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(15);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {CS18BTECH11001}.gcd */
EIF_TYPED_VALUE F960_7220 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "gcd";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 959, Current, 0, 2, 13522);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13522);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x>=0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) arg1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ui4_1 = arg2;
		ui4_2 = (EIF_INTEGER_32) (arg1 % arg2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5010, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {CS18BTECH11001}.rem_gt_num */
EIF_TYPED_VALUE F960_7221 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rem_gt_num";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 959, Current, 1, 0, 13523);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13523);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(3);
		RTCT("size>0", EX_LINV);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_LOOP) {
		RTHOOK(4);
		RTCT("size-i+1", EX_VAR);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(5);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ti4_4)) break;
		RTHOOK(6);
		tb1 = '\0';
		tb2 = '\01';
		tb3 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_1 = ti4_5;
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
		if (!(EIF_BOOLEAN) (ti4_5 < ((EIF_INTEGER_32) 0L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ui4_1 = ti4_5;
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ui4_1 = ti4_6;
			ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
			tb3 = (EIF_BOOLEAN) (ti4_5 >= ti4_6);
		}
		if (!(tb3)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ui4_1 = ti4_5;
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN) (ti4_5 < ((EIF_INTEGER_32) 2L));
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(loc1 == (EIF_BOOLEAN) 1);
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)))++;
		if (RTAL & CK_LOOP) {
			RTHOOK(3);
			RTCT("size>0", EX_LINV);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(4);
			RTCT("size-i+1", EX_VAR);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(9);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {CS18BTECH11001}.valid_output */
EIF_TYPED_VALUE F960_7222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_output";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 959, Current, 1, 1, 13524);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(959, Current, 13524);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("temp>1", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
	*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_LOOP) {
		RTHOOK(4);
		RTCT("size>0", EX_LINV);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_LOOP) {
		RTHOOK(5);
		RTCT("size-i+1", EX_VAR);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
		if (ti4_2 >= 0) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(6);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
		if ((EIF_BOOLEAN) (ti4_3 > ti4_4)) break;
		RTHOOK(7);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5002, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_1 = ti4_5;
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_6 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
		ui4_1 = ti4_6;
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ti4_5) != ti4_6)) {
			tb1 = (EIF_BOOLEAN)(loc1 == (EIF_BOOLEAN) 1);
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5005, 0x10000000, 1); /* i */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype)))++;
		if (RTAL & CK_LOOP) {
			RTHOOK(4);
			RTCT("size>0", EX_LINV);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			if ((EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(5);
			RTCT("size-i+1", EX_VAR);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5005, dtype));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) + ((EIF_INTEGER_32) 1L));
			if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
				RTCK;
				ti4_2 = ti4_1;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(10);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {CS18BTECH11001}._invariant */
void F960_7223 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 959, Current, 0, 7222);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("size>0", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5001, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit960 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
