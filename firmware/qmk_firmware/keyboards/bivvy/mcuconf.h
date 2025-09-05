/*
Copyright 2025 QMK

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
// mcuconf.h:
#include_next <mcuconf.h>

#undef RP_ADC_USE_ADC1
#define RP_ADC_USE_ADC1 TRUE

#undef RP_ADC_USE_ADC2
#define RP_ADC_USE_ADC2 TRUE

#undef RP_ADC_USE_ADC_TS
#define RP_ADC_USE_ADC_TS FALSE

#undef RP_ADC_USE_ADC_VREF
#define RP_ADC_USE_ADC_VREF TRUE

#undef RP_ADC_USE_ADC_VBAT
#define RP_ADC_USE_ADC_VBAT FALSE

#undef RP_PWM_USE_PWM2
#define RP_PWM_USE_PWM2 TRUE

#undef RP_SIO_USE_UART0
#define RP_SIO_USE_UART0 TRUE
