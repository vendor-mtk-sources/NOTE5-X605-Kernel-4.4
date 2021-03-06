/*
 * Copyright (C) 2018 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include <linux/unistd.h>
#include <linux/version.h>

#include "private/ut_entry.h"
#include "private/tmem_utils.h"
#include "public/trusted_mem_api.h"

static inline void trusted_mem_type_enum_validate(void)
{
	COMPILE_ASSERT((int)TRUSTED_MEM_REQ_SVP == (int)TRUSTED_MEM_SVP);
	COMPILE_ASSERT((int)TRUSTED_MEM_REQ_PROT == (int)TRUSTED_MEM_PROT);
	COMPILE_ASSERT((int)TRUSTED_MEM_REQ_WFD == (int)TRUSTED_MEM_WFD);
	COMPILE_ASSERT((int)TRUSTED_MEM_REQ_2D_FR
		       == (int)TRUSTED_MEM_SVP_VIRT_2D_FR);
	COMPILE_ASSERT((int)(TRUSTED_MEM_MAX - 1)
		       == (int)TRUSTED_MEM_SVP_VIRT_2D_FR);
}

int trusted_mem_api_alloc(enum TRUSTED_MEM_REQ_TYPE mem_type, u32 alignment,
			  u32 size, u32 *refcount, u32 *sec_handle,
			  uint8_t *owner, uint32_t id)
{
	trusted_mem_type_enum_validate();
	return tmem_core_alloc_chunk(mem_type, alignment, size, refcount,
				     sec_handle, owner, id, 0);
}
EXPORT_SYMBOL(trusted_mem_api_alloc);

int trusted_mem_api_alloc_zero(enum TRUSTED_MEM_REQ_TYPE mem_type,
			       u32 alignment, u32 size, u32 *refcount,
			       u32 *sec_handle, uint8_t *owner, uint32_t id)
{
	return tmem_core_alloc_chunk(mem_type, alignment, size, refcount,
				     sec_handle, owner, id, 1);
}
EXPORT_SYMBOL(trusted_mem_api_alloc_zero);

int trusted_mem_api_unref(enum TRUSTED_MEM_REQ_TYPE mem_type, u32 sec_handle,
			  uint8_t *owner, uint32_t id)
{
	return tmem_core_unref_chunk(mem_type, sec_handle, owner, id);
}
EXPORT_SYMBOL(trusted_mem_api_unref);
