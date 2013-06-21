/**
 * xrdp: A Remote Desktop Protocol server.
 *
 * Copyright (C) Jay Sorg 2004-2013
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 *
 * @file sesman.h
 * @brief Main include file
 * @author Jay Sorg
 *
 */

#ifndef SESMAN_H
#define SESMAN_H

#if defined(HAVE_CONFIG_H)
#include "config_ac.h"
#endif
#include "d3des.h"
#include "arch.h"
#include "parse.h"
#include "os_calls.h"
#include "log.h"
#include "file_loc.h"
#include "env.h"
#include "auth.h"
#include "config.h"
//#include "tcp.h"
#include "sig.h"
#include "session.h"
#include "access.h"
#include "scp.h"
#include "thread.h"
#include "lock.h"
#include "thread_calls.h"

#include "libscp.h"

#endif
