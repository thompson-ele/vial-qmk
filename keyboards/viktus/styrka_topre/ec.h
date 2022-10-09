/* Copyright 2022 Viktus Design LLC
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include <stdbool.h>

#include "matrix.h"

typedef struct {
    uint16_t low_threshold;
    uint16_t high_threshold;
} ec_config_t;

int      ec_init(ec_config_t const* const ec_config);
bool     ec_matrix_scan(matrix_row_t current_matrix[]);
void     ec_dprint_matrix(void);
uint16_t ec_readkey_raw(uint8_t col, uint8_t row);
bool     ec_update_key(matrix_row_t* current_row, uint8_t col, uint16_t sw_value, uint16_t low_threshold, uint16_t high_threshold);
