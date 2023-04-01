/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

korp_tid
os_self_thread()
{
    return 0;
}

int
os_mutex_init(korp_mutex *mutex)
{
    return BHT_OK;
}

int
os_mutex_destroy(korp_mutex *mutex)
{
    return BHT_OK;
}

int
os_mutex_lock(korp_mutex *mutex)
{
    return 0;
}

int
os_mutex_unlock(korp_mutex *mutex)
{
    return 0;
}

int
os_cond_init(korp_cond *cond)
{
    return BHT_OK;
}

int
os_cond_destroy(korp_cond *cond)
{
    return BHT_OK;
}

int
os_cond_wait(korp_cond *cond, korp_mutex *mutex)
{
    return BHT_OK;
}

int
os_cond_reltimedwait(korp_cond *cond, korp_mutex *mutex, uint64 useconds)
{
    return BHT_ERROR;
}

int
os_cond_signal(korp_cond *cond)
{
    return BHT_OK;
}

int
os_cond_broadcast(korp_cond *cond)
{
    return BHT_OK;
}

int
os_thread_join(korp_tid thread, void **value_ptr)
{
    return 0;
}

int
os_thread_detach(korp_tid thread)
{
    return 0;
}

void
os_thread_exit(void *retval)
{
    return;
}

uint8 *
os_thread_get_stack_boundary()
{
    return NULL;
}
