# gps-parser

This library provides functions to parse GPS data from a string to individual data members in a struct. It supports latitude, longitude, and altitude attributes.

## Usage

1. Include the `gps_parser.h` header file in your project:

```c
#include "gps_parser.h"

gps_data_t gps_data;

parse_gps_data(gps_string, &gps_data);

printf("Latitude: %f\n", gps_data.latitude);
printf("Longitude: %f\n", gps_data.longitude);

```