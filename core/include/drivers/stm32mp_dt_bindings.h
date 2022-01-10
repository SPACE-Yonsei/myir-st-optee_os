/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2021, STMicroelectronics
 */
#ifndef STM32MP_DT_BINDINGS_H
#define STM32MP_DT_BINDINGS_H

#ifdef CFG_STM32MP13
#include <dt-bindings/clock/stm32mp13-clks.h>
#include <dt-bindings/clock/stm32mp13-clksrc.h>
#include <dt-bindings/reset/stm32mp13-resets.h>
#include <dt-bindings/soc/stm32mp13-etzpc.h>
#endif

#ifdef CFG_STM32MP15
#include <dt-bindings/clock/stm32mp1-clks.h>
#include <dt-bindings/clock/stm32mp1-clksrc.h>
#include <dt-bindings/reset/stm32mp1-resets.h>
#include <dt-bindings/soc/stm32mp15-etzpc.h>
#endif

#include <dt-bindings/power/stm32mp1-power.h>

#endif /* STM32MP_DT_BINDINGS_H */
