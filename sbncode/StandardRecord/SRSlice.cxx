////////////////////////////////////////////////////////////////////////
// \file    SRSlice.cxx
// \brief   SRSlice object for slice summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "SRSlice.h"
#include <limits>

namespace caf
{
  SRSlice::SRSlice():
    id(std::numeric_limits<int>::signaling_NaN()),
    charge(std::numeric_limits<float>::signaling_NaN())
  {  }


  SRSlice::~SRSlice(){  }


  void SRSlice::setDefault()
  {
    id             = -5;
    charge         = -5;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
