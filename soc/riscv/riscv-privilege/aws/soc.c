/*
 * Copyright (c) 2021 Katsuhiro Suzuki
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief QEMU RISC-V virt machine hardware depended interface
 */

#include <zephyr/kernel.h>
#include <zephyr/arch/cpu.h>
#include <zephyr/sys/util.h>

#define FINISHER_FAIL		0x3333

/* Exit QEMU successfully */
#define FINISHER_EXIT		0x5555

/* Reboot machine */
#define FINISHER_REBOOT		0x7777

void sys_arch_reboot(int type)
{
	volatile uint32_t *reg = (uint32_t *)SIFIVE_SYSCON_TEST;

	*reg = FINISHER_REBOOT;

	ARG_UNUSED(type);
}
