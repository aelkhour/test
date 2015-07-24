//  (C) Copyright Gennadiy Rozental 2001-2015.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
//  File        : $RCSfile$
//
//  Version     : $Revision$
//
//  Description : single header usage variant test
// ***************************************************************************

// Boost.Test
#define BOOST_TEST_MODULE single header test
#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE( test )
{
    int i = 1;
    BOOST_TEST( i*i == 1 );
    BOOST_TEST( framework::master_test_suite().argv[1] == "a b" );
}

//____________________________________________________________________________//

// EOF
