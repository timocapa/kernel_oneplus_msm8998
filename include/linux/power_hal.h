/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 idkwhoiam322 <idkwhoiam322@raphielgang.org>
 */

/* In-kernel powerHAL to replicate some behaviours of the pixel powerHAL */

#ifndef _POWER_HAL_H
#define _POWER_HAL_H

/* bool to detect if currently boosted by cpu_input_boost_kick_max() */
extern bool max_boost_status;

/* CPUBW management */
#ifdef CONFIG_DEVFREQ_GOV_QCOM_BW_HWMON
extern unsigned int hyst_trigger_count_val;
extern unsigned int hist_memory_val;
extern unsigned int hyst_length_val;

void set_hyst_trigger_count_val(int val);
void set_hist_memory_val(int val);
void set_hyst_length_val(int val);
#else
static inline void set_hyst_trigger_count_val(int val) { }
static inline void set_hist_memory_val(int val) { }
static inline void set_hyst_length_val(int val) { }
#endif

#endif /* _POWER_HAL_H */
