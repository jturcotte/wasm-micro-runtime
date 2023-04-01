/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"
#include "platform_api_extension.h"

int
bh_platform_init()
{
    return 0;
}

void
bh_platform_destroy()
{
}

void *
os_malloc(unsigned size)
{
    // Expects an allocator by the application code.
    return NULL;
}

void *
os_realloc(void *ptr, unsigned size)
{
    return NULL;
}

void
os_free(void *ptr)
{}

int
os_printf(const char *format, ...)
{
    return 0;
}

int
os_vprintf(const char *format, va_list ap)
{
    return 0;
}

void *
os_mmap(void *hint, size_t size, int prot, int flags, os_file_handle file)
{
    if ((uint64)size >= UINT32_MAX)
        return NULL;
    return BH_MALLOC(size);
}

void
os_munmap(void *addr, size_t size)
{
        BH_FREE(addr);
}

int
os_mprotect(void *addr, size_t size, int prot)
{
    return 0;
}

void
os_dcache_flush()
{
}

int snprintf(char *buffer, size_t bufsz, const char *format, ...) {
    return -1;
}

int vsnprintf(char *buffer, size_t bufsz, char const *format, va_list vlist) {
    return -1;
}

int strcmp(const char* s1, const char* s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
