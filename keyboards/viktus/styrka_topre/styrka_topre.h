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

#pragma once

#include "quantum.h"

#define ____ KC_NO

//lAYOUTS

#define LAYOUT_all( \
    K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, \
    K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E,       K110, K111, \
    K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D,       K20F,       K211, \
    K300, K301,   K302,       K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E,       K310, K311, \
    K400, K401,   K402, K403, K404,                   K408, K409,             K40C, K40D, K40E,       K410, K411  \
) \
{ \
    { K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011 }, \
    { K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, ____, K110, K111 }, \
    { K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, ____, K20F, ____, K211 }, \
    { K300, K301,   K302, ____, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E, ____, K310, K311 }, \
    { K400, K401,   K402, K403, K404, ____, ____, ____, K408, K409, ____, ____, K40C, K40D, K40E, ____, K410, K411 }  \
}

#define LAYOUT_2u_6u( \
    K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E,    K010,    K011, \
    K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E,       K110, K111, \
    K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D,       K20F,       K211, \
    K300, K301,   K302,       K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E,       K310, K311, \
    K400, K401,   K402, K403, K404,                   K408,                   K40C, K40D, K40E,       K410, K411  \
) \
{ \
    { K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, ____, K010, K011 }, \
    { K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, ____, K110, K111 }, \
    { K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, ____, K20F, ____, K211 }, \
    { K300, K301,   K302, ____, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E, ____, K310, K311 }, \
    { K400, K401,   K402, K403, K404, ____, ____, ____, K408, ____, ____, ____, K40C, K40D, K40E, ____, K410, K411 }  \
}

#define LAYOUT_2u_7u( \
    K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E,    K010,    K011, \
    K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E,       K110, K111, \
    K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D,       K20F,       K211, \
    K300, K301,   K302,       K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E,       K310, K311, \
    K400, K401,   K402, K403, K404,                         K409,                   K40D, K40E,       K410, K411  \
) \
{ \
    { K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, ____, K010, K011 }, \
    { K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, ____, K110, K111 }, \
    { K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, ____, K20F, ____, K211 }, \
    { K300, K301,   K302, ____, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E, ____, K310, K311 }, \
    { K400, K401,   K402, K403, K404, ____, ____, ____, ____, K409, ____, ____, ____, K40D, K40E, ____, K410, K411 }  \
}

#define LAYOUT_split_6u( \
    K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, \
    K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E,       K110, K111, \
    K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D,       K20F,       K211, \
    K300, K301,   K302,       K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E,       K310, K311, \
    K400, K401,   K402, K403, K404,                   K408,                   K40C, K40D, K40E,       K410, K411  \
) \
{ \
    { K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011 }, \
    { K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, ____, K110, K111 }, \
    { K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, ____, K20F, ____, K211 }, \
    { K300, K301,   K302, ____, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E, ____, K310, K311 }, \
    { K400, K401,   K402, K403, K404, ____, ____, ____, K408, ____, ____, ____, K40C, K40D, K40E, ____, K410, K411 }  \
}

#define LAYOUT_split_7u( \
    K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, \
    K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E,       K110, K111, \
    K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D,       K20F,       K211, \
    K300, K301,   K302,       K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E,       K310, K311, \
    K400, K401,   K402, K403, K404,                         K409,                   K40D, K40E,       K410, K411  \
) \
{ \
    { K000, K001,   K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011 }, \
    { K100, K101,   K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, ____, K110, K111 }, \
    { K200, K201,   K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, ____, K20F, ____, K211 }, \
    { K300, K301,   K302, ____, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D, K30E, ____, K310, K311 }, \
    { K400, K401,   K402, K403, K404, ____, ____, ____, ____, K409, ____, ____, ____, K40D, K40E, ____, K410, K411 }  \
}
