/*
 * ====================================================================
 * Copyright (c) 2002, 2003 The RapidSvn Group.  All rights reserved.
 *
 * This software is licensed as described in the file LICENSE.txt,
 * which you should have received as part of this distribution.
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://rapidsvn.tigris.org/.
 * ====================================================================
 */
#ifndef _DIFF_DATA_H_INCLUDED
#define _DIFF_DATA_H_INCLUDED

// wx
#include "wx/string.h"

// svncpp
#include "svncpp/revision.hpp"

struct DiffData
{
public:

  typedef enum
  {
    CMP_WC_WITH_SAME_REV,
    CMP_WC_WITH_DIFFERENT_REV,
    CMP_TWO_REV
  } CompareType;

  CompareType compareType;

  bool useUrl1;
  wxString url1;

  bool useUrl2;
  wxString url2;

  svn::Revision revision1;
  svn::Revision revision2;

  /** Constructor */
  DiffData ()
    : compareType (CMP_WC_WITH_SAME_REV),
      useUrl1 (false), url1 (""),
      useUrl2 (false), url2 ("")
  {
  }
};

#endif
/* -----------------------------------------------------------------
 * local variables:
 * eval: (load-file "../rapidsvn-dev.el")
 * end:
 */