/*
 * ====================================================================
 * Copyright (c) 2002-2005 The RapidSvn Group.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program (in the file GPL.txt); if not, write to 
 * the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://rapidsvn.tigris.org/.
 * ====================================================================
 */
#include "cppunit/TestCase.h"
#include "cppunit/extensions/HelperMacros.h"

/**
 * Tests the svn::Path class.
 */
class PathTestCase : public CppUnit::TestCase
{
  CPPUNIT_TEST_SUITE (PathTestCase);
  CPPUNIT_TEST (testInit);
  CPPUNIT_TEST (testSplit);
  CPPUNIT_TEST (testAddComponent);
  CPPUNIT_TEST (testCopy);
  CPPUNIT_TEST_SUITE_END ();

public:
  void setUp ();

protected:
  void testInit ();
  void testSplit ();
  void testAddComponent ();
  void testCopy ();
};

/* -----------------------------------------------------------------
 * local variables:
 * eval: (load-file "../../../rapidsvn-dev.el")
 * end:
 */