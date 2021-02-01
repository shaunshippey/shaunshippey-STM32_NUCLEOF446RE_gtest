/******************************************************************************/
/*!
\file
Test suite for Sample

\copyright
Copyright (C) 2014 DISTek Integration, Inc. All Rights Reserved.

\author
Mike Weno
*/
/******************************************************************************/

#include "myMath.h"
#include "../gtest_c_helpers/gtest_helper.h"

/******************************************************************************/
/* Google Test C Helpers */
/******************************************************************************/
void myMath_add_PASS(void)
{
	ExpectEqual(0, add(0,0));
	ExpectEqual(1, add(0,1));
	ExpectEqual(1, add(1,0));
	ExpectEqual(2, add(1,1));
}

void myMath_add_FAIL(void)
{
	ExpectEqual(0, add(0,0));
	ExpectEqual(0, add(0,1));
	ExpectEqual(0, add(1,0));
	ExpectEqual(1, add(1,1));
}

void myMath_mult_PASS(void)
{
	ExpectEqual(0, mult(0,0));
	ExpectEqual(0, mult(0,1));
	ExpectEqual(0, mult(1,0));
	ExpectEqual(1, mult(1,1));
}

void myMath_mult_FAIL(void)
{
	ExpectEqual(1, mult(0,0));
	ExpectEqual(1, mult(0,1));
	ExpectEqual(1, mult(1,0));
	ExpectEqual(0, mult(1,1));
}

/*******************************************************************************/

