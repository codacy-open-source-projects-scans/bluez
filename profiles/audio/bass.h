/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright 2024 NXP
 *
 */

void bass_add_stream(struct btd_device *device, struct iovec *meta,
			struct iovec *caps, struct bt_iso_qos *qos,
			uint8_t sgrp, uint8_t bis);
void bass_remove_stream(struct btd_device *device);
