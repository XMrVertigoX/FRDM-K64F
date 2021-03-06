/*
 * Generated by erpcgen 1.4.0 on Fri Jan 20 08:45:14 2017.
 *
 * AUTOGENERATED - DO NOT EDIT
 */

#if !defined(_erpc_remote_control_h_)
#define _erpc_remote_control_h_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Aliases data types declarations
typedef struct BoardConfig BoardConfig;
typedef struct AdcConfig AdcConfig;
typedef struct Vector Vector;

// Structures data types declarations
//! Which peripherals are available on used board
struct BoardConfig
{
    bool DAC;
    bool MAG;
    bool RGB[3];
};

//! ADC peripheral configuration
struct AdcConfig
{
    float vref;
    float atomicSteps;
};

//! Struct for accelerometer and magnetometer peripherals
struct Vector
{
    int16_t A_x;
    int16_t A_y;
    int16_t A_z;
    int16_t M_x;
    int16_t M_y;
    int16_t M_z;
};

#endif // _erpc_remote_control_h_
