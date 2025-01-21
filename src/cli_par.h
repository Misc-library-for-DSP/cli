// Copyright (c) 2025 Ziga Miklosic
// All Rights Reserved
// This software is under MIT licence (https://opensource.org/licenses/MIT)
////////////////////////////////////////////////////////////////////////////////
/**
*@file      cli_par.h
*@brief     Command Line Interface Device Parameters
*@author    Ziga Miklosic
*@email     ziga.miklosic@gmail.com
*@date      21.01.2025
*@version   V2.1.0
*/
////////////////////////////////////////////////////////////////////////////////
/**
*@addtogroup CLI_PAR_API
* @{ <!-- BEGIN GROUP -->
*
*/
////////////////////////////////////////////////////////////////////////////////

#ifndef __CLI_PAR_H
#define __CLI_PAR_H

////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////
#include <stdint.h>
#include <stdbool.h>

#include "cli.h"

#if ( 1 == CLI_CFG_PAR_USE_EN )

#include "middleware/parameters/parameters/src/par.h"

/**
 *  Compatibility check with Parameters module
 *
 *  Support version V2.0.x
 */
_Static_assert( 2 == PAR_VER_MAJOR );
_Static_assert( 0 <= PAR_VER_MINOR );

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////////////////////////
cli_status_t cli_par_init(void);
cli_status_t cli_par_hndl(void);

#endif // 1 == CLI_CFG_PAR_USE_EN

#endif // __CLI_PAR_H

////////////////////////////////////////////////////////////////////////////////
/**
* @} <!-- END GROUP -->
*/
////////////////////////////////////////////////////////////////////////////////
