/*
 * Copyright (c) 2019 Nordic Semiconductor
 *
 * SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
 */

#ifndef _TAP_H_
#define _TAP_H_

#include <stdbool.h>

extern int tap_fd;

void tap_create();
void tap_delete();
void tap_set_state(bool up);

#endif
