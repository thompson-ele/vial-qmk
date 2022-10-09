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

#include "styrka_topre.h"

#include "ec.h"
#include "matrix.h"
#include "debug.h"

#define LOW_THRESHOLD 55
#define HIGH_THRESHOLD 65

void keyboard_post_init_kb() {
    debug_enable = true;
    debug_matrix = true;
}

void matrix_init_custom(void) {
    ec_config_t ec_config = {.low_threshold = LOW_THRESHOLD, .high_threshold = HIGH_THRESHOLD};

    ec_init(&ec_config);
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool updated = ec_matrix_scan(current_matrix);

    static int cnt = 0;
    if (cnt++ == 300) {
        cnt = 0;
        ec_dprint_matrix();
        dprintf("\n");
    }

    return updated;
}
