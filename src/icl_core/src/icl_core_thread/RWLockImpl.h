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
 * \author  Lars Pfotzer <pfotzer@fzi.de>
 * \date    2010-02-08
 *
 * \brief   Contains icl_core::thread::RWLockImpl
 *
 * \b icl_core::thread::RWLockImpl
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_THREAD_RWLOCK_IMPL_H_INCLUDED
#define ICL_CORE_THREAD_RWLOCK_IMPL_H_INCLUDED

#include <icl_core/Noncopyable.h>
#include <icl_core/TimeSpan.h>
#include <icl_core/TimeStamp.h>

namespace icl_core {
namespace thread {

class RWLockImpl : protected virtual icl_core::Noncopyable
{
public:
  virtual ~RWLockImpl() {}

  virtual bool readLock() = 0;
  virtual bool readLock(const icl_core::TimeSpan& timeout) = 0;
  virtual bool readLock(const icl_core::TimeStamp& timeout) = 0;
  virtual bool tryReadLock() = 0;

  virtual bool writeLock() = 0;
  virtual bool writeLock(const icl_core::TimeSpan& timeout) = 0;
  virtual bool writeLock(const icl_core::TimeStamp& timeout) = 0;
  virtual bool tryWriteLock() = 0;

  virtual void unlock() = 0;
};

}
}

#endif
