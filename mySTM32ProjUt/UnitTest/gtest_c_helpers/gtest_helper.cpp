/******************************************************************************/
/*!
\file
Helper file for Google Test to interface to C.

\copyright
Copyright (C) 2014 DISTek Integration, Inc. All Rights Reserved.

\author
Mike Weno
*/
/******************************************************************************/

#include "gtest/gtest.h"

extern "C"
{
#include "../UnitTest/gtest_c_helpers/gtest_helper.h"
}

/******************************************************************************/
extern "C" void ExpectTrue(unsigned int expected)
{
EXPECT_TRUE(expected != 0);
}

/******************************************************************************/
extern "C" void ExpectEqual(unsigned int expected, unsigned int actual)
{
EXPECT_EQ(expected, actual);
}

/******************************************************************************/
/*
Copyright (C) 2014 DISTek Integration, Inc. All Rights Reserved.

Developed by:
DISTek(R) Integration, Inc.
6612 Chancellor Drive Suite 600
Cedar Falls, IA 50613
Tel: 319-859-3600
*/
/******************************************************************************/
