// ---------------------------------------------------------------------
//
// Copyright (C) 2012 - 2017 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------



// tests for the BlockMask class
//
// here: test BlockMask::size()


#include <deal.II/fe/block_mask.h>

#include "../tests.h"



void
test()
{
  AssertThrow(BlockMask(12, false).size() == 12, ExcInternalError());
  AssertThrow(BlockMask().size() == 0, ExcInternalError());

  deallog << "OK" << std::endl;
}


int
main()
{
  std::ofstream logfile("output");
  deallog << std::setprecision(4);

  deallog.attach(logfile);

  test();
}
