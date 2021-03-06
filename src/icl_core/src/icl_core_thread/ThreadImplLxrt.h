// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This file is part of FZIs ic_workspace.
//
// This program is free software licensed under the LGPL
// (GNU LESSER GENERAL PUBLIC LICENSE Version 3).
// You can find a copy of this license in LICENSE folder in the top
// directory of the source code.
//
// © Copyright 2016 FZI Forschungszentrum Informatik, Karlsruhe, Germany
//
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2009-03-02
 *
 * \brief   Defines icl_core::thread::ThreadImplLxrt
 *
 * \b icl_core::thread::ThreadImplLxrt
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_THREAD_THREAD_IMPL_LXRT_H_INCLUDED
#define ICL_CORE_THREAD_THREAD_IMPL_LXRT_H_INCLUDED

#include <icl_core/os_lxrt.h>

#if defined(_SYSTEM_LXRT_33_)
# include "icl_core_thread/ThreadImplLxrt33.h"
#elif defined(_SYSTEM_LXRT_35_)
# include "icl_core_thread/ThreadImplLxrt35.h"
#elif defined(_SYSTEM_LXRT_38_)
# include "icl_core_thread/ThreadImplLxrt38.h"
#else
# error "Unsupported RTAI version!"
#endif

namespace icl_core {
namespace thread {

#if defined(_SYSTEM_LXRT_33_)
typedef ThreadImplLxrt33 ThreadImplLxrt;
#elif defined(_SYSTEM_LXRT_35_)
typedef ThreadImplLxrt35 ThreadImplLxrt;
#elif defined(_SYSTEM_LXRT_38_)
typedef ThreadImplLxrt38 ThreadImplLxrt;
#endif

}
}

#endif
